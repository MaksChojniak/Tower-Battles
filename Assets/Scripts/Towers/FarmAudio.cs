using System;
using UnityEngine;

namespace MMK.Towers
{

    public class FarmAudio : TowerAudio
    {
        
        [Space(12)]
        public AudioData IncomeAudio;
        
        
        
        public FarmController FarmController { private set; get; }
        

        

        protected override void Awake()
        {
            FarmController = this.GetComponent<FarmController>();
            
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
            
            FarmController.OnRemoveTower += PlayRemoveTowerAudio;
            FarmController.OnLevelUp += PlayLevelUpAudio;
            FarmController.InputHandlerCmponent.OnClicked += PlayOnTowerClickedAudio;

            FarmController.TowerIncomeComponent.OnIncome += PlayIncomeAudio;

        }

        protected override void UnregisterHandlers()
        {
            base.UnregisterHandlers();
            
            FarmController.TowerIncomeComponent.OnIncome -= PlayIncomeAudio;
            
            FarmController.InputHandlerCmponent.OnClicked -= PlayOnTowerClickedAudio;
            FarmController.OnLevelUp -= PlayLevelUpAudio;
            FarmController.OnRemoveTower -= PlayRemoveTowerAudio;
            
        }
        
#endregion


        
        
        void PlayIncomeAudio(long Value)
        {
            if (IncomeAudio.AudioClip == null)
                throw new NullReferenceException("ShootAudio Clip doesn't exist  [value = null]");
            
            IncomeAudio.AudioSource.Play();
            
        }




        
#region Setup Prefab
        
        protected override void SetupAudioData()
        {
            base.SetupAudioData();
         
            Transform audioParent = GetAudioParent().transform;
            
            IncomeAudio.SetupAudio(audioParent);
            
        }
        
#endregion
        
    }
    
}
