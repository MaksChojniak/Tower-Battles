namespace Pooling
{
    using System;
    using System.Collections;
    using UnityEngine;
  
    public class ParticlePoolManager : MonoBehaviour
    {

        public static ParticlePoolManager InitParticlePool(string name)
        {
            GameObject poolManagerContainer = new GameObject(name);
            
            ParticlePoolManager poolManager = poolManagerContainer.AddComponent<ParticlePoolManager>();

            return poolManager;
        }


        public Pool<Particle> Pool;

    }
}