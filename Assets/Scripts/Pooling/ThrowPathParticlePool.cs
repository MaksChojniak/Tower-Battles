namespace Pooling
{
    using PathCreation;
    using System;
    using System.Collections.Generic;
    using System.Linq;
    using System.Text;
    using System.Threading.Tasks;
    using UnityEngine;

    public class ThrowPathParticlePool<T> : ParticlePool<T>, IParticlePool<T> where T : Particle
    {
       GameObject prefab;

        public ThrowPathParticlePool(GameObject prefab, uint count) : base("[Throw Path Particle Pool]")
        {
            this.prefab = prefab;

            this.Pool = new Pool<T>(CreateParticle, DestroyParticle, ResetParticle, count);
        }


        public T CreateParticle() =>
            UnityEngine.Object.Instantiate(this.prefab, Vector3.zero, Quaternion.identity, container.transform).GetComponent<T>();

        void DestroyParticle(T obj) => UnityEngine.Object.Destroy(obj);

        public void PrepareParticle(T obj)
        {
            //obj.transform.position = this.owner.transform.position;
            obj.gameObject.SetActive(true);
        }

        public void ResetParticle(T obj)
        {
            obj.gameObject.SetActive(false);
            //obj.GetComponent<PathCreator>().bezierPath = null;
            obj.transform.position = Vector3.zero;
        }


        public T Get() => this.Pool.Get(PrepareParticle);
        public T Get(Action<T> prepareAction) => this.Pool.Get(prepareAction);

        public void Realese(T obj) => this.Pool.Release(obj);

    }


    public static class ThrowPathParticlePoolExtension
    {
        public static ThrowPathParticlePool<T> CreateThrowPathPool<T>(this MonoBehaviour owner, GameObject prefab, uint count = 100) where T : Particle =>
            new ThrowPathParticlePool<T>(prefab, count);

    }

}
