using System;
using System.Collections;
using System.Collections.Generic;
using MotionFramework.Scene;
using MotionFramework.Audio;
using MotionFramework.Resource;
using MotionFramework.AI;
using YooAsset;

public class NodeLobby : IFsmNode
{
	public string Name { get; }

	public NodeLobby()
	{
		Name = nameof(NodeLobby);
	}
	void IFsmNode.OnEnter()
	{
		var uiwindow = UITools.OpenWindow<UILobbyWindow>();
		uiwindow.Completed += Uiwindow_Completed;
		
		string sceneName = "Scenes/Lobby";
		SceneManager.Instance.ChangeMainScene(sceneName, OnSceneLoad);
	}
	
	private void Uiwindow_Completed(MotionFramework.Window.UIWindow obj)
	{
		GameLogManager.Instance.Log("Lobby window load complete.");
	}
	
	void IFsmNode.OnUpdate()
	{
	}
	void IFsmNode.OnFixedUpdate()
	{
	}
	void IFsmNode.OnExit()
	{
		UITools.CloseWindow<UILobbyWindow>();
		UITools.CloseWindow<UIMatchWaitWindow>();
	}
	void IFsmNode.OnHandleMessage(object msg)
	{
	}

	private void OnSceneLoad(SceneOperationHandle handle)
	{
		if (handle.Status != EOperationStatus.Succeed)
			return;
	}
}