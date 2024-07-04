using System;
using MMK.Towers;
using Unity.VisualScripting;
using UnityEngine;

namespace MMK.ScriptableObjects
{
    [CreateAssetMenu(fileName = "Weapons", menuName = "Weapon/Weapons")]
    public class Weapon : ScriptableObject
    {
        public string WeaponName;
        
        public WeaponType WeaponType;
        public DamageType DamageType;
        public ShootingType ShootingType;

        public int Damage;
        public float Firerate
        {
            get => firerate * TowerControllerUtility.GetBoosterData().FirerateBoost;
            set => firerate = value;
        }
        [SerializeField] float firerate;
        
        public float SplashDamageSpread;
        public int MaxEnemiesInSpread;
        
        
        public float BurningTime = 0;// = 2f;
        public float BurningInterval = 0;// = 0.25f;
    }
    
    
    public enum WeaponType
    {
        SingleWeapon,
        DualWield,
    }

    public enum DamageType
    {
        Single,
        Spraed,
        Splash,
        Fire
    }

    public enum ShootingType
    {
        Shootable,
        Throwable
    }
    

}
