using Newtonsoft.Json;
using Player.Database;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Text;
using UI.Animations;
using UnityEngine;
using Google.Play.AppUpdate;


public class InAppUpdateHandler : MonoBehaviour
{
    static AppUpdateManager appUpdateManager;

    void Awake()
    {
#if !UNITY_EDITOR
        appUpdateManager = new AppUpdateManager();
#endif
        DontDestroyOnLoad(this.gameObject);
    }


    public static IEnumerator CheckForUpdate()
    {
#if UNITY_EDITOR
        Debug.Log("[InAppUpdate] Skipping update check in editor.");
        yield break;
#endif

        var getInfoOp = appUpdateManager.GetAppUpdateInfo();

        yield return getInfoOp;

        if (!getInfoOp.IsSuccessful)
        {
            Debug.LogError($"[InAppUpdate] GetAppUpdateInfo failed: {getInfoOp.Error}");
            yield break;
        }

        AppUpdateInfo info = getInfoOp.GetResult();

        if (info.UpdateAvailability == UpdateAvailability.UpdateAvailable)
        {
            yield return StartImmediateUpdateCoroutine(info);
        }
        else
        {
            Debug.Log("[InAppUpdate] No update available.");
        }

        yield break;
    }

    static IEnumerator StartImmediateUpdateCoroutine(AppUpdateInfo info)
    {
        if (!info.IsUpdateTypeAllowed(AppUpdateOptions.ImmediateAppUpdateOptions(true)))
        {
            Debug.LogWarning("[InAppUpdate] Immediate update not allowed for this build.");
            yield break;
        }

        AppUpdateOptions options = AppUpdateOptions.ImmediateAppUpdateOptions(
            allowAssetPackDeletion: false);

        var requestOp = appUpdateManager.StartUpdate(info, options);
        yield return requestOp;

        if (requestOp.Status != AppUpdateStatus.Installed)
            Debug.LogError($"[InAppUpdate] Immediate update failed: {requestOp.Error}");
        else
            Debug.Log("[InAppUpdate] Immediate update succeeded – app will restart.");
    }
}

