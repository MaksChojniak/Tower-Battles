using UnityEngine;


[CreateAssetMenu(fileName = "Spawner", menuName = "Spawner")]
public class Spawner : Building
{
    public Building spawnedBuildingPrefab;

    public double spawnInterval;
}
