using System;
using System.Collections;
using System.Collections.Generic;
using System.Threading;
using System.Threading.Tasks;
using GoogleMobileAds.Api;
using MMK;
using Player;
using UI;
using UI.Animations;
using UI.Shop.Daily_Rewards.Scriptable_Objects;
using UnityEngine;

namespace Ads
{

    public class GoogleAds : MonoBehaviour
    {
        public delegate void OnCloseAdDelegate();
        public static event OnCloseAdDelegate OnCloseAd;

        public delegate void ShowAdDelegate(RewardType type, long amount, GiveRewardDelegate giveReward);
        public static ShowAdDelegate ShowAd;



        [SerializeField] UIAnimation OpenBackgroundAniation;
        [SerializeField] UIAnimation CloseBackgroundAniation;



        RewardedAd rewardedAd;
        //RewardedInterstitialAd _rewardedInterstitialAd;



        public async static Task CheckAndFixDependencies()
        {
            MobileAds.Initialize((InitializationStatus initStatus) => { });

            await Task.Yield();

        }




        void Awake()
        {
            DontDestroyOnLoad(this.gameObject);

            RegisterHandlers();

            rewardedAd = null;
        }

        void OnDestroy()
        {
            UnregisterHandlers();

        }


        void Start()
        {

        }



        #region Register & Unregister Handlers

        void RegisterHandlers()
        {
            ShowAd += ShowAdProcess;

        }

        void UnregisterHandlers()
        {
            ShowAd -= ShowAdProcess;

        }

        #endregion




        #region Load & Show Ads


        void ShowAdProcess(RewardType type, long amount, GiveRewardDelegate giveReward)
        {
            rewardedAd = new RewardedAd(type, amount, giveReward);

            LoadAd();
        }


        void LoadAd()
        {
            OpenBackgroundAniation.PlayAnimation();
            //yield return OpenBackgroundAniation.Wait();

            Debug.Log("Loading the rewarded  ad.");

            rewardedAd.Load(OnLoadAd);
        }


        // void OnLoadAd(RewardedInterstitialAd ad, LoadAdError error)
        void OnLoadAd(GoogleMobileAds.Api.RewardedAd ad, LoadAdError error)
        {
            if (error != null || ad == null)
            {
                Debug.LogError($"Rewarded ad failed to load an ad with error [id:{rewardedAd.UnitID}] : {error}");
                Close();
                return;
            }

            Debug.Log("Rewarded ad loaded with response : " + ad.GetResponseInfo());

            RegisterEventHandlers();

            rewardedAd.Show();
        }


        #endregion


        void RegisterEventHandlers()
        {
            rewardedAd.interstitialAd.OnAdFullScreenContentFailed += (AdError error) =>
            {
                Debug.LogError($"Rewarded interstitial ad failed to open full screen content with error : {error}");
                Close();
                //LoadAd(ad.GetAdUnitID());
            };

            rewardedAd.interstitialAd.OnAdPaid += (AdValue adValue) =>
            {
                Debug.Log($"Rewarded ad paid {adValue.Value} {adValue.CurrencyCode}.");
            };

            rewardedAd.interstitialAd.OnAdFullScreenContentClosed += () =>
            {
                Debug.Log("OnAdFullScreenContentClosed");
                Close();
                //UnloadOrDestroyOldAd();
            };


            // Raised when an impression is recorded for an ad.
            rewardedAd.interstitialAd.OnAdImpressionRecorded += () =>
            {
                Debug.Log("Rewarded ad recorded an impression.");
            };
            // Raised when a click is recorded for an ad.
            rewardedAd.interstitialAd.OnAdClicked += () =>
            {
                Debug.Log("Rewarded ad was clicked.");
            };
            // Raised when an ad opened full screen content.
            rewardedAd.interstitialAd.OnAdFullScreenContentOpened += () =>
            {
                Debug.Log("Rewarded ad full screen content opened.");
            };



        }


        void Close(){
            CloseBackgroundAniation.PlayAnimation();

            OnCloseAd?.Invoke();
        }


    }
}
