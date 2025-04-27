using Newtonsoft.Json;
using Player.Database;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Text;
using UI.Animations;
using UnityEngine;


public class ApplicationVersion
{
    public string AppVersion;

    public static bool operator ==(ApplicationVersion obj1, ApplicationVersion obj2) => obj1.AppVersion == obj2.AppVersion;
    public static bool operator !=(ApplicationVersion obj1, ApplicationVersion obj2) => !(obj1 == obj2);
}

public class VersionController : MonoBehaviour
{
    const string VERSION_PATH = "ApplicationVersion.txt";

    [SerializeField] UIAnimation OpenPanelAnimation;

    ApplicationVersion currentVersion;

    private void Awake()
    {
        currentVersion = new ApplicationVersion()
        {
            AppVersion = Application.version,
        };

        //Debug.Log(JsonConvert.SerializeObject(currentVersion));

    }


    private void Start()
    {
//#if !UNITY_EDITOR
        Database.GET<ApplicationVersion>(VERSION_PATH, OnGetApplicationVersion);
//#endif
    }

    void OnGetApplicationVersion(GET_Callback<ApplicationVersion> result)
    {
        if (result.Status != DatabaseStatus.Success)
            return;

        ApplicationVersion remoteVersion = result.Data;

        if (currentVersion != remoteVersion)
            StartCoroutine(OpenPanel());
        else
            ChangeLog.OpenLog?.Invoke(currentVersion);
    } 


    IEnumerator OpenPanel()
    {
        yield break;
        OpenPanelAnimation.PlayAnimation();
        yield return OpenPanelAnimation.Wait(); 
    }


    public void ForceUpdate()
    {
        Application.OpenURL("https://play.google.com/store/apps/details?id=com.MMK.BlockyPatrol");
        Application.Quit();
    }
}

