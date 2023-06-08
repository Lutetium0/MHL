using System;
using System.Collections;
using System.Collections.Generic;
using MotionFramework.AI;
using MotionFramework.Scene;

public class NodeLogin : IFsmNode
{
	public string Name { get; }

	public NodeLogin()
	{
		Name = nameof(NodeLogin);
	}
	void IFsmNode.OnEnter()
	{
		var uiwindow = UITools.OpenWindow<UILoginWindow>();
		uiwindow.Completed += Uiwindow_Completed;

		string sceneName = "Scenes/Login";
		SceneManager.Instance.ChangeMainScene(sceneName, null);
	}

	private void Uiwindow_Completed(MotionFramework.Window.UIWindow obj)
	{
		GameLogManager.Instance.Log("Login window load complete.");
	}

	void IFsmNode.OnUpdate()
	{
	}
	void IFsmNode.OnFixedUpdate()
	{
	}
	void IFsmNode.OnExit()
	{
		UITools.CloseWindow<UILoginWindow>();
	}
	void IFsmNode.OnHandleMessage(object msg)
	{
	}
}