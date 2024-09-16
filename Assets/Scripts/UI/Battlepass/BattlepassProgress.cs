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

        public RewardType Type;
        public ulong Coins;
        public ulong Gems;
        public TowerSkinSerializable Skin;
    }
    
    
    
    [Serializable]
    public class BattlepassProgress
    {
        public long ExperienceCollected;
        
        public uint LastTierUnlocked = 0;
        public List<BattlepassReward> ClaimedRewards = new List<BattlepassReward>();

        public bool HasPremiumBattlepass;



        public void UpdateUnlockedTiers()
        {
            LastTierUnlocked = (uint)Mathf.FloorToInt(ExperienceCollected / 100f);
        }


        public bool IsClaimed(BattlepassReward reward) => ClaimedRewards.Any(_reward => _reward.TierIndex == reward.TierIndex && _reward.RewardIndex == reward.RewardIndex);


    }
    
}
