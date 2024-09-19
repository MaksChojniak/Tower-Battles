using System;
using System.Collections.Generic;
using UI.Battlepass;

namespace Promocodes
{
    
    [Serializable]
    public class Promocode
    {
        public string Code;
        public PromocodeReward Reward;


        public PromocodeReward[] GetRewards()
        {
            List<PromocodeReward> rewards = new List<PromocodeReward>();
            
            switch (Reward.Type)
            {
                case RewardType.Coins:
                    rewards.Add(new PromocodeReward() {Type = RewardType.Coins, Coins = Reward.Coins});
                    break;
                case RewardType.Coins_Gems:
                    rewards.Add(new PromocodeReward() {Type = RewardType.Coins, Coins = Reward.Coins});
                    rewards.Add(new PromocodeReward() {Type = RewardType.Gems, Gems = Reward.Gems});
                    break;
                case RewardType.Coins_Skin:
                    rewards.Add(new PromocodeReward() {Type = RewardType.Coins, Coins = Reward.Coins});
                    rewards.Add(new PromocodeReward() {Type = RewardType.Skin, Skin = Reward.Skin });
                    break;
                case RewardType.Gems:
                    rewards.Add(new PromocodeReward() {Type = RewardType.Gems, Gems = Reward.Gems});
                    break;
                case RewardType.Gems_Skin:
                    rewards.Add(new PromocodeReward() {Type = RewardType.Gems, Gems = Reward.Gems});
                    break;
                case RewardType.Skin:
                    rewards.Add(new PromocodeReward() {Type = RewardType.Skin, Skin = Reward.Skin });
                    break;
                case RewardType.Coins_Gems_Skin:
                    rewards.Add(new PromocodeReward() {Type = RewardType.Coins, Coins = Reward.Coins});
                    rewards.Add(new PromocodeReward() {Type = RewardType.Gems, Gems = Reward.Gems});
                    rewards.Add(new PromocodeReward() {Type = RewardType.Skin, Skin = Reward.Skin });
                    break;
                case RewardType.None:
                    break;
            }

            return rewards.ToArray();
        }
        
        
    }
    
}
