using System;
using GoogleMobileAds.Api;
using UnityEngine;

namespace Ads
{
    public static class GoogleAds
    {
        
        
        
        
        // These ad units are configured to always serve test ads.
#if UNITY_EDITOR
        const string _adUnitId = "ca-app-pub-3940256099942544/1033173712";
#elif UNITY_ANDROID
        const string _adUnitId = "ca-app-pub-6306325732760549~1853885257";
#else
        const string _adUnitId = "unused";
#endif

        static RewardedAd  _rewardedAd;





        public static void ShowAd()
        {
            LoadAd( PlayAd );
        }
        
        
        
        
        /// <summary>
        /// Loads the rewarded ad.
        /// </summary>
        static void LoadAd(Action OnLoadAd)
        {
            // Clean up the old ad before loading a new one.
            if (_rewardedAd != null)
            {
                _rewardedAd.Destroy();
                _rewardedAd = null;
            }

            // Debug.Log("Loading the rewarded  ad.");

            
            // create our request used to load the ad.
            var adRequest = new AdRequest();

            // send the request to load the ad.
            RewardedAd.Load(_adUnitId, adRequest,
                (RewardedAd ad, LoadAdError error) =>
                {
                    // if error is not null, the load request failed.
                    if (error != null || ad == null)
                    {
                        Debug.LogError("Rewarded ad failed to load an ad " + "with error : " + error);
                        return;
                    }

                    // Debug.Log("Rewarded ad loaded with response : " + ad.GetResponseInfo());

                    _rewardedAd = ad;
                    
                    RegisterEventHandlers(_rewardedAd);
                    
                    OnLoadAd?.Invoke();
                    
                });
        }
        
        
        
        /// <summary>
        /// Shows the interstitial ad.
        /// </summary>
        static void PlayAd()
        {
            if (_rewardedAd != null && _rewardedAd.CanShowAd())
            {
                // Debug.Log("Showing rewarded ad.");
                _rewardedAd.Show((Reward reward) =>
                {
                    Debug.Log($"Give Reward");
                });
            }
            else
            {
                // Debug.LogError("Interstitial ad is not ready yet.");
            }
        }
        
        
        
        
        
        
        
        static void RegisterEventHandlers(RewardedAd ad)
        {
            // Raised when the ad is estimated to have earned money.
            ad.OnAdPaid += (AdValue adValue) =>
            {
                Debug.Log($"Rewarded ad paid {adValue.Value} {adValue.CurrencyCode}.");
            };
            // Raised when an impression is recorded for an ad.
            ad.OnAdImpressionRecorded += () =>
            {
                // Debug.Log("Rewarded ad recorded an impression.");
            };
            // Raised when a click is recorded for an ad.
            ad.OnAdClicked += () =>
            {
                // Debug.Log("Rewarded ad was clicked.");
            };
            // Raised when an ad opened full screen content.
            ad.OnAdFullScreenContentOpened += () =>
            {
                // Debug.Log("Rewarded ad full screen content opened.");
            };
            
            
            // Raised when the ad closed full screen content.
            ad.OnAdFullScreenContentClosed += () =>
            {
                // Debug.Log("Rewarded ad full screen content closed.");
                
                
                // Clean up the old ad before loading a new one.
                if (_rewardedAd != null)
                {
                    _rewardedAd.Destroy();
                    _rewardedAd = null;
                }
            };
            
            
            // Raised when the ad failed to open full screen content.
            ad.OnAdFullScreenContentFailed += (AdError error) =>
            {
                // Debug.LogError("Rewarded ad failed to open full screen content " + "with error : " + error);
                
                // Reload the ad so that we can show another as soon as possible.
                ShowAd();
            };
            
            
        }






    }
}
