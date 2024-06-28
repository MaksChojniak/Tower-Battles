using UnityEngine;


namespace MMK.ScriptableObjects
{
    [CreateAssetMenu(fileName = "Spawner", menuName = "Buildings/Spawner")]
    public class Spawner : Tower
    {
        
        public Tower Tower;

        public double[] SpawnIntervals;


    }
}
