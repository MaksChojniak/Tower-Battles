using Newtonsoft.Json;
using Player.Database;
using System;
using System.Collections.Generic;
using System.Text;
using UnityEngine;


public class ApplicationVersion
{
    public string AppVersion;
    public string BuildVersion;

    public static bool operator ==(ApplicationVersion obj1, ApplicationVersion obj2) => obj1.AppVersion == obj2.AppVersion && obj1.BuildVersion == obj2.BuildVersion;
    public static bool operator !=(ApplicationVersion obj1, ApplicationVersion obj2) => !(obj1 == obj2);
}

public class VersionController : MonoBehaviour
{
    const string VERSION_PATH = "ApplicationVersion.txt";

    ApplicationVersion currentVersion;

    private void Awake()
    {
        currentVersion = new ApplicationVersion()
        {
            AppVersion = Application.version,
            BuildVersion = Application.buildGUID
        };

        //Debug.Log(JsonConvert.SerializeObject(currentVersion));

    }


    private void Start()
    {

        Database.GET<ApplicationVersion>(VERSION_PATH, OnGetApplicationVersion);

    }

    void OnGetApplicationVersion(GET_Callback<ApplicationVersion> result)
    {
        if (result.Status != DatabaseStatus.Success)
            return;

        ApplicationVersion remoteVersion = result.Data;

        if (currentVersion != remoteVersion)
            ForceUpdate();
        else
            ChangeLog.OpenLog?.Invoke(currentVersion);
    } 

    void ForceUpdate()
    {
        Application.OpenURL("https://play.google.com/store/apps/details?id=com.MMK.BlockyPatrol");
        Application.Quit();
    }
}

