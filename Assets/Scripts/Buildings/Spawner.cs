using UnityEngine;


[CreateAssetMenu(fileName = "Spawner", menuName = "Buildings/Spawner")]
public class Spawner : Building
{
    public Vehicle spawnedBuilding;

    public double spawnInterval;
}
