using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class UIGameCountDown : MonoBehaviour
{
    public Text countDownText;
    float time = 60;

    public void StartCountDown(float gameMatchTime)
    {
        time = gameMatchTime;
        InvokeRepeating("CountDown", 0f, 1.0f);
    }

    void CountDown()
    {
        time--;
        if(time<=0)
        {
            time = 0;
        }
        countDownText.text = string.Format("{0}s", time);
    }
}
