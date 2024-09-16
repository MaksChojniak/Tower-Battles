using MMK;
using TMPro;
using UI.Shop.Daily_Rewards.Scriptable_Objects;
using UnityEngine;

namespace UI.Shop
{
    
    public class AdRewardUI : MonoBehaviour
    {

        [SerializeField] TMP_Text RewardText;
        [SerializeField] TMP_Text CounterText;
        
        
        public void UpdateUI(AdReward reward, int index)
        {

            string rewardText = "None";
            
            switch (reward.Type)
            {
                case RewardType.Coins:
                    // rewardText = StringFormatter.GetCoinsText(reward.Amount, true, "95%");
                    rewardText = $"{reward.Amount} {StringFormatter.GetSpriteText(new SpriteTextData(){SpriteName = GlobalSettingsManager.GetGlobalSettings?.Invoke().CoinsIconName, Size = "95%"})}";
                    break;
                case RewardType.Experience:
                    break;
            }


            RewardText.text = rewardText;
            
            
            CounterText.text = $"{index}";

        }
        
    }
    
    
}
