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
            this.UnitID = GetAdUnitID();

            this.giveReward = giveReward;
        }
        public RewardedAd(Reward reward, GiveRewardDelegate? giveReward)
        {
            this.reward = new Reward(reward);
            this.UnitID = GetAdUnitID();

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

        const string TEST_UNIT = "ca-app-pub-3940256099942544/5354046379";

        const string REWARDABLE_FULLSCREEN = "ca-app-pub-6306325732760549/8243137278";

        private string GetAdUnitID()
        {
            return TEST_UNIT; // For Tests time (closed and internal testing)

#if UNITY_EDITOR
            return TEST_UNIT;
#endif
            return REWARDABLE_FULLSCREEN;
        }

        #endregion


    }

}