using System.Collections;
using System.Collections.Generic;
using MotionFramework.Window;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using Moon;

    [Window((int)EWindowLayer.Panel, true)]
    public class UILoginWindow : CanvasWindow
    {
        InputField userName;
        InputField Ip;
        InputField Port;
        Button loginButton;
        // 窗口创建（窗口生命周期内只被调用一次）
        public override void OnCreate()
        {
            userName = GetUIComponent<InputField>("UILoginWindow/Username");
            Ip = GetUIComponent<InputField>("UILoginWindow/IP");
            Port = GetUIComponent<InputField>("UILoginWindow/Port");
            loginButton = GetUIComponent<Button>("UILoginWindow/LoginButton");
            if (Ip.text.Length == 0)
            {
                Ip.text = "127.0.0.1";
            }

            if (Port.text.Length == 0)
            {
                Port.text = 12345.ToString();
            }

            userName.text = "";

            if (NetUserData.GameSeverID != 0)
            {
                Moon.Network.Close(NetUserData.GameSeverID);
                NetUserData.GameSeverID = 0;
            }

            loginButton.onClick.AddListener(OnClickLogin);
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

        public async void OnClickLogin()
        {
            if (NetUserData.GameSeverID == 0)
            {
                if (Ip.text.Length == 0)
                {
                    Ip.text = "127.0.0.1";
                }

                if (Port.text.Length == 0)
                {
                    Port.text = 12345.ToString();
                }

                var result = await Moon.Network.AsyncConnect(Ip.text, int.Parse(Port.text), Moon.SocketProtocolType.TcpMoon);
                if (result.ConnectionId == 0)
                {
                    GameLogManager.Instance.LogError(result.Data.GetString());
                    return;
                }

                NetUserData.GameSeverID = result.ConnectionId;
            }

            var v = await Moon.Network.Call<NetMessage.S2CLogin>(NetUserData.GameSeverID,
                new NetMessage.C2SLogin { Openid = userName.text });
            if (v.Ok)
            {
                NetUserData.time = v.Time;
                NetUserData.username = userName.text;
                FsmManager.Instance.Change(nameof(NodeLobby));
            }
            else
            {
                GameLogManager.Instance.LogError("auth failed");
            }
        }
    }