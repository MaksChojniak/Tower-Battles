using System.Collections.Generic;
using UnityEngine;

namespace UI.Shop.Daily_Rewards.Scriptable_Objects
{
    [CreateAssetMenu(menuName = "Shop/Avaiable Daily Rewards", fileName = "Avaiable Daily Rewards")]
    public class AvaiableDailyRewards : ScriptableObject
    {
        public List<RewardObject> rewards = new List<RewardObject>();
    }
}
