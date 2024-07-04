using MMK.ScriptableObjects;
using MMK.Towers;
using UnityEngine;

namespace MMK.Towers
{
    
    [RequireComponent(typeof(TowerIncome))]
    [RequireComponent(typeof(FarmAnimation))]
    [RequireComponent(typeof(FarmAudio))]
    public class FarmController : TowerController
    {

        // public Farm farmData;
        //
        // public int TotalEarnedMoney;
        //
        //
        // protected override (object, TypeOfBuildng) GetTowerData()
        // {
        //     return (farmData, farmData.Type);
        //     
        //     // return base.GetTowerData();
        // }
        //
        //
        // public override void Awake()
        // {
        //     WaveManager.OnStartWave += EarnFarmBonusProcess;
        //     
        //     base.Awake();
        //     
        //     UpdateViewRange(0f);
        // }
        //
        // public override void OnDestroy()
        // {
        //     WaveManager.OnStartWave -= EarnFarmBonusProcess;
        //     
        //     base.OnDestroy();
        // }
        //
        // protected override void Destroy()
        // {
        //     GamePlayerInformation.ChangeBalance(this.GetTowerSellValue(farmData.Type));
        //
        //     this.ShowTowerInformation(false);
        //     
        //     Destroy(this.gameObject);
        //     
        //     base.Destroy();
        // }
        //
        // public override void Update()
        // {
        //     base.Update();
        // }
        //
        // protected override void OnUpgradeTower(TowerController towerController)
        // {
        //     if (towerController != this || UpgradeLevel >= 4)
        //         return;
        //
        //     if (GamePlayerInformation.Instance == null || GamePlayerInformation.Instance.GetBalance() < farmData.GetUpgradePrice(UpgradeLevel))
        //     {
        //         WarningSystem.ShowWarning(WarningSystem.WarningType.NotEnoughtMoney);
        //         return;
        //     }
        //
        //     GamePlayerInformation.ChangeBalance(-farmData.GetUpgradePrice(UpgradeLevel));
        //     
        //     base.OnUpgradeTower(towerController);
        // }
        //
        //
        // void EarnFarmBonusProcess()
        // {
        //     long waveReward = farmData.GetWaveReward(UpgradeLevel);
        //     
        //     GamePlayerInformation.ChangeBalance(waveReward);
        //     
        //     // TODO Show info for farm bonus
        //     // ShowFarmBonus(waveReward); cos takiego
        // }
        
        
        public Farm FarmData;


        public TowerIncome TowerIncomeComponent { private set; get; }
        public FarmAnimation AnimationComponent { private set; get; }
        public FarmAudio AudioComponent { private set; get; }
        
        
        
        
        protected override void Awake()
        {
            TowerIncomeComponent = this.GetComponent<TowerIncome>();
            AnimationComponent = this.GetComponent<FarmAnimation>();
            AudioComponent = this.GetComponent<FarmAudio>();
            
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
            long upgradePrice = FarmData.GetUpgradePrice(Level);

            if (GamePlayerInformation.GetBalance() < upgradePrice)
                return false;
            
            GamePlayerInformation.ChangeBalance(-upgradePrice);
            
            return base.OnUpgradeLevel();
        }


        protected override void UploadNewData()
        {
            base.UploadNewData();

            
            TowerIncomeComponent.SetWaveIncome(FarmData.GetWaveIncome(Level));
            
            AnimationComponent.UpdateController(Level);
            
        }




        protected override TowerInformations OnGetTowerInformations()
        {
            return new TowerInformations()
            {
                Data = FarmData,
                Controller = this
            };
            // return base.OnGetTowerInformations();
        }



        protected override void RemoveTowerProcess()
        {
            long sellPrice = FarmData.GetTowerSellValue(Level);
            GamePlayerInformation.ChangeBalance(sellPrice);
            
            base.RemoveTowerProcess();
            
        }
        
        
        
        
    }
}
