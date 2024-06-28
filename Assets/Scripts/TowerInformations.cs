using MMK.ScriptableObjects;
using MMK.Towers;
using UnityEngine;
using System;

namespace MMK
{
    [Serializable]
    public class TowerInformations
    {
        public Tower Data;
        public TowerController Controller;

        
        public bool TryGetInfo<T1, T2>(out T1 data, out T2 controller) where T1 : Tower where T2 : TowerController
        {
            return (Data, Controller).TryGetInfo<T1, T2>(out data, out controller);
        }
        
        
    }
}
