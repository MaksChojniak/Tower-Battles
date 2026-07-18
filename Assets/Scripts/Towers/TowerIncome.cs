using UnityEngine;


namespace MMK.Towers
{
    public class TowerIncome : MonoBehaviour
    {
        public delegate void SetWaveIncomeDelegate(long Value);
        public SetWaveIncomeDelegate SetWaveIncome;
        
        
        public delegate void OnIncomeDelegate(long Value);
        public event OnIncomeDelegate OnIncome;


        public long WaveIncome;
        public long TotalWaveIncome;
        
        public FarmController FarmController { private set; get; }
        


        void Awake()
        {
            FarmController = this.GetComponent<FarmController>();
            
            RegisterHandlers();
            
        }

        void OnDestroy()
        {
            UnregisterHndlers();
            
        }

        void Start()
        {
            
        }

        void Update()
        {
            
        }

        void FixedUpdate()
        {
            
        }


        
#region Register & Unregister Handlers
        
        void RegisterHandlers()
        {
            SetWaveIncome += OnSetWaveIncome;
            WaveManager.OnStartWave += OnStartWave;

        }

        void UnregisterHndlers()
        {
            WaveManager.OnStartWave -= OnStartWave;
            SetWaveIncome -= OnSetWaveIncome;
        }
        
#endregion


        void OnSetWaveIncome(long Value)
        {
            WaveIncome = Value;
        }


        void OnStartWave()
        {
            if(!FarmController.IsPlaced)
                return;

            float incomeBoost = TowerControllerUtility.GetBoosterData().IncomeBoost;
            long boostedIncome = Mathf.RoundToInt(WaveIncome * incomeBoost);

            GamePlayerInformation.ChangeBalance(boostedIncome);
            TotalWaveIncome += boostedIncome;

            OnIncome?.Invoke(boostedIncome);
        }
        



    }
    
    
}
