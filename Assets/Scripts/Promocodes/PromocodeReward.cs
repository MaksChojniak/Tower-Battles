using System;
using System.Collections.Generic;
using MMK.ScriptableObjects;
using UI.Battlepass;

namespace Promocodes
{
    
    [Serializable]
    public class PromocodeReward
    {
        public RewardType Type;
        
        public ulong Coins;
        public ulong Gems;
        public TowerSkinSerializable Skin;


        
        public PromocodeReward[] GetSplittedRewards()
        {
            List<PromocodeReward> rewards = new List<PromocodeReward>();
            
            switch (Type)
            {
                case RewardType.Coins:
                    rewards.Add(new PromocodeReward() {Type = RewardType.Coins, Coins = Coins});
                    break;
                case RewardType.Coins_Gems:
                    rewards.Add(new PromocodeReward() {Type = RewardType.Coins, Coins = Coins});
                    rewards.Add(new PromocodeReward() {Type = RewardType.Gems, Gems = Gems});
                    break;
                case RewardType.Coins_Skin:
                    rewards.Add(new PromocodeReward() {Type = RewardType.Coins, Coins = Coins});
                    rewards.Add(new PromocodeReward() {Type = RewardType.Skin, Skin = Skin });
                    break;
                case RewardType.Gems:
                    rewards.Add(new PromocodeReward() {Type = RewardType.Gems, Gems = Gems});
                    break;
                case RewardType.Gems_Skin:
                    rewards.Add(new PromocodeReward() {Type = RewardType.Gems, Gems = Gems});
                    rewards.Add(new PromocodeReward() {Type = RewardType.Skin, Skin = Skin });
                    break;
                case RewardType.Skin:
                    rewards.Add(new PromocodeReward() {Type = RewardType.Skin, Skin = Skin });
                    break;
                case RewardType.Coins_Gems_Skin:
                    rewards.Add(new PromocodeReward() {Type = RewardType.Coins, Coins = Coins});
                    rewards.Add(new PromocodeReward() {Type = RewardType.Gems, Gems = Gems});
                    rewards.Add(new PromocodeReward() {Type = RewardType.Skin, Skin = Skin });
                    break;
                case RewardType.None:
                    break;
            }
        
            return rewards.ToArray();
        } 
        
        
        // public PromocodeReward[] GetRewards()
        // {
        //     List<PromocodeReward> rewards = new List<PromocodeReward>();
        //     
        //     switch (Reward.Type)
        //     {
        //         case RewardType.Coins:
        //             rewards.Add(new PromocodeReward() {Type = RewardType.Coins, Coins = Reward.Coins});
        //             break;
        //         case RewardType.Coins_Gems:
        //             rewards.Add(new PromocodeReward() {Type = RewardType.Coins, Coins = Reward.Coins});
        //             rewards.Add(new PromocodeReward() {Type = RewardType.Gems, Gems = Reward.Gems});
        //             break;
        //         case RewardType.Coins_Skin:
        //             rewards.Add(new PromocodeReward() {Type = RewardType.Coins, Coins = Reward.Coins});
        //             rewards.Add(new PromocodeReward() {Type = RewardType.Skin, Skin = Reward.Skin });
        //             break;
        //         case RewardType.Gems:
        //             rewards.Add(new PromocodeReward() {Type = RewardType.Gems, Gems = Reward.Gems});
        //             break;
        //         case RewardType.Gems_Skin:
        //             rewards.Add(new PromocodeReward() {Type = RewardType.Gems, Gems = Reward.Gems});
        //             break;
        //         case RewardType.Skin:
        //             rewards.Add(new PromocodeReward() {Type = RewardType.Skin, Skin = Reward.Skin });
        //             break;
        //         case RewardType.Coins_Gems_Skin:
        //             rewards.Add(new PromocodeReward() {Type = RewardType.Coins, Coins = Reward.Coins});
        //             rewards.Add(new PromocodeReward() {Type = RewardType.Gems, Gems = Reward.Gems});
        //             rewards.Add(new PromocodeReward() {Type = RewardType.Skin, Skin = Reward.Skin });
        //             break;
        //         case RewardType.None:
        //             break;
        //     }
        //
        //     return rewards.ToArray();
        // }
        
        
    }
    
}
