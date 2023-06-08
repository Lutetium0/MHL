using System.Collections;
using System.Collections.Generic;
using MotionFramework;
using UnityEngine;

public class GameMain
{
    public static void Start()
    {
        //创建游戏日志输出管理器
        MotionEngine.CreateModule<GameLogManager>();
		
        //创建服务器网络连接器
        MotionEngine.CreateModule<MoonNetworkManager>();
        
        DataManager.Instance.Init();
        FsmManager.Instance.Init();

        GameLogManager.Instance.Log("Start Game");
        FsmManager.Instance.StartGame();
    }

    public static void Update()
    {
        DataManager.Instance.Update();
        FsmManager.Instance.Update();
    }

    public static void FixedUpdate()
    {
        FsmManager.Instance.FixedUpdate();
    }
}  