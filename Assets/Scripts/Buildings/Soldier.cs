using UnityEngine;


[CreateAssetMenu(fileName = "Soldier", menuName = "Soldier")]
public class Soldier : Building
{
    public int[] damage;

    public float[] firerate;
    
    public bool haveBinoculars;
    
    
    
    public int GetDamage() => damage[currentUpgradeLevel];

    public float GetFirerate() => firerate[currentUpgradeLevel];

}
