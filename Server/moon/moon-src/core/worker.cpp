#include "worker.h"
#include "common/time.hpp"
#include "common/string.hpp"
#include "common/hash.hpp"
#include "message.hpp"
#include "service.hpp"
#include "server.h"

namespace moon
{
    worker::worker(server* srv, uint32_t id)
        : workerid_(id)
        , server_(srv)
        , io_ctx_(1)
        , work_(asio::make_work_guard(io_ctx_))
    {
    }

    worker::~worker()
    {
        wait();
    }

    uint32_t worker::alive()
    {
        auto n = version_;
        asio::post(io_ctx_, [this]() {
            ++version_;
            });
        return n;
    }

    void worker::run()
    {
        socket_ = std::make_unique<moon::socket>(server_, this, io_ctx_);

        thread_ = std::thread([this]() {
            CONSOLE_INFO(server_->logger(), "WORKER-%u START", workerid_);
            io_ctx_.run();
            socket_->close_all();
            services_.clear();
            CONSOLE_INFO(server_->logger(), "WORKER-%u STOP", workerid_);
        });

    }

    void worker::stop()
    {
        asio::post(io_ctx_, [this] {
            message msg;
            msg.set_type(PTYPE_SHUTDOWN);
            for (auto& it : services_)
            {
                it.second->dispatch(&msg);
            }
         });
    }

    void worker::wait()
    {
        io_ctx_.stop();
        if (thread_.joinable())
        {
            thread_.join();
        }
    }

    void worker::new_service(std::unique_ptr<service_conf> conf)
    {
        count_.fetch_add(1, std::memory_order_release);
        asio::post(io_ctx_, [this, conf = std::move(conf)](){
            do
            {
                size_t counter = 0;
                uint32_t serviceid = 0;
                do
                {
                    if (counter >= WORKER_MAX_SERVICE)
                    {
                        serviceid = 0;
                        CONSOLE_ERROR(server_->logger()
                            , "new service failed: can not get more service id. worker[%u] service num[%zu].", id(), services_.size());
                        break;
                    }

                    ++nextid_;
                    if (nextid_ == WORKER_MAX_SERVICE)
                    {
                        nextid_ = 1;
                    }
                    serviceid = nextid_ | (id() << WORKER_ID_SHIFT);
                    ++counter;
                } while (services_.find(serviceid) != services_.end());

                if (serviceid == 0)
                {
                    break;
                }

                auto s = server_->make_service(conf->type);
                MOON_ASSERT(s, moon::format("new service failed:service type[%s] was not registered", conf->type.data()).data());
                s->set_id(serviceid);
                s->logger(server_->logger());
                s->set_unique(conf->unique);
                s->set_server_context(server_, this);

                if (!s->init(*conf))
                {
                    if (serviceid == BOOTSTRAP_ADDR)
                    {
                        server_->stop(-1);
                    }
                    break;
                }
                s->ok(true);
                services_.emplace(serviceid, std::move(s));

                if (0 != conf->session)
                {
                    server_->response(conf->creator, std::to_string(serviceid), conf->session);
                }
                return;
            } while (false);

            count_.fetch_sub(1, std::memory_order_release);
            if (services_.empty())
            {
                shared(true);
            }

            if (0 != conf->session)
            {
                server_->response(conf->creator, "0"sv, conf->session);
            }
        });
    }

    void worker::remove_service(uint32_t serviceid, uint32_t sender, uint32_t sessionid)
    {
        asio::post(io_ctx_, [this, serviceid, sender, sessionid]() {
            if (auto s = find_service(serviceid); nullptr != s)
            {
                auto name = s->name();
                auto id = s->id();
                count_.fetch_sub(1, std::memory_order_release);
                server_->response(sender, "service destroy"sv, sessionid);
                services_.erase(serviceid);
                if (services_.empty()) shared(true);

                if (server_->get_state() == state::ready)
                {
                    auto content = moon::format("_service_exit,name:%s serviceid:%08X", name.data(), id);
                    auto buf = message::create_buffer();
                    buf->write_back(content.data(), content.size());
                    server_->broadcast(serviceid, buf, PTYPE_SYSTEM);
                }

                if (serviceid == BOOTSTRAP_ADDR)
                {
                    server_->set_state(state::stopping);
                }
            }
            else
            {
                server_->response(sender, moon::format("service [%08X] not found", serviceid), sessionid, PTYPE_ERROR);
            }
         });
    }

    asio::io_context& worker::io_context()
    {
        return io_ctx_;
    }

    void worker::send(message&& msg)
    {
        ++mqsize_;
        if (mq_.push_back(std::move(msg)) == 1)
        {
            asio::post(io_ctx_, [this]() {
                if (!mq_.try_swap(swapmq_))
                    return;

                service* s = nullptr;
                for (auto& msg : swapmq_)
                {
                    handle_one(s, std::move(msg));
                    --mqsize_;
                }

                swapmq_.clear();
            });
        }
    }

    uint32_t worker::id() const
    {
        return workerid_;
    }

    service* worker::find_service(uint32_t serviceid) const
    {
        auto iter = services_.find(serviceid);
        if (services_.end() != iter)
        {
            return iter->second.get();
        }
        return nullptr;
    }

    void worker::shared(bool v)
    {
        shared_ = v;
    }

    bool worker::shared() const
    {
        return shared_.load();
    }

    void worker::handle_one(service*& s, message&& msg)
    {
        uint32_t sender = msg.sender();
        uint32_t receiver = msg.receiver();
        uint8_t type = msg.type();
        if (msg.broadcast())
        {
            for (auto& it : services_)
            {
                if (!it.second->unique() && type == PTYPE_SYSTEM)
                {
                    continue;
                }

                if (it.second->ok() && it.second->id() != sender)
                {
                    handle_message(it.second, msg);
                }
            }
            return;
        }

        if (nullptr == s || s->id() != receiver)
        {
            s = find_service(receiver);
            if (nullptr == s || !s->ok())
            {
                if (sender != 0 && msg.type()!=PTYPE_TIMER)
                {
                    std::string hexdata = moon::hex_string({ msg.data(),msg.size() });
                    std::string str = moon::format("[%08X] attempt send to dead service [%08X]: %s."
                        , sender
                        , receiver
                        , hexdata.data());

                    msg.set_sessionid(-msg.sessionid());
                    server_->response(sender, str, msg.sessionid(), PTYPE_ERROR);
                }
                return;
            }
        }

        double start_time = moon::time::clock();
        handle_message(s, std::move(msg));
        double cost_time = moon::time::clock() - start_time;
        s->add_cpu_cost(cost_time);
        cpu_cost_ += cost_time;
        if (cost_time > 0.1)
        {
            CONSOLE_WARN(server_->logger(),
                "worker %u handle one message(%d) cost %f, from %08X to %08X", id(), type, cost_time, sender, receiver);
        }
    }
}
