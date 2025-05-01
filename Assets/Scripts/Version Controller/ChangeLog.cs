using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using UI.Animations;
using UnityEngine;

public class ChangeLog : MonoBehaviour
{
    public delegate void OpenLogDelegate(ApplicationVersion version);
    public static OpenLogDelegate OpenLog;


    [SerializeField] UIAnimation OpenPanelAnimation;


    private void Awake()
    {
        OpenLog += OnOpenLog;
    }

    private void OnDestroy()
    {
        OpenLog -= OnOpenLog;
    }


    void OnOpenLog(ApplicationVersion version)
    {
        if (PlayerPrefs.HasKey(version.AppVersion))
            return;

        ShowLog();
        PlayerPrefs.SetInt(version.AppVersion, 1);
    }

    void ShowLog()
    {
        Debug.Log("Show Log");
        this.gameObject.SetActive(true);
        OpenPanelAnimation.PlayAnimation();
    }



}

