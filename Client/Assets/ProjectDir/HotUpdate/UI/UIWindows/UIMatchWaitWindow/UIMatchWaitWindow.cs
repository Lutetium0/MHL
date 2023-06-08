using System.Collections;
using System.Collections.Generic;
using MotionFramework.Window;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using Moon;
using MotionFramework;

[Window((int)EWindowLayer.Panel, true)]
    public class UIMatchWaitWindow : CanvasWindow
    {
        UIMatchWaitCountDown countDown;
        // 窗口创建（窗口生命周期内只被调用一次）
        public override void OnCreate()
        {
            countDown = Go.AddComponent<UIMatchWaitCountDown>();
            countDown.countDownText = GetUIComponent<Text>("UIMatchWaitWindow/CountDown");
            countDown.StartCountDown();
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
    }