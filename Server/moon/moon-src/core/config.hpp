#pragma once
#include "common/common.hpp"
#include "common/buffer.hpp"

namespace moon
{
    constexpr uint32_t WORKER_ID_SHIFT = 24;// support 255 worker threads.
    constexpr uint32_t WORKER_MAX_SERVICE = (1<<24)-1;// max service count per worker thread.
    constexpr uint32_t BUFFER_HEAD_RESERVED = 16;//max : websocket header max len 14 bytes.

    constexpr uint8_t PTYPE_UNKNOWN = 0;
    constexpr uint8_t PTYPE_SYSTEM = 1;
    constexpr uint8_t PTYPE_TEXT = 2;
    constexpr uint8_t PTYPE_LUA = 3;
    constexpr uint8_t PTYPE_ERROR = 4;
    constexpr uint8_t PTYPE_DEBUG = 5;//
    constexpr uint8_t PTYPE_SHUTDOWN = 6;//
    constexpr uint8_t PTYPE_TIMER = 7;//
    constexpr uint8_t PTYPE_SOCKET_TCP = 8; //
    constexpr uint8_t PTYPE_SOCKET_UDP = 9;//
    constexpr uint8_t PTYPE_SOCKET_WS = 10;   // websocket
    constexpr uint8_t PTYPE_SOCKET_MOON = 11; //

    constexpr  std::string_view STR_LF = "\n"sv;
    constexpr  std::string_view STR_CRLF = "\r\n"sv;
    constexpr  std::string_view STR_DCRLF = "\r\n\r\n"sv;

    enum class state
    {
        unknown,
        init,
        ready,
        stopping,
        stopped
    };

    enum class buffer_flag :uint8_t
    {
        none = 0,
        pack_size = 1 << 0,
        close = 1 << 1,
        chunked = 1 << 2,
        broadcast = 1 << 3,
        ws_text = 1 << 4,
        ws_ping = 1 << 5,
        ws_pong = 1 << 6,
        buffer_flag_max,
    };

    enum class socket_data_type :std::uint8_t
    {
        socket_connect = 1,
        socket_accept = 2,
        socket_recv = 3,
        socket_close = 4,
        socket_ping = 5,
        socket_pong = 6,
    };

    enum class enable_chunked :std::uint8_t
    {
        none = 0,
        send = 1 << 0,//
        receive = 1 << 1,//
        both = 3,
    };

    template<typename Enum>
    inline bool enum_has_any_flag(Enum flags, Enum contains)
    {
        using under_type = std::underlying_type<enable_chunked>::type;
        return (static_cast<under_type>(flags) & static_cast<under_type>(contains))!= 0;
    }

    struct service_conf
    {
        bool unique = false;
        uint32_t threadid = 0;
        uint32_t creator = 0;
        int32_t session = 0;
        size_t memlimit = 0;
        std::string type;
        std::string name;
        std::string source;
        std::string params;
    };

    constexpr uint32_t BOOTSTRAP_ADDR = 0x01000001;//The first service's id

    using message_size_t = uint16_t;//PTYPE_SOCKET_MOON message length type
    using buffer_ptr_t = std::shared_ptr<buffer>;
}





