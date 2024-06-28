using System;
using MMK.ScriptableObjects;
using MMK.Towers;
using UnityEngine;

namespace MMK.ScriptableObjects
{

    [CreateAssetMenu(fileName = "Farm", menuName = "Buildings/Farm")]
    public class Farm : Tower
    {

        [SerializeField] public long[] WaveIncome;


        public long GetWaveIncome(int Level) => WaveIncome[Level];
        

        // FarmUpgradeData GetUpgradeData(int index) => UpgradesData[index];
        //
        // public string GetUpgradeTitle(int index) => GetUpgradeData(index).UpgradeTitle;
        //
        // public Sprite GetUpgradeIcon(int index) => GetUpgradeData(index).UpgradeIcon;
        //
        // public long GetUpgradePrice(int index) => Mathf.RoundToInt(GetUpgradeData(index).UpgradePrice * TowerControllerUtility.GetBoosterData().UpgradeDiscount);
        //
        // public long GetWaveReward(int index) => Mathf.RoundToInt(GetUpgradeData(index).WaveReward * TowerControllerUtility.GetBoosterData().IncomeBoost);

    }


}

