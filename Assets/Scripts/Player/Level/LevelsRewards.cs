using System;
using System.Linq;
using UnityEngine;

namespace UI
{

    [Serializable]
    public class LevelsReward
    {
        public uint Level;
        
        public uint CoinsRewards;
        public uint GemsRewards;
    }
    
    
    [CreateAssetMenu(fileName = "Levels Rewards", menuName = "Levels Rewards", order = 1)]
    public class LevelsRewards : ScriptableObject
    {
        public bool EditMode;
        
        public LevelsReward[] Rewards = new LevelsReward[REWARDS_COUNT];

        public const int REWARDS_COUNT = 20;


        
        public bool LevelExist(uint Level) => Rewards.Any(reward => reward.Level == Level);

        public LevelsReward GetRewardByLevel(uint Level) => Rewards.FirstOrDefault(reward => reward.Level == Level);

    }
    
}
