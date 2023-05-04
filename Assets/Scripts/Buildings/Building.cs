using System;using UnityEngine;
using Object = System.Object;

// [CreateAssetMenu(fileName = "Buildings", menuName = "Buildings")]

public class Building : ScriptableObject
{
   public string buildingName;
    
    public GameObject buildingPrefb;
    
    public TypeOfBuildng type;

    public int currentUpgradeLevel;
    
    public long price;
    
    public long[] upgradePrices;
    
    public double[] viewRange;

    
    
    public long GetUpgradePrice() => upgradePrices[currentUpgradeLevel];
    
    public double GetViewRange() => viewRange[currentUpgradeLevel];

}


public enum TypeOfBuildng
{
    soldier,
    spawner,
    farm,
    vehicle
}