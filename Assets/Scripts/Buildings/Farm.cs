using UnityEngine;


[CreateAssetMenu(fileName = "Farm", menuName = "Farm")]
public class Farm : Building
{
    public long[] waveReward;

    public long GetWaveReward(int currentUpgradeLevel) => waveReward[currentUpgradeLevel];

}
