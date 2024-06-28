using System;
using MMK.ScriptableObjects;
using UnityEngine;


namespace MMK.ScriptableObjects
{
    [CreateAssetMenu(fileName = "Booster", menuName = "Towers/Booster", order = 2)]
    public class Booster : Tower
    {
        
        [SerializeField] public float[] UpgradeDiscounts;
        [SerializeField] public float[] FirerateBoosts;
        [SerializeField] public float[] SpwnIntervalBoosts;
        [SerializeField] public float[] IncomeBoosts;



        public float GetUpgradeDiscount(int Level) => UpgradeDiscounts[Level];
        public float GetFirerateBoost(int Level) => FirerateBoosts[Level];
        public float GetSpwnIntervalBoost(int Level) => SpwnIntervalBoosts[Level];
        public float GetIncomeBoost(int Level) => IncomeBoosts[Level];
        
        
    }



}

