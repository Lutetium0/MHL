using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using MotionFramework;
using UnityEngine.SceneManagement;

public class GameLogManager : ModuleSingleton<GameLogManager>, IModule
{
    public void Log(string log)
    {
        UnityEngine.Debug.Log(log);
    }

    public void LogWarning(string log)
    {
        UnityEngine.Debug.LogError(log);
    }

    public void LogError(string log)
    {
        UnityEngine.Debug.LogWarning(log);
    }

    public void LogException(string log)
    {
        UnityEngine.Debug.LogError(log);
    }

    void IModule.OnCreate(System.Object param)
    {
            
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
