namespace Pooling
{

    using System;
    using System.Collections.Generic;
    using System.Linq;
    using System.Text;
    using System.Threading.Tasks;
    using UnityEngine;


    public interface IParticlePool<T> where T : Particle
    {
        T CreateParticle();

        void DestroyParticle(T obj) => UnityEngine.Object.Destroy(obj);
        void ResetParticle(T obj);
        void PrepareParticle(T obj);


        public T Get();
        public T Get(Action<T> prepareAction);

        public void Realese(T obj);
    }

}
