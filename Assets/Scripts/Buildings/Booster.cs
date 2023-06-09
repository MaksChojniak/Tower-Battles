using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "Booster", menuName = "Buildings/Booster")]
public class Booster : Building
{
    public float[] upgradeDiscount;
    public float[] firerateBoost;
    public float[] intervalBoost;
    public float[] incomeBoost;

    public float GetUpgradeDiscount(int currentUpgradeLevel) => upgradeDiscount[currentUpgradeLevel];

    public float GetFirerateBoost(int currentUpgradeLevel) => firerateBoost[currentUpgradeLevel];

    public float GetIntervalBoost(int currentUpgradeLevel) => intervalBoost[currentUpgradeLevel];

    public float GetIncomeBoost(int currentUpgradeLevel) => incomeBoost[currentUpgradeLevel];
}
