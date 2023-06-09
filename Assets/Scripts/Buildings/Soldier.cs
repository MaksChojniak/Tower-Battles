using UnityEngine;


[CreateAssetMenu(fileName = "Soldier", menuName = "Buildings/Soldier")]
public class Soldier : Building
{
    public int[] damage;

    public float[] firerate;
    
    public bool haveBinoculars;
    
    
    
    public int GetDamage(int currentUpgradeLevel) => damage[currentUpgradeLevel];

    public float GetFirerate(int currentUpgradeLevel, float multiplier) => firerate[currentUpgradeLevel] * multiplier;

}
