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
        }

        public override void OnDestroy()
        {
            GamePlayerInformation.ChangeBalance(TowerControllerUtility.GetTowerSellValue(this, farmData.Type));

            this.ShowTowerInformation(false);
            
            WaveManager.OnStartWave -= EarnFarmBonusProcess;
            
            Destroy(this.gameObject);
            
            base.OnDestroy();
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
