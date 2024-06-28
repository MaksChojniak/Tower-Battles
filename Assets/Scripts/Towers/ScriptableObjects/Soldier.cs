using System;
using MMK.ScriptableObjects;
using MMK.Towers;
using UnityEngine;


[CreateAssetMenu(fileName = "Soldier", menuName = "Towers/Soldier", order = 2)]
public class Soldier : Tower
{

    [SerializeField] public Weapon[] UpgradeWeapons;
    [SerializeField] public float[] ViewRanges;
    [SerializeField] public bool[] HasBinoculars;

    
    // SoldierUpgradeData GetUpgradeData(int index) => UpgradesData[index];
    //
    // public string GetUpgradeTitle(int index) => GetUpgradeData(index).UpgradeTitle;
    // public Sprite GetUpgradeIcon(int index) => GetUpgradeData(index).UpgradeIcon;
    //
    // public long GetUpgradePrice(int index) => Mathf.RoundToInt(GetUpgradeData(index).UpgradePrice * TowerControllerUtility.GetBoosterData().UpgradeDiscount);

    
    public Weapon GetWeapon(int Level) => UpgradeWeapons[Level];
    
    public float GetViewRange(int Level) => ViewRanges[Level];
    
    public bool GetHasBinoculars(int Level) => HasBinoculars[Level];
    
    
}

