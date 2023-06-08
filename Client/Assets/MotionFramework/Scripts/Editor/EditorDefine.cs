﻿//--------------------------------------------------
// Motion Framework
// Copyright©2018-2020 何冠峰
// Licensed under the MIT license
//--------------------------------------------------

namespace MotionFramework.Editor
{
	public class EditorDefine
	{
		/// <summary>
		/// 资源包收集工具的配置文件存储路径
		/// </summary>
		public const string AssetBundleCollectorSettingFilePath = "Assets/MotionSetting/AssetBundleCollectorSetting.asset";

		/// <summary>
		/// UI面板的配置文件存储路径
		/// </summary>
		public const string UIPanelSettingFilePath = "Assets/MotionSetting/UIPanelSetting.asset";
	}

	/// <summary>
	/// 资源搜索类型
	/// </summary>
	public enum EAssetSearchType
	{
		All,
		RuntimeAnimatorController,
		AnimationClip,
		AudioClip,
		AudioMixer,
		Font,
		Material,
		Mesh,
		Model,
		PhysicMaterial,
		Prefab,
		Scene,
		Script,
		Shader,
		Sprite,
		Texture,
		VideoClip,
	}

	/// <summary>
	/// 资源文件格式
	/// </summary>
	public enum EAssetFileExtension
	{
		prefab, //预制体
		unity, //场景
		fbx, //模型
		anim, //动画
		controller, //控制器
		png, //图片
		jpg, //图片
		mat, //材质球
		shader, //着色器
		ttf, //字体
		cs, //脚本
	}
}