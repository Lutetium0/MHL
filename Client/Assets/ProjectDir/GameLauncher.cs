using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.IO;
using System.Reflection;
using HybridCLR;
using UnityEngine;
using MotionFramework;
using MotionFramework.Console;
using MotionFramework.Resource;
using MotionFramework.Event;
using MotionFramework.Config;
using MotionFramework.Audio;
using MotionFramework.Network;
using MotionFramework.Scene;
using MotionFramework.Pool;
using MotionFramework.Window;
using MotionFramework.Tween;
using YooAsset;

public class GameLauncher : MonoBehaviour
{
	public EPlayMode PlayMode = EPlayMode.EditorSimulateMode;
	private Assembly hotUpdateAss;
	
	private bool gameStart = false;
	
	void Awake()
	{
		LoadMetadataForAOTAssemblies();
		
#if !UNITY_EDITOR
		LoadMetadataForAOTAssemblies();
		PlayMode = EPlayMode.OfflinePlayMode;
#endif

		// 初始化应用
		InitAppliaction();

		// 初始化控制台
		if (Application.isEditor || Debug.isDebugBuild)
			DeveloperConsole.Initialize();

		// 初始化框架
		MotionEngine.Initialize(this, HandleMotionFrameworkLog);
	}
	void Start()
	{
		// 创建游戏模块
		StartCoroutine(CreateGameModules());
	}
	void Update()
	{
		// 更新框架
		MotionEngine.Update();
		if (gameStart)
		{
			hotUpdateAss.GetType("GameMain").GetMethod("Update").Invoke(null, null);
		}
	}
	void FixedUpdate()
	{
		if (gameStart)
		{
			hotUpdateAss.GetType("GameMain").GetMethod("FixedUpdate").Invoke(null, null);
		}
	}
	void OnGUI()
	{
		// 绘制控制台
		if (Application.isEditor || Debug.isDebugBuild)
			DeveloperConsole.Draw();
	}
	
	/// <summary>
	/// 为aot assembly加载原始metadata， 这个代码放aot或者热更新都行。
	/// 一旦加载后，如果AOT泛型函数对应native实现不存在，则自动替换为解释模式执行
	/// </summary>
	private void LoadMetadataForAOTAssemblies()
	{
		List<string> aotMetaAssemblyFiles = new List<string>()
		{
			"MotionFramework.dll",
			"UnityEngine.CoreModule.dll",
			"mscorlib.dll",
			"protobuf-net.dll",
		};
		
		/// 注意，补充元数据是给AOT dll补充元数据，而不是给热更新dll补充元数据。
		/// 热更新dll不缺元数据，不需要补充，如果调用LoadMetadataForAOTAssembly会返回错误
		/// 
		HomologousImageMode mode = HomologousImageMode.SuperSet;
		foreach (var aotDllName in aotMetaAssemblyFiles)
		{
			byte[] dllBytes = ReadBytesFromStreamingAssets(aotDllName + ".bytes");
			// 加载assembly对应的dll，会自动为它hook。一旦aot泛型函数的native函数不存在，用解释器版本代码
			LoadImageErrorCode err = RuntimeApi.LoadMetadataForAOTAssembly(dllBytes, mode);
			Debug.Log($"LoadMetadataForAOTAssembly:{aotDllName}. mode:{mode} ret:{err}");
		}
	}
	
	public byte[] ReadBytesFromStreamingAssets(string file)
	{
		// Android平台不支持直接读取StreamingAssets下文件，请自行修改实现
		return File.ReadAllBytes($"{Application.streamingAssetsPath}/{file}");
	}

	/// <summary>
	/// 初始化应用
	/// </summary>
	private void InitAppliaction()
	{
		Application.runInBackground = true;
		Application.backgroundLoadingPriority = ThreadPriority.High;

		// 设置最大帧数
		Application.targetFrameRate = 60;

		// 屏幕不休眠
		Screen.sleepTimeout = SleepTimeout.NeverSleep;
	}

	/// <summary>
	/// 监听框架日志
	/// </summary>
	private void HandleMotionFrameworkLog(ELogLevel logLevel, string log)
	{
		if (logLevel == ELogLevel.Log)
		{
			UnityEngine.Debug.Log(log);
		}
		else if (logLevel == ELogLevel.Error)
		{
			UnityEngine.Debug.LogError(log);
		}
		else if (logLevel == ELogLevel.Warning)
		{
			UnityEngine.Debug.LogWarning(log);
		}
		else if (logLevel == ELogLevel.Exception)
		{
			UnityEngine.Debug.LogError(log);
		}
		else
		{
			throw new NotImplementedException($"{logLevel}");
		}
	}

	/// <summary>
	/// 创建游戏模块
	/// </summary>
	private IEnumerator CreateGameModules()
	{
		// 创建事件管理器
		MotionEngine.CreateModule<EventManager>();

		// 创建补间管理器
		MotionEngine.CreateModule<TweenManager>();

		// 创建资源管理器
		string locationRoot = "Assets/ProjectDir/Bundles/";
		if (PlayMode == EPlayMode.EditorSimulateMode)
		{
			var resourceCreateParam = new EditorSimulateModeParameters();
			resourceCreateParam.SimulateManifestFilePath = EditorSimulateModeHelper.SimulateBuild("DefaultPackage");
			MotionEngine.CreateModule<ResourceManager>(resourceCreateParam);
			var operation = ResourceManager.Instance.InitializeAsync(locationRoot);
			yield return operation;
		}
		else if (PlayMode == EPlayMode.OfflinePlayMode)
		{
			var resourceCreateParam = new OfflinePlayModeParameters();
			MotionEngine.CreateModule<ResourceManager>(resourceCreateParam);
			var operation = ResourceManager.Instance.InitializeAsync(locationRoot);
			yield return operation;
		}
		else
		{
			throw new System.NotImplementedException();
		}

		// 创建对象池管理器
		var poolCreateParam = new GameObjectPoolManager.CreateParameters();
		poolCreateParam.DefaultDestroyTime = 5f;
		MotionEngine.CreateModule<GameObjectPoolManager>(poolCreateParam);

		// 创建音频管理器
		MotionEngine.CreateModule<AudioManager>();

		// 创建配置表管理器
		MotionEngine.CreateModule<ConfigManager>();

		// 创建场景管理器
		MotionEngine.CreateModule<SceneManager>();

		// 创建窗口管理器
		MotionEngine.CreateModule<WindowManager>();
		
		//////////////////////////////////////////////////////
		//以下代码正式开始启动游戏业务
		//////////////////////////////////////////////////////

		//调用热更代码进入游戏
		// Editor环境下，HotUpdate.dll.bytes已经被自动加载，不需要加载，重复加载反而会出问题。
 #if !UNITY_EDITOR
         hotUpdateAss = Assembly.Load(File.ReadAllBytes($"{Application.streamingAssetsPath}/HotUpdate.dll.bytes"));
 #else
 		// Editor下无需加载，直接查找获得HotUpdate程序集
 		hotUpdateAss = System.AppDomain.CurrentDomain.GetAssemblies().First(a => a.GetName().Name == "HotUpdate");
 #endif
		
		hotUpdateAss.GetType("GameMain").GetMethod("Start").Invoke(null, null);
		
		gameStart = true;
	}
}