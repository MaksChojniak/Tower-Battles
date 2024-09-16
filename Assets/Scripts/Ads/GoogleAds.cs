using System;
using System.Collections;
using System.Collections.Generic;
using System.Threading;
using System.Threading.Tasks;
using GoogleMobileAds.Api;
using Player;
using UI;
using UI.Animations;
using UI.Shop.Daily_Rewards.Scriptable_Objects;
using UnityEngine;
using UnityEngine.Scripting;

namespace Ads
{
    
    public class GoogleAds : MonoBehaviour
    {
        public delegate void OnGetRewardDelegate();
        public static event OnGetRewardDelegate OnGetReward;
        
        public delegate void ShowAdDelegate(RewardType type = RewardType.None, long amount = 0);
        public static ShowAdDelegate ShowAd;


        
#region Ads Units IDs
        
        
        // These ad units are configured to always serve test ads.

        const string TEST_UNIT = "ca-app-pub-3940256099942544/5354046379";

        const string REWARDABLE_FULLSCREEN_NONE = "ca-app-pub-6306325732760549/9560036764";
        const string REWARDABLE_FULLSCREEN_5_COINS = "ca-app-pub-6306325732760549/3493321869";
        const string REWARDABLE_FULLSCREEN_10_COINS = "ca-app-pub-6306325732760549/5496668678";
        const string REWARDABLE_FULLSCREEN_15_COINS = "ca-app-pub-6306325732760549/9839238368";
        const string REWARDABLE_FULLSCREEN_20_COINS = "ca-app-pub-6306325732760549/5899993353";
        const string REWARDABLE_FULLSCREEN_25_COINS = "ca-app-pub-6306325732760549/4586911689";
        const string REWARDABLE_FULLSCREEN_30_COINS = "ca-app-pub-6306325732760549/2870505335";
        const string REWARDABLE_FULLSCREEN_35_COINS = "ca-app-pub-6306325732760549/4608771020";
        const string REWARDABLE_FULLSCREEN_40_COINS = "ca-app-pub-6306325732760549/3295689358";
        const string REWARDABLE_FULLSCREEN_45_COINS = "ca-app-pub-6306325732760549/3856283945";
        const string REWARDABLE_FULLSCREEN_50_COINS = "ca-app-pub-6306325732760549/1230120609";


        static string GetAdUnitID(RewardType Type, long Amount)
        {
            string adUnit = REWARDABLE_FULLSCREEN_NONE;

            if (Type == RewardType.Coins)
            {
                switch (Amount)
                {
                    case 5:
                        adUnit = REWARDABLE_FULLSCREEN_5_COINS;
                        break;
                    case 10:
                        adUnit = REWARDABLE_FULLSCREEN_10_COINS;
                        break;
                    case 15:
                        adUnit = REWARDABLE_FULLSCREEN_15_COINS;
                        break;
                    case 20:
                        adUnit = REWARDABLE_FULLSCREEN_20_COINS;
                        break;
                    case 25:
                        adUnit = REWARDABLE_FULLSCREEN_25_COINS;
                        break;
                    case 30:
                        adUnit = REWARDABLE_FULLSCREEN_30_COINS;
                        break;
                    case 35:
                        adUnit = REWARDABLE_FULLSCREEN_35_COINS;
                        break;
                    case 40:
                        adUnit = REWARDABLE_FULLSCREEN_40_COINS;
                        break;
                    case 45:
                        adUnit = REWARDABLE_FULLSCREEN_45_COINS;
                        break;
                    case 50:
                    adUnit = REWARDABLE_FULLSCREEN_50_COINS;
                        break;
                    default:
                        adUnit = REWARDABLE_FULLSCREEN_NONE;
                        break;
                }
            }
            else if (Type == RewardType.Experience) {}
            else
                adUnit = REWARDABLE_FULLSCREEN_NONE;
            
#if UNITY_EDITOR
            adUnit = TEST_UNIT;
#endif
            return adUnit;
        }

        
#endregion


        [SerializeField] UIAnimation OpenBackgroundAniation;
        [SerializeField] UIAnimation CloseBackgroundAniation;


        
        SynchronizationContext unitySynchronizationContext;
        
        RewardedInterstitialAd   _rewardedInterstitialAd;


        
        public async static Task CheckAndFixDependencies()
        {
            MobileAds.Initialize((InitializationStatus initStatus) => { });
            
            await Task.Yield();
            
        }
        
        


        void Awake()
        {
            DontDestroyOnLoad(this.gameObject);
            
            RegisterHandlers();

            _rewardedInterstitialAd = null;
        }

        void OnDestroy()
        {
            UnregisterHandlers();
            
        }

        
        void Start()
        {
            unitySynchronizationContext = SynchronizationContext.Current;
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


        Action OnCloseAdCallback;
        async void ShowAdProcess(RewardType type = RewardType.None, long amount = 0)
        {
            string adUnitID = GetAdUnitID(type, amount);
            
            await LoadAd(adUnitID);
        }
        
        
        async Task LoadAd(string adUnitID)
        {
            OpenBackgroundAniation.PlayAnimation();
            await Task.Delay( Mathf.RoundToInt(OpenBackgroundAniation.animationLenght * 1000) );

            // Debug.Log("Loading the rewarded  ad.");

            
            var adRequest = new AdRequest();
            // adRequest.Keywords.Add("unity-admob-sample");
            
            RewardedInterstitialAd.Load(adUnitID, adRequest, OnLoadAd);
        }


        void OnLoadAd(RewardedInterstitialAd ad, LoadAdError error)
        {
            // if error is not null, the load request failed.
            if (error != null || ad == null)
            {
                Debug.LogError("Rewarded ad failed to load an ad " + "with error : " + error);
                return;
            }

            // Debug.Log("Rewarded ad loaded with response : " + ad.GetResponseInfo());

            _rewardedInterstitialAd = ad;

            RegisterEventHandlers(_rewardedInterstitialAd);

            
            PlayAd();


        }


        void PlayAd()
        {
            if (_rewardedInterstitialAd != null && _rewardedInterstitialAd.CanShowAd())
            {
                // Debug.Log("Showing rewarded ad.");
                _rewardedInterstitialAd.Show( (Reward reward) =>
                {
                    if (!Enum.TryParse<RewardType>(reward.Type, out var type))
                        type = RewardType.None;

                    long amount = (long)reward.Amount;
                    
                    unitySynchronizationContext.Post( _ => GiveReward(type, amount), null);
                });
            }
            else
            {
                Debug.LogError("Interstitial ad is not ready yet.");
            }
            
        }


        void GiveReward(RewardType Type, long Amount)
        {
            OnGetReward?.Invoke();
            
            Debug.Log($"Give Reward [{Type} {Amount}]");

            switch (Type)
            {
                case RewardType.Coins:
                    PlayerData.ChangeCoinsBalance(Amount);
                    break;
                case RewardType.Experience:
                    break;
                default:
                    break;
            }


            if(Type == RewardType.None)
                return;
            
            
            MessageQueue.AddMessageToQueue(new Message()
            {
                Tittle = "Ad Reward",
                Properties = new List<MessageProperty>()
                {
                    new MessageProperty() { Name = $"{Type}", Value = $"{Amount}", },
                },
            });

        }

        
#endregion




        void RegisterEventHandlers(RewardedInterstitialAd ad)
        {
            // Raised when the ad is estimated to have earned money.
            ad.OnAdPaid += (AdValue adValue) =>
            {
                Debug.Log($"Rewarded ad paid {adValue.Value} {adValue.CurrencyCode}.");
            };

            // Raised when an impression is recorded for an ad.
            // ad.OnAdImpressionRecorded += () =>
            // {
            //     // Debug.Log("Rewarded ad recorded an impression.");
            // };
            // // Raised when a click is recorded for an ad.
            // ad.OnAdClicked += () =>
            // {
            //     // Debug.Log("Rewarded ad was clicked.");
            // };
            // // Raised when an ad opened full screen content.
            // ad.OnAdFullScreenContentOpened += () =>
            // {
            //     // Debug.Log("Rewarded ad full screen content opened.");
            // };


            // Raised when the ad closed full screen content.
            ad.OnAdFullScreenContentClosed += () =>
            {
                unitySynchronizationContext.Post(_ =>
                {
                    CloseBackground();

                    OnCloseAdCallback?.Invoke();
                    OnCloseAdCallback = null;

                },null);

                
                UnloadOrDestroyOldAd();
            };



            // Raised when the ad failed to open full screen content.
            ad.OnAdFullScreenContentFailed += (AdError error) =>
            {
                // Debug.LogError("Rewarded ad failed to open full screen content " + "with error : " + error);
            };


        }



        void CloseBackground()
        {
            CloseBackgroundAniation.PlayAnimation(); 

        }


        void UnloadOrDestroyOldAd()
        {
            // Clean up the old ad before loading a new one.
            if (_rewardedInterstitialAd != null)
            {
                _rewardedInterstitialAd.Destroy();
                _rewardedInterstitialAd = null;
            }
         
        }



    }
}
