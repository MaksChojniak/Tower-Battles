using System;
using DefaultNamespace.ScriptableObjects;
using UnityEngine;


[CreateAssetMenu(fileName = "Booster", menuName = "Towers/Booster", order = 2)]
public class Booster : Tower
{
    [Space(18)]
    public BoosterUpgradeData[] UpgradesData;


    BoosterUpgradeData GetUpgradeData(int index) => UpgradesData[index];

    public string GetUpgradeTitle(int index) => GetUpgradeData(index).UpgradeTitle;

    public Sprite GetUpgradeIcon(int index) => GetUpgradeData(index).UpgradeIcon;

    public long GetUpgradePrice(int index) => GetUpgradeData(index).UpgradePrice;
    
    public float GetUpgradeDiscount(int index) => GetUpgradeData(index).UpgradeDiscount;
    public float GetFirerateBoost(int index) => GetUpgradeData(index).FirerateBoost;
    public float GetSpwnIntervalBoost(int index) => GetUpgradeData(index).SpwnIntervalBoost;
    public float GetIncomeBoost(int index) => GetUpgradeData(index).IncomeBoost;
}


[Serializable]
public class BoosterUpgradeData : UpgradeDataBase
{

    public float UpgradeDiscount;
    public float FirerateBoost;
    public float SpwnIntervalBoost;
    public float IncomeBoost;
}

