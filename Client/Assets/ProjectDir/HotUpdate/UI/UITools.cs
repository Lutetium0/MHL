using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using MotionFramework.Window;

public static class UITools
{
	/// <summary>
	/// 打开窗口
	/// </summary>
	public static UIWindow OpenWindow<T>(object userData = null) where T : UIWindow
	{
		string location = $"UIWindows/{typeof(T).Name}/{typeof(T).Name}";
		GameLogManager.Instance.Log($"Open : {typeof(T).Name}");
		return WindowManager.Instance.OpenWindow(typeof(T), location, userData);
	}

	/// <summary>
	/// 关闭窗口
	/// </summary>
	public static void CloseWindow<T>() where T : UIWindow
	{
		GameLogManager.Instance.Log($"Close : {typeof(T).Name}");
		WindowManager.Instance.CloseWindow(typeof(T));
	}
}