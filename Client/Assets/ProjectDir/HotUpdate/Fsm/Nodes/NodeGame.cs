using System;
using System.Collections;
using System.Collections.Generic;
using MotionFramework.Scene;
using MotionFramework.Audio;
using MotionFramework.Resource;
using MotionFramework.AI;
using YooAsset;

public class NodeGame : IFsmNode
{
	public string Name { get; }

	public NodeGame()
	{
		Name = nameof(NodeGame);
	}
	void IFsmNode.OnEnter()
	{
		string sceneName = "Scenes/Game";
		SceneManager.Instance.ChangeMainScene(sceneName, OnSceneLoad);
	}
	
	private void OnSceneLoad(SceneOperationHandle handle)
	{
		UITools.OpenWindow<UIGameWindow>();
	}
	
	void IFsmNode.OnUpdate()
	{
	}
	void IFsmNode.OnFixedUpdate()
	{
	}
	void IFsmNode.OnExit()
	{
		UITools.CloseWindow<UIGameWindow>();
	}
	
	void IFsmNode.OnHandleMessage(object msg)
	{
		
	}
}