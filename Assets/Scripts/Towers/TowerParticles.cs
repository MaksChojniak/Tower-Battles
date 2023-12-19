using DefaultNamespace;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using UnityEngine;

namespace Assets.Scripts.Towers
{
    public class TowerParticles : MonoBehaviour    
    {
        [SerializeField] ParticleSystem[] muzzleFlashParticles;
        [SerializeField] ParticleSystem[] muzzleSmokeParticles;

        [SerializeField] ParticleSystem explosionParticle;


        private void OnEnable()
        {
            bool isSoldier = this.transform.parent.TryGetComponent<SoldierController>(out var soldierController);

            if(isSoldier)
                soldierController.OnShoot += OnShoot;

            if (isSoldier)
                soldierController.OnHitEnemy += OnHitEnemy;
        }

        private void OnDisable()
        {
            bool isSoldier = this.transform.parent.TryGetComponent<SoldierController>(out var soldierController);

            if (isSoldier)
                soldierController.OnShoot -= OnShoot;

            if (isSoldier)
                soldierController.OnHitEnemy -= OnHitEnemy;
        }



        void OnShoot(int RifleIndex)
        {
            if(muzzleFlashParticles.Length <= RifleIndex)
                return;

            if (muzzleSmokeParticles.Length <= RifleIndex)
                return;


            ParticleSystem muzzleFlashParticle = muzzleFlashParticles[RifleIndex];
            ParticleSystem muzzleSmokeParticle = muzzleSmokeParticles[RifleIndex];

            muzzleFlashParticle.Play();
            muzzleSmokeParticle.Play();
        }


        void OnHitEnemy(Transform enemy)
        {
            return;

            if (explosionParticle == null)
                return;

            Vector3 enemyPosition = enemy.position;

            explosionParticle.transform.position = enemyPosition;
            explosionParticle.Play();

        }

    }
}
