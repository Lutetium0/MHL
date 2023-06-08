using System.Collections;
using System.Collections.Generic;
using MotionFramework.Window;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using Moon;

    [Window((int)EWindowLayer.Panel, true)]
    public class UILobbyWindow : CanvasWindow
    {
        Button matchButton;
        // 窗口创建（窗口生命周期内只被调用一次）
        public override void OnCreate()
        {
            matchButton = GetUIComponent<Button>("UILobbyWindow/MatchButton");
            Moon.Network.Register<NetMessage.S2CMatchSuccess>((res) =>
            {
                UITools.CloseWindow<UILobbyWindow>();
                FsmManager.Instance.Change(nameof(NodeGame));
            });
            matchButton.onClick.AddListener(OnClickMatch);
        }

        // 窗口销毁（窗口生命周期内只被调用一次）
        public override void OnDestroy()
        {
        }

        // 窗口刷新（窗口生命周期内可能被调用多次）
        public override void OnRefresh()
        {
        }

        // 窗口更新（窗口生命周期内每帧被调用）
        public override void OnUpdate()
        {
        }
        public async void OnClickMatch()
        {
            UITools.OpenWindow<UIMatchWaitWindow>();
            await Moon.Network.Call<NetMessage.S2CMatch>(NetUserData.GameSeverID, new NetMessage.C2SMatch { });
        }
    }