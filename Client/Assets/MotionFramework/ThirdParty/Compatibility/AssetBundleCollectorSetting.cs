﻿using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace YooAsset.Editor
{
	public class AssetBundleCollectorSetting : ScriptableObject
	{
		[Serializable]
		public class Collector
		{
			/// <summary>
			/// 收集的文件夹路径
			/// </summary>
			public string CollectDirectory = string.Empty;

			/// <summary>
			/// 打包规则类名
			/// </summary>
			public string PackRuleName = string.Empty;

			/// <summary>
			/// 过滤规则类名
			/// </summary>
			public string FilterRuleName = string.Empty;

			/// <summary>
			/// 不写入资源路径到清单文件
			/// 注意：对于不依赖于代码加载的收集资源，可以禁止写入资源路径信息到清单文件
			/// </summary>
			public bool DontWriteAssetPath = false;

			/// <summary>
			/// 资源标记
			/// </summary>
			public string AssetTags = string.Empty;

			public override string ToString()
			{
				return $"Directory : {CollectDirectory} | {PackRuleName} | {FilterRuleName} | {DontWriteAssetPath} | {AssetTags}";
			}
		}

		/// <summary>
		/// 自动收集着色器
		/// </summary>
		public bool AutoCollectShaders = false;

		/// <summary>
		/// 自动收集的着色器资源包名
		/// </summary>
		public string ShadersBundleName = "myshaders";

		/// <summary>
		/// 收集列表
		/// </summary>
		public List<Collector> Collectors = new List<Collector>();
	}
}