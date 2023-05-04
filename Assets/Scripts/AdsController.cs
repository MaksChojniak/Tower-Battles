using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;
using UnityEngine.Advertisements;
using UnityEngine.SceneManagement;

public class AdsController : MonoBehaviour, IUnityAdsLoadListener, IUnityAdsShowListener, IUnityAdsInitializationListener
{
    public static AdsController instance;

    public static Action showAds;

    [SerializeField] string m_AndroidAdUnitId = "Interstitial_Android";
    public string AndroidAdUnitId => m_AndroidAdUnitId;

    [SerializeField] string m_iOSAdUnitId = "Interstitial_iOS";
    public string iOSAdUnitId => m_iOSAdUnitId;
    string m_AdUnitId;


    [Space(40)]
    public string AndroidGameId;
    public string IosGameId;
    [HideInInspector]
    public bool TestMode;


    public bool adsLoaded;



    void Awake()
    {
        instance = this;

        adsLoaded = false;

        InitializeAds();

        m_AdUnitId = m_AndroidAdUnitId;
        if (Application.platform == RuntimePlatform.IPhonePlayer)
        {
            m_AdUnitId = m_iOSAdUnitId;
        }

        showAds += ShowAd;

    }

    void OnDestroy()
    {
        showAds -= ShowAd;
    }

    private void InitializeAds()
    {
        // Android Ad Unit Ids are the default. If the platform is iOS, then apply the corresponding Ad Unit Id.
        var gameId = AndroidGameId;
        if (Application.platform == RuntimePlatform.IPhonePlayer)
        {
            gameId = IosGameId;
        }

        if (string.IsNullOrEmpty(gameId))
        {
            throw new InvalidDataException(
                "There is no Game Id currently set. Please ensure that Services are linked to a valid project and that Ads have been enabled in Project Settings.");
        }

        Advertisement.Initialize(gameId, TestMode, this);
    }

    public void OnInitializationComplete()
    {
        Debug.Log("Unity Ads initialization complete.");

        LoadAd();
    }

    public void OnInitializationFailed(UnityAdsInitializationError error, string message)
    {
        Debug.Log($"Unity Ads Initialization Failed: {error.ToString()} - {message}");
    }



    public void LoadAd()
    {
        Debug.Log("Loading Ad: " + m_AdUnitId);
        Advertisement.Load(m_AdUnitId, this);
        adsLoaded = true;
    }

    #region IUnityAdsLoadListener

    /// <summary>
    /// Handler for when an ad is successfully loaded
    /// </summary>
    /// <param name="adUnitId">The ad unit ID for the loaded ad</param>
    public void OnUnityAdsAdLoaded(string adUnitId)
    {
        // Optionally execute code if the Ad Unit successfully loads content.
        //ShowAd();
        adsLoaded = true;
    }

    /// <summary>
    /// Handler for when a Unity ad fails to load
    /// </summary>
    /// <param name="adUnitId">The ad unit ID for the ad</param>
    /// <param name="error">The error that prevented the ad from loading</param>
    /// <param name="message">The message accompanying the error</param>
    public void OnUnityAdsFailedToLoad(string adUnitId, UnityAdsLoadError error, string message)
    {
        Debug.Log($"Error loading Ad Unit: {adUnitId} - {error.ToString()} - {message}");
        // Optionally execute code if the Ad Unit fails to load, such as attempting to try again.
    }

    #endregion

    /// <summary>
    /// Show an ad on the screen
    /// </summary>
    public void ShowAd()
    {
        Debug.Log("Showing Ad: " + m_AdUnitId);
        Advertisement.Show(m_AdUnitId, this);
        adsLoaded = false;
    }
    #region IUnityAdsShowListener

    /// <summary>
    /// Handler for when an add finishes showing
    /// </summary>
    /// <param name="adUnitId"></param>
    /// <param name="showCompletionState"></param>
    public void OnUnityAdsShowComplete(string adUnitId, UnityAdsShowCompletionState showCompletionState) 
    {
        SceneManager.LoadSceneAsync(0);

        //GameManager.instance.isLoadAds = false;
    }

    /// <summary>
    /// Handler for when showing an ad fails
    /// </summary>
    /// <param name="adUnitId">The ad unit ID for the ad</param>
    /// <param name="error">The error that prevented the ad from loading</param>
    /// <param name="message">The message accompanying the error</param>
    public void OnUnityAdsShowFailure(string adUnitId, UnityAdsShowError error, string message)
    {
        Debug.LogError($"Error showing Ad Unit {adUnitId}: {error.ToString()} - {message}");
    }

    /// <summary>
    /// Handler for when an ad starts showing
    /// </summary>
    /// <param name="adUnitId"></param>
    public void OnUnityAdsShowStart(string adUnitId) { }

    /// <summary>
    /// Handler for when the user clicks/taps on an ad
    /// </summary>
    /// <param name="adUnitId"></param>
    public void OnUnityAdsShowClick(string adUnitId) { }

    #endregion

}
