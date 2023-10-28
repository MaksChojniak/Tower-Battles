using System;
using Unity.VisualScripting;
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
        
        public float SplashDamageSpread;
        public int MaxEnemiesInSpread;
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
