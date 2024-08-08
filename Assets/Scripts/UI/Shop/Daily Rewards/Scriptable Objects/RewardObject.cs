using MMK.ScriptableObjects;
using UnityEngine;

namespace UI.Shop.Daily_Rewards.Scriptable_Objects
{
    public enum RewardType
    {
        Coins,
        Experience,
        None
    }

    public enum RewardRarity
    {
        Common,
        Uncommon,
        Rare,
        Epic,
        Legendary,
        Exclusive
    }
    
    
    [CreateAssetMenu(fileName = "Reward", menuName = "Daily Rewards/Reward", order = 1)]
    public class RewardObject : ScriptableObject
    {
        public RewardRarity RewardRarity;
        public RewardType RewardType;
        
        public TowerSkin Skin;
        public ulong Experience;
        public ulong Coins;
        
        

    }
    
    
}
