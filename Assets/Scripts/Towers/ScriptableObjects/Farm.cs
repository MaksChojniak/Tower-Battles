using System;
using DefaultNamespace.ScriptableObjects;
using UnityEngine;


[CreateAssetMenu(fileName = "Farm", menuName = "Buildings/Farm")]
public class Farm : Tower
{
    [Space(18)]
    public FarmUpgradeData[] UpgradesData;

    
    FarmUpgradeData GetUpgradeData(int index) => UpgradesData[index];

    public Weapon GetWeapon(int index) => GetUpgradeData(index).Weapon;

    public string GetUpgradeTitle(int index) => GetUpgradeData(index).UpgradeTitle;

    public Sprite GetUpgradeIcon(int index) => GetUpgradeData(index).UpgradeIcon;

    public long GetUpgradePrice(int index) => GetUpgradeData(index).UpgradePrice;

    public long GetWaveReward(int index) => GetUpgradeData(index).WaveReward;

}

[Serializable]
public class FarmUpgradeData : UpgradeDataBase
{

    public long WaveReward;
}
