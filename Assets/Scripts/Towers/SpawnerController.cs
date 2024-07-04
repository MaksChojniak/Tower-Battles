using MMK.ScriptableObjects;
using UnityEngine;

namespace MMK.Towers
{
    
    [RequireComponent(typeof(SpawnerAudio))]
    [RequireComponent(typeof(SpawnerAnimation))]
    public class SpawnerController : TowerController
    {


        public Spawner SpawnerData;
        
        
        public SpawnerAudio AudioComponent { private set; get; }
        public SpawnerAnimation AnimationComponent { private set; get; }
        

        protected override void Awake()
        {
            AudioComponent = this.GetComponent<SpawnerAudio>();
            AnimationComponent = this.GetComponent<SpawnerAnimation>();
            
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
        }

        protected override void UnregisterHndlers()
        {
            base.UnregisterHndlers();
        }
        
#endregion

        protected override bool OnUpgradeLevel()
        {
            long upgradePrice = SpawnerData.GetUpgradePrice(Level);

            if (GamePlayerInformation.GetBalance() < upgradePrice)
                return false;
            
            GamePlayerInformation.ChangeBalance(-upgradePrice);
            
            return base.OnUpgradeLevel();
        }


        protected override void UploadNewData()
        {
            base.UploadNewData();

            AnimationComponent.UpdateController(Level);
            // TODO upload spawning data :)

        }


        protected override TowerInformations OnGetTowerInformations()
        {
            return new TowerInformations()
            {
                Data = SpawnerData,
                Controller = this
            };
            // return base.OnGetTowerInformations();
        }



        protected override void RemoveTowerProcess()
        {
            long sellPrice = SpawnerData.GetTowerSellValue(Level);
            GamePlayerInformation.ChangeBalance(sellPrice);
            
            base.RemoveTowerProcess();
            
        }

        
        
    }
    
    
}
