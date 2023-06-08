local moon = require("moon")
local json = require("json")
local redisd = require("redisd")
---@type sqlclient
local pgsql = require("sqldriver")

local verify_proto = require("common.verify_proto")

local jencode = json.encode

local jdecode = json.decode

local redis_call = redisd.call

local redis_hcall = redisd.hash_call

local redis_hsend = redisd.hash_send

local _M = {}

function _M.loadallopenid(addr_db)
    local res, err = redis_call(addr_db, "hgetall", "openidmap")
    if res == false then
        error("loadallopenid failed:" .. tostring(err))
    end
    return res
end

function _M.loadserverdata(addr_db)
    local res, err = redis_call(addr_db, "get", "serverdata")
    if res == false then
        error("loadserverdata failed:" .. tostring(err))
    end
    return res
end

function _M.saveserverdata(addr_db, data)
    local res, err = redis_call(addr_db, "set", "serverdata", data)
    if res == false then
        error("loadserverdata failed:" .. tostring(err))
    end
    return res
end

function _M.queryuserid(addr_db, openid)
    local res, err = redis_call(addr_db, "hget", "openidmap", openid)
    if res == false then
        error("queryuserid failed:" .. tostring(err))
    end

    if res then
        return math.tointeger(res)
    end

    return res
end

function _M.insertuserid(addr_db, openid, userid)
    return redis_call(addr_db, "hset", "openidmap", openid, userid)
end

function _M.loaduser(addr_db, userid)
    local res, err = redis_hcall(userid, addr_db, "hget", "usermap", userid)
    if res == false then
        error("loaduser failed:" .. tostring(err))
    end

    if res then
        res = jdecode(res)
    end

    return res
end

function _M.saveuser(addr_db, userid, data)
    if moon.DEBUG() then
        verify_proto("UserData", data)
        moon.warn("verify success")
    end

    data = jencode(data)
    redis_hsend(userid, addr_db, "hset", "usermap", userid, data)
end

if moon.queryservice("db_game") > 0 then
    ---async
---@param db integer
---@param uid integer
---@overload fun(db: integer, uid: integer):boolean,string
---@overload fun(db: integer, uid: integer):UserData
---@overload fun(db: integer, uid: integer):nil
function _M.loaduser(db, uid)
    local res, err = pgsql.query(db, string.format("select * from userdata where uid=%s;", uid), uid)
    if not res then
        ---xpcall lua error
        return false, "loaduser "..tostring(err)
    end

    ---check sql error
    if res.code then
        return false, table.tostring(res)
    end

    local data = res.data[1]
    if data then
        return jdecode(data)
    end
    ---空数据:新玩家
   return nil
end

function _M.saveuser(db, uid, data)
    assert(data)

    if moon.DEBUG() then
        verify_proto("UserData", data)
        moon.warn("verify success")
    end

    local tmp = {
        "insert into userdata(uid, data) values(",
        uid,
        ",'",
        data, -- auto encode as json
        "') on conflict (uid) do update set data = excluded.data;"
    }
    pgsql.execute(db, tmp, uid)
end
end



return _M
