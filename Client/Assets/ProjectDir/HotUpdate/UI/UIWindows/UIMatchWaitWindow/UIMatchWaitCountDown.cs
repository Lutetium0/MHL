using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class UIMatchWaitCountDown : MonoBehaviour
{
    public Text countDownText;
    float time = 0;

    public void StartCountDown()
    {
        time = 0;
        InvokeRepeating("CountDown", 0f, 1.0f);
    }

    void CountDown()
    {
        time++;
        countDownText.text = string.Format("{0}s", time);
    }
}
