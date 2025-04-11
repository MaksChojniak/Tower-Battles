namespace Pooling
{

    using System;
    using System.Collections.Generic;
    using System.Linq;
    using System.Text;
    using System.Threading.Tasks;
    using UnityEngine;

    public class ProjectileBeamParticlePool<T> : ParticlePool<T>, IParticlePool<T> where T : Particle
    {
        GameObject prefab;

        public ProjectileBeamParticlePool(GameObject prefab, uint count) : base("[Projectile Beam Particle Pool]")
        {
            this.prefab = prefab;

            Pool = new Pool<T>(CreateParticle, DestroyParticle, ResetParticle, count);
        }


        public T CreateParticle() =>
            UnityEngine.Object.Instantiate(this.prefab, Vector3.zero, Quaternion.identity, container.transform).GetComponent<T>();

        void DestroyParticle(T obj) => UnityEngine.Object.Destroy(obj);

        public void PrepareParticle(T obj)
        {
            obj.GetComponent<LineRenderer>().positionCount = 0;
            //obj.transform.position = this.owner.transform.position;
            obj.gameObject.SetActive(true);
        }

        public void ResetParticle(T obj)
        {
            obj.gameObject.SetActive(false);
            obj.transform.position = Vector3.zero;
            obj.GetComponent<LineRenderer>().positionCount = 0;
        }


        public T Get() => this.Pool.Get(PrepareParticle);
        public T Get(Action<T> prepareAction) => this.Pool.Get(prepareAction);

        public void Realese(T obj) => this.Pool.Release(obj);

    }


    public static class ProjectileBeamParticlePoolExtension 
    {
        public static ProjectileBeamParticlePool<T> CreateProjectileBeamPool<T>(this MonoBehaviour owner, GameObject prefab, uint count = 100) where T : Particle =>
            new ProjectileBeamParticlePool<T>(prefab, count); 
    
    }

}
