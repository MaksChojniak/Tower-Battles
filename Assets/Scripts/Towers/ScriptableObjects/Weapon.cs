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
        
        public int Damage;
        public float Firerate;
    }
    
    
    public enum WeaponType
    {
        SingleWeapon,
        DualWield,
    }

    public enum DamageType
    {
        Single,
        Splash
    }
    

}
