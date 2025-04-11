namespace Pooling
{
    using System;
    using System.Collections.Generic;
    using System.Linq;
    using System.Text;
    using System.Threading.Tasks;
    using UnityEngine;

    public abstract class ParticlePool<T> where T : Particle
    {
        protected Pool<T> Pool;

        protected GameObject container;

        protected ParticlePool(string name)
        {
            this.container = new GameObject(name);
            this.container.transform.position = Vector3.zero;
            this.container.transform.rotation  = Quaternion.identity;
        }
    }
}
