local moon = require("moon")

local timerid = moon.timeout(1000, function()
    error("must not print")
end)
moon.remove_timer(timerid)

moon.async(function()
    print("coroutine timer start")
    moon.sleep(1000)
    print("coroutine timer tick 1 seconds")
    moon.sleep(1000)
    print("coroutine timer tick 1 seconds")
    moon.sleep(1000)
    print("coroutine timer tick 1 seconds")
    moon.sleep(1000)
    print("coroutine timer tick 1 seconds")
    moon.sleep(1000)
    print("coroutine timer tick 1 seconds")
    print("coroutine timer end")
end)





