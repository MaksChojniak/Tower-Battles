using System;
using DefaultNamespace.ScriptableObjects;
using UnityEngine;


[CreateAssetMenu(fileName = "Soldier", menuName = "Towers/Soldier", order = 2)]
public class Soldier : Tower
{
    [Space(18)]
    public SoldierUpgradeData[] UpgradesData;


    SoldierUpgradeData GetUpgradeData(int index) => UpgradesData[index];

    public Weapon GetWeapon(int index) => GetUpgradeData(index).Weapon;

    public string GetUpgradeTitle(int index) => GetUpgradeData(index).UpgradeTitle;
    public string GetUpgradeDescription(int index) => GetUpgradeData(index).UpgradeDescription;
    public Sprite GetUpgradeIcon(int index) => GetUpgradeData(index).UpgradeIcon;

    public long GetUpgradePrice(int index) => GetUpgradeData(index).UpgradePrice;
    public long GetSellPrice(int index) => GetUpgradeData(index).SellPrice;
    
    public double GetViewRange(int index) => GetUpgradeData(index).ViewRange;
    public bool GetHasBinoculars(int index) => GetUpgradeData(index).HasBinoculars;
}


[Serializable]
public class SoldierUpgradeData : UpgradeDataBase
{

    public double ViewRange;
    public bool HasBinoculars;
}