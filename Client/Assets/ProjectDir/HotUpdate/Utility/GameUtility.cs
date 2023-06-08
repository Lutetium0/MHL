using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameUtility : MonoBehaviour
{
    public static bool PlayerGetBool(string key, bool defaultValue)
    {
        int defaultValueInt = defaultValue ? 1 : 0;
        if (defaultValue)
        {
            defaultValueInt = 1;
        }
        return UnityEngine.PlayerPrefs.GetInt(key, defaultValueInt) == 1;
    }
    
    public static void PlayerSetBool(string key, bool value)
    {
        int valueInt = value? 1 : 0;
        
        UnityEngine.PlayerPrefs.SetInt(key, valueInt);
    }
}
