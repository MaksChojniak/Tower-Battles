using System;
using TMPro;
using UI.Shop.Daily_Rewards;
using UI.Shop.Daily_Rewards.Scriptable_Objects;
using UnityEngine;
using UnityEngine.UI;

namespace UI.Shop
{
    public class DailyRewardUI : MonoBehaviour
    {
        // [SerializeField] GameObject rewardPanel;        // = dalyRewardsPanels[index];
        // [SerializeField] Image lockedBackground;        // = rewardPanel.GetComponent<Image>();

        [SerializeField] Image rewardSprite;            // = rewardPanel.transform.GetChild(0).GetComponent<Image>();
        [SerializeField] TMP_Text rewardValue;          // = rewardSprite.transform.GetChild(0).GetComponent<TMP_Text>();
            
        [SerializeField] Image claimButton;              // = rewardPanel.transform.GetChild(1).GetComponent<Image>();
        [SerializeField] TMP_Text claimStateButtonText;  // = claimButton.transform.GetChild(0).gameObject.GetComponent<TMP_Text>();
        [SerializeField] GameObject claimStateCheckmark; // = claimButton.transform.GetChild(1).gameObject;


        public void UpdateUI(int index, DailyRewards dailyRewards, DailyRewardUIProperties UIProperties, DateTime simulateDateOnServer)
        {
            Reward reward = dailyRewards.Rewards[index];
            
            RewardType type = reward.Type;
            
            ulong value = 0;
            if (type == RewardType.Coins)
                value = reward.CoinsBalance;
            else if (type == RewardType.Experience)
                value = reward.XP;

            
            
            bool isClaimedReward = dailyRewards.LastCalimedRewardIndex >= index;
            bool isNextReward = dailyRewards.LastCalimedRewardIndex + 1 == index;
            TimeSpan timeToClaim = new DateTime(dailyRewards.LastClaimDateTicks).AddDays(1) - simulateDateOnServer;
            bool canClaim = dailyRewards.LastCalimedRewardIndex + 1 == index && ( timeToClaim.TotalSeconds <= 0 );

            
            
            // Apply Image
            Sprite sprite = null;
            if (type == RewardType.Coins)
                sprite = UIProperties.CoinsIcon;
            else if (type == RewardType.Experience)
                sprite = UIProperties.ExerienceIcon;
            rewardSprite.sprite = sprite;
            
            Color rewardColor = new Color(0.5f, 0.5f, 0.5f, 0.65f);
            if(isClaimedReward || canClaim)
                rewardColor = new Color(1, 1, 1, 1);
            else if(isNextReward)
                rewardColor = new Color(0.75f, 0.75f, 0.75f, 0.75f);
            rewardSprite.color = rewardColor;

            
            // Apply Image
            rewardValue.gameObject.SetActive(type != RewardType.None);
            rewardValue.text = $"{value}";
            
            
            // Apply Claim button Color
            Color buttonColor = UIProperties.LockedColor;
            if (isClaimedReward)
                buttonColor = UIProperties.ClaimedColor;
            else if (canClaim)
                buttonColor = UIProperties.ClaimColor;
            claimButton.color = buttonColor;
            
            
            // Apply Claim Button Text
            string buttonText = $"Day {index + 1}";
            if (isClaimedReward)
                buttonText = "Claimed";
            else if (canClaim)
                buttonText = "Claim";
            else if (isNextReward)
                buttonText = $"{timeToClaim.Hours}:{timeToClaim.Minutes}:{timeToClaim.Seconds}";
            claimStateButtonText.text = buttonText;

            
            // Apply Checkmark State
            claimStateCheckmark.SetActive(isClaimedReward);
        }
    }
}
