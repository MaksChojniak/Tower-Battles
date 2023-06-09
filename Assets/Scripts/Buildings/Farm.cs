using UnityEngine;


[CreateAssetMenu(fileName = "Farm", menuName = "Buildings/Farm")]
public class Farm : Building
{
    public long[] waveReward;

    public long GetWaveReward(int currentUpgradeLevel) => waveReward[currentUpgradeLevel];

}
