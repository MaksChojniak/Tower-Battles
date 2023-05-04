using UnityEngine;


[CreateAssetMenu(fileName = "Vehicle", menuName = "Vehicle")]
public class Vehicle : Soldier
{
    public double speed;

    public int[] health;

    
    
    public int GetHealth() => health[currentUpgradeLevel];

}