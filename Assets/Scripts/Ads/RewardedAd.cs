using GoogleMobileAds.Api;
using Player;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using UnityEngine;
using RewardType = UI.Shop.Daily_Rewards.Scriptable_Objects.RewardType;

namespace Ads
{
    public delegate void GiveRewardDelegate(Reward reward);
    
    public class RewardedAd : IRewardable, IRewardedAd
    {
        
        readonly GiveRewardDelegate? giveReward;

        readonly Reward reward;

        public readonly string UnitID;
        public RewardedInterstitialAd interstitialAd { get; private set; }

        public RewardedAd(RewardType type, long amount, GiveRewardDelegate? giveReward)
        {
            this.reward = new Reward(type, amount);
            this.UnitID = GetAdUnitID(this.reward);

            this.giveReward = giveReward;
        }
        public RewardedAd(Reward reward, GiveRewardDelegate? giveReward)
        {
            this.reward = new Reward(reward);
            this.UnitID = GetAdUnitID(this.reward);

            this.giveReward = giveReward;
        }


        ~RewardedAd()
        {
            if(this.interstitialAd != null)
                this.interstitialAd.Destroy();
        }

        public void GiveReward() => this.giveReward?.Invoke(reward);



        public void Load(Action<RewardedInterstitialAd, LoadAdError> callback)
        {
            var adRequest = new AdRequest();
            RewardedInterstitialAd.Load(this.UnitID, adRequest,
                (ad, error) =>
                {
                    this.interstitialAd = ad;
                    callback?.Invoke(ad, error);
                }
            );

        }

        public void Show()
        {
            if (this.interstitialAd == null || !this.interstitialAd.CanShowAd())
                throw new Exception("Ad Can't be showed");

            this.interstitialAd.Show( (reward) =>
                {

                    Debug.Log($"Give Reward [{this.reward.Type} {this.reward.Amount}]");

                    switch (this.reward.Type)
                    {
                        case RewardType.Coins:
                            PlayerData.ChangeCoinsBalance(this.reward.Amount);
                            break;
                        case RewardType.Experience:
                            PlayerData.ChangeExperience(this.reward.Amount);
                            break;
                    }

                    this.giveReward?.Invoke(this.reward); 
                    
                }
            );

        }



        #region Unit IDs

        const string TEST_UNIT = "ca-app-pub-3940256099942544/5354046379"; //ca-app-pub-3940256099942544/5224354917

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

        private string GetAdUnitID(Reward reward)
        {
            return TEST_UNIT;
            
            string adUnit = REWARDABLE_FULLSCREEN_NONE;

            if (reward.Type == RewardType.Coins)
            {
                switch (reward.Amount)
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
            else if (reward.Type == RewardType.Experience) { }
            else
                adUnit = REWARDABLE_FULLSCREEN_NONE;

#if UNITY_EDITOR
            adUnit = TEST_UNIT;
#endif
            return adUnit;
        }

        #endregion


    }

}