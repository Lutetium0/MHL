using System.Collections;
using System.Collections.Generic;
using System;
using System.IO;
using System.Linq;
using System.Reflection;
using UnityEngine;

public static class TypeHelper
{
	public static T GetAttribute<T>(System.Type type) where T : Attribute
	{
		var attributeArray = type.GetCustomAttributes(typeof(T), false);
		return attributeArray[0] as T;
	}

	public static Type GetType(string typeName)
	{
		//调用热更代码进入游戏
		// Editor环境下，HotUpdate.dll.bytes已经被自动加载，不需要加载，重复加载反而会出问题。
#if !UNITY_EDITOR
        Assembly hotUpdateAss = Assembly.Load(File.ReadAllBytes($"{Application.streamingAssetsPath}/HotUpdate.dll.bytes"));
#else
		// Editor下无需加载，直接查找获得HotUpdate程序集
		Assembly hotUpdateAss = System.AppDomain.CurrentDomain.GetAssemblies().First(a => a.GetName().Name == "HotUpdate");
#endif
		
		return hotUpdateAss.GetType(typeName);
	}
}