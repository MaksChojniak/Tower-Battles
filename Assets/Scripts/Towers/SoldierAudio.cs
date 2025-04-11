using System;
using MMK;
using MMK.ScriptableObjects;
using MMK.Towers;
using UnityEngine;

namespace Towers
{
    public class SoldierAudio : TowerAudio
    {

        [Space(12)]
        public AudioData ShootAudio;
        
        
        
        public SoldierController SoldierController { private set; get; }


        

        protected override void Awake()
        {
            SoldierController = this.GetComponent<SoldierController>();
            
            base.Awake();
            
        }

        protected override void OnDestroy()
        {
            base.OnDestroy();
        }

        protected override void Start()
        {
            base.Start();
        }

        protected override void Update()
        {
            base.Update();
        }

        protected override void FixedUpdate()
        {
            base.FixedUpdate();
        }


#region Register & Unregister Handlers

        protected override void RegisterHandlers()
        {
            base.RegisterHandlers();
            
            SoldierController.OnPlaceTower += PlayPlaceTowerAudio;
            SoldierController.OnRemoveTower += PlayRemoveTowerAudio;
            SoldierController.OnLevelUp += PlayLevelUpAudio;
            SoldierController.InputHandlerCmponent.OnClicked += PlayOnTowerClickedAudio;
            
            SoldierController.TowerWeaponComponent.OnShoot += PlayOnShootAudio;

        }

        protected override void UnregisterHandlers()
        {
            base.UnregisterHandlers();
            
            SoldierController.TowerWeaponComponent.OnShoot -= PlayOnShootAudio;
            
            SoldierController.InputHandlerCmponent.OnClicked -= PlayOnTowerClickedAudio;
            SoldierController.OnLevelUp -= PlayLevelUpAudio;
            SoldierController.OnRemoveTower -= PlayRemoveTowerAudio;
            SoldierController.OnPlaceTower -= PlayPlaceTowerAudio;
            
        }
        
#endregion


        
        
        void PlayOnShootAudio(EnemyController target, Side[] WeaponSide, bool EnemyInCenter, Weapon Wepaon)
        {
            if (ShootAudio.AudioClip == null)
                throw new NullReferenceException("ShootAudio Clip doesn't exist  [value = null]");

            ShootAudio.AudioSource.Play();

        }




        
#region Setup Prefab
        
        protected override void SetupAudioData()
        {
            base.SetupAudioData();
         
            Transform audioParent = GetAudioParent().transform;
            
            ShootAudio.SetupAudio(audioParent);

        }
        
#endregion
        

    }
}
