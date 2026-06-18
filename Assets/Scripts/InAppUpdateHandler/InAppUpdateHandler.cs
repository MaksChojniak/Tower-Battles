using Newtonsoft.Json;
using Player.Database;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Text;
using UI.Animations;
using UnityEngine;


public class InAppUpdateHandler : MonoBehaviour
{
    // AppUpdateManager appUpdateManager;

    void Awake()
    {
        // appUpdateManager = new AppUpdateManager();
        DontDestroyOnLoad(this.gameObject);
    }


    public static IEnumerator CheckForUpdate()
    {
        // var getInfoOp = _appUpdateManager.GetAppUpdateInfo();

        // yield return getInfoOp;

        // if (!getInfoOp.IsSuccessful)
        // {
        //     Debug.LogError($"[InAppUpdate] GetAppUpdateInfo failed: {getInfoOp.Error}");
        //     yield break;
        // }

        // AppUpdateInfo info = getInfoOp.GetResult();

        // if (info.UpdateAvailability == UpdateAvailability.UpdateAvailable)
        // {
        //     int staleness = info.ClientVersionStalenessDays ?? 0;

        //     int priority = info.UpdatePriority;

        //     if (priority >= 4 || staleness >= 7)
        //         StartCoroutine(StartImmediateUpdateCoroutine(info));
        //     else
        //         StartCoroutine(StartFlexibleUpdateCoroutine(info));
        // }
        // else
        // {
        //     Debug.Log("[InAppUpdate] No update available.");
        // }

        yield break;
    }

    // IEnumerator StartFlexibleUpdateCoroutine(AppUpdateInfo info)
    // {
    //     if (!info.IsUpdateTypeAllowed(UpdateType.Flexible))
    //     {
    //         Debug.LogWarning("[InAppUpdate] Flexible update not allowed for this build.");
    //         yield break;
    //     }

    //     AppUpdateOptions options = AppUpdateOptions.FlexibleAppUpdateOptions(
    //         allowAssetPackDeletion: false);

    //     var downloadOp = _appUpdateManager.StartUpdate(info, options);
    //     while (!downloadOp.IsDone)
    //     {
    //         Debug.Log($"[InAppUpdate] Download progress: {downloadOp.BytesDownloaded}/{downloadOp.TotalBytes}");
    //         yield return null;
    //     }

    //     if (!downloadOp.IsSuccessful)
    //     {
    //         Debug.LogError($"[InAppUpdate] Flexible download failed: {downloadOp.Error}");
    //         while (!downloadOp.IsDone)
    //         {
    //             Debug.Log($"[InAppUpdate] Download progress: {downloadOp.BytesDownloaded}/{downloadOp.TotalBytes}");
    //             yield return null;
    //         }

    //         if (!downloadOp.IsSuccessful)
    //         {
    //             Debug.LogError($"[InAppUpdate] Flexible download failed: {downloadOp.Error}");
    //             yield break;
    //         }

    //         Debug.Log("[InAppUpdate] Download finished – completing the update now.");

    //         var completeOp = _appUpdateManager.CompleteUpdate();
    //         yield return completeOp;

    //         if (!completeOp.IsSuccessful)
    //             Debug.LogError($"[InAppUpdate] CompleteUpdate failed: {completeOp.Error}");
    //         else
    //             Debug.Log("[InAppUpdate] Update applied – app will restart automatically.");
    //     }
    // }


    // IEnumerator StartImmediateUpdateCoroutine(AppUpdateInfo info)
    // {
    //     if (!info.IsUpdateTypeAllowed(UpdateType.Immediate))
    //     {
    //         Debug.LogWarning("[InAppUpdate] Immediate update not allowed for this build.");
    //         yield break;
    //     }

    //     AppUpdateOptions options = AppUpdateOptions.ImmediateAppUpdateOptions(
    //         allowAssetPackDeletion: false);

    //     var requestOp = _appUpdateManager.StartUpdate(info, options);
    //     yield return requestOp;

    //     if (!requestOp.IsSuccessful)
    //         Debug.LogError($"[InAppUpdate] Immediate update failed: {requestOp.Error}");
    //     else
    //         Debug.Log("[InAppUpdate] Immediate update succeeded – app will restart.");
    // }
}

