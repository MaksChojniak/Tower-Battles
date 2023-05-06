using System;using UnityEngine;
using Object = System.Object;

// [CreateAssetMenu(fileName = "Buildings", menuName = "Buildings")]

public class Building : ScriptableObject
{
   public string buildingName;
    
    public GameObject buildingPrefab;

    public Sprite buildingImage;
    
    public TypeOfBuildng type;

    public long price;
    
    public long[] upgradePrices;
    
    public long[] sellPrices;
    
    public string[] upgradeTitle;
    
    public string[] upgradeDescription;
    
    public double[] viewRange;

    
    
    public long GetUpgradePrice(int currentUpgradeLevel) => upgradePrices[currentUpgradeLevel];
    
    public long GetSellPrice(int currentUpgradeLevel) => sellPrices[currentUpgradeLevel];
    
    public string GetUpgradeTitle(int currentUpgradeLevel) => upgradeTitle[currentUpgradeLevel];
    
    public string GetUpgradeDescription(int currentUpgradeLevel) => upgradeDescription[currentUpgradeLevel];
    
    public double GetViewRange(int currentUpgradeLevel) => viewRange[currentUpgradeLevel];

}


public enum TypeOfBuildng
{
    soldier,
    spawner,
    farm,
    vehicle
}