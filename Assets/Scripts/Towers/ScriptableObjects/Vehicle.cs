using UnityEngine;


[CreateAssetMenu(fileName = "Vehicle", menuName = "Buildings/Vehicle")]
public class Vehicle : Soldier
{
    public float speed;

    public int[] health;

    
    
    public int GetHealth(int currentUpgradeLevel) => health[currentUpgradeLevel];

}