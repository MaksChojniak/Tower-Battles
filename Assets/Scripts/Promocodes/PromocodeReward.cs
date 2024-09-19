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


        
        // public static PromocodeReward[] GetSingleRewards(PromocodeReward reward)
        // {
        //     List<PromocodeReward> rewards = new List<PromocodeReward>();
        //     
        //     switch (reward.Type)
        //     {
        //         case RewardType.Coins:
        //             rewards.Add(new PromocodeReward() {Type = RewardType.Coins, Coins = reward.Coins});
        //             break;
        //         case RewardType.Coins_Gems:
        //             rewards.Add(new PromocodeReward() {Type = RewardType.Coins, Coins = reward.Coins});
        //             rewards.Add(new PromocodeReward() {Type = RewardType.Gems, Gems = reward.Gems});
        //             break;
        //         case RewardType.Coins_Skin:
        //             rewards.Add(new PromocodeReward() {Type = RewardType.Coins, Coins = reward.Coins});
        //             rewards.Add(new PromocodeReward() {Type = RewardType.Skin, Skin = reward.Skin });
        //             break;
        //         case RewardType.Gems:
        //             rewards.Add(new PromocodeReward() {Type = RewardType.Gems, Gems = reward.Gems});
        //             break;
        //         case RewardType.Gems_Skin:
        //             rewards.Add(new PromocodeReward() {Type = RewardType.Gems, Gems = reward.Gems});
        //             break;
        //         case RewardType.Skin:
        //             rewards.Add(new PromocodeReward() {Type = RewardType.Skin, Skin = reward.Skin });
        //             break;
        //         case RewardType.Coins_Gems_Skin:
        //             rewards.Add(new PromocodeReward() {Type = RewardType.Coins, Coins = reward.Coins});
        //             rewards.Add(new PromocodeReward() {Type = RewardType.Gems, Gems = reward.Gems});
        //             rewards.Add(new PromocodeReward() {Type = RewardType.Skin, Skin = reward.Skin });
        //             break;
        //         case RewardType.None:
        //             break;
        //     }
        //
        //     return rewards.ToArray();
        // } 
        
        
    }
    
}
