using System;
using DefaultNamespace.ScriptableObjects;
using UnityEngine;


[CreateAssetMenu(fileName = "Farm", menuName = "Buildings/Farm")]
public class Farm : Tower
{
    [Space(18)]
    public FarmUpgradeData[] UpgradesData;

    
    FarmUpgradeData GetUpgradeData(int index) => UpgradesData[index];

    public string GetUpgradeTitle(int index) => GetUpgradeData(index).UpgradeTitle;

    public Sprite GetUpgradeIcon(int index) => GetUpgradeData(index).UpgradeIcon;

    public long GetUpgradePrice(int index) => Mathf.RoundToInt(GetUpgradeData(index).UpgradePrice * TowerControllerUtility.GetBoosterData().UpgradeDiscount);

    public long GetWaveReward(int index) => Mathf.RoundToInt(GetUpgradeData(index).WaveReward * TowerControllerUtility.GetBoosterData().IncomeBoost);

}

[Serializable]
public class FarmUpgradeData : UpgradeDataBase
{

    public long WaveReward;
}
