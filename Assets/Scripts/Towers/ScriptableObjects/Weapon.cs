using System;
using UnityEngine;

namespace DefaultNamespace.ScriptableObjects
{
    [CreateAssetMenu(fileName = "Weapons", menuName = "Weapon")]
    public class Weapon : ScriptableObject
    {
        public string WeaponName;
        
        public WeaponType WeaponType;
        public DamageType DamageType;
        
        public float Damage;
        public float Firerate;
    }
    
    
    public enum WeaponType
    {
        SingleRifle,
        DoubleRifle,
        Melee
    }

    public enum DamageType
    {
        Single,
        Splash
    }
    

}
