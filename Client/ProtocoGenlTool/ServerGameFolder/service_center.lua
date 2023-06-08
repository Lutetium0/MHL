--require("common.LuaPanda").start("127.0.0.1", 8818)
local moon = require("moon")
local common = require("common")

local conf = ...

---@class center_context:base_context
---@field scripts center_scripts
local context ={
    conf = conf,
    match_map={},
    match_queue={},
    docmd = nil,
    addr_gate = 0,
    addr_auth = 0,
}



common.setup(context)
