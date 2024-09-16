using System.Collections.Generic;
using UnityEngine;

namespace UI.Shop
{
    [CreateAssetMenu(menuName = "Shop/Avaiable Ad Rewards", fileName = "Avaiable Ad Rewards")]
    public class AvaiableAdRewards : ScriptableObject
    {
        public List<AdReward> rewards = new List<AdReward>();
    }
}
