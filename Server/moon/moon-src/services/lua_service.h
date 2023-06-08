#pragma once
#include "common/lua_utility.hpp"
#include "service.hpp"

struct callback_context
{
    lua_State* L = nullptr;
};

class lua_service : public moon::service
{
public:
    lua_service();

    ~lua_service();

private:
    bool init(const moon::service_conf& conf) override;

    void dispatch(moon::message* msg) override;

    static void* lalloc(void* ud, void* ptr, size_t osize, size_t nsize);

public:
    size_t mem = 0;
    size_t mem_limit = std::numeric_limits<size_t>::max();
    size_t mem_report = 8 * 1024 * 1024;

    static lua_service* get(lua_State* L);

    static int set_callback(lua_State* L);

private:
    callback_context* cb_ctx = nullptr;
    std::unique_ptr<lua_State, moon::state_deleter> lua_;
};