using System;
using System.Collections.Generic;
using System.Linq;
using MMK.ScriptableObjects;
using UnityEngine;

namespace UI.Battlepass
{

    [Serializable]
    public class BattlepassReward
    {
        public int TierIndex;
        public int RewardIndex;
        public bool IsPremium;

        public RewardType Type;
        public ulong Coins;
        public ulong Gems;
        public TowerSkinSerializable Skin;
    }
    
    
    
    [Serializable]
    public class BattlepassProgress
    {
        public long ExperienceCollected;
        
        public uint LastTierUnlocked => GetTiersCountByTotalXP(ExperienceCollected);
        public long CurrentTierXP => GetXPByTotalXP(ExperienceCollected);
        
        
        public List<BattlepassReward> ClaimedRewards = new List<BattlepassReward>();

        public bool HasPremiumBattlepass;

        public const int BATTLEPASS_TIER_XP_VALUE = 250; 



        // public void UpdateUnlockedTiers()
        // {
        //     LastTierUnlocked = (uint)((float)ExperienceCollected / BATTLEPASS_TIER_XP_VALUE);
        // }

        public bool IsClaimed(BattlepassReward reward) => ClaimedRewards.
            Any(_reward => _reward.TierIndex == reward.TierIndex && 
                           _reward.RewardIndex == reward.RewardIndex &&
                           _reward.IsPremium == reward.IsPremium );


        
        
        
        public static uint GetTiersCountByTotalXP(long experience)
        {
            float tier = (float)experience / BATTLEPASS_TIER_XP_VALUE;
            return (uint)tier;
        }
        public long GetXPByTotalXP(long experience)
        {
            uint tier = GetTiersCountByTotalXP(experience);
            long tiersXP = tier * BATTLEPASS_TIER_XP_VALUE;

            return experience - tiersXP;
        }
        
    }
    
}
