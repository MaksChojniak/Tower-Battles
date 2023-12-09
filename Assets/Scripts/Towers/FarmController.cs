using DefaultNamespace.ScriptableObjects;

namespace DefaultNamespace
{
    public class FarmController : TowerController
    {

        public Farm farmData;
        
        public int TotalEarnedMoney;
        

        protected override (object, TypeOfBuildng) GetTowerData()
        {
            return (farmData, farmData.Type);
            
            // return base.GetTowerData();
        }


        public override void Awake()
        {
            WaveManager.OnStartWave += EarnFarmBonusProcess;
            
            base.Awake();
            
            UpdateViewRange(0f);
        }

        public override void OnDestroy()
        {
            WaveManager.OnStartWave -= EarnFarmBonusProcess;
            
            base.OnDestroy();
        }

        protected override void Destroy()
        {
            GamePlayerInformation.ChangeBalance(this.GetTowerSellValue(farmData.Type));

            this.ShowTowerInformation(false);
            
            Destroy(this.gameObject);
            
            base.Destroy();
        }

        public override void Update()
        {
            base.Update();
        }

        protected override void OnUpgradeTower(TowerController towerController)
        {
            if (towerController != this || UpgradeLevel >= 4)
                return;

            if (GamePlayerInformation.Instance == null || GamePlayerInformation.Instance.GetBalance() < farmData.GetUpgradePrice(UpgradeLevel))
            {
                WarningSystem.ShowWarning(WarningSystem.WarningType.NotEnoughtMoney);
                return;
            }

            GamePlayerInformation.ChangeBalance(-farmData.GetUpgradePrice(UpgradeLevel));
            
            base.OnUpgradeTower(towerController);
        }
        

        void EarnFarmBonusProcess()
        {
            long waveReward = farmData.GetWaveReward(UpgradeLevel);
            
            GamePlayerInformation.ChangeBalance(waveReward);
            
            // TODO Show info for farm bonus
            // ShowFarmBonus(waveReward); cos takiego
        }
    }
}
