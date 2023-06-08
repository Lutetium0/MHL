using System.Collections;
using System.Collections.Generic;
using System.Reflection;
using UnityEngine;
using MotionFramework;
using UnityEngine.SceneManagement;

public class MoonNetworkManager : ModuleSingleton<MoonNetworkManager>, IModule
{
    GameObject go;
	    
    void IModule.OnCreate(System.Object param)
    {
        go = new GameObject("MoonNetwork");
        go.AddComponent<Moon.Network>();
        UnityEngine.Object.DontDestroyOnLoad(go);

        Moon.NetUserData.username = string.Empty;
        Moon.NetUserData.uid = 0;
        Moon.NetUserData.GameSeverID = 0;
        Moon.NetUserData.time = 0;

        Moon.Network.OnError = (connectId, errmsg) =>
        {
            var str = string.Format("Sessonid: {0} ErrorMessage: {1}", connectId, errmsg);
            GameLogManager.Instance?.Log(str);
            if(connectId == Moon.NetUserData.GameSeverID)
            {
                FsmManager.Instance.Change(nameof(NodeLogin));
            }
        };
    }
    void IModule.OnUpdate()
    {
			
    }
    void IModule.OnDestroy()
    {
			
    }
    void IModule.OnGUI()
    {
			
    }
}