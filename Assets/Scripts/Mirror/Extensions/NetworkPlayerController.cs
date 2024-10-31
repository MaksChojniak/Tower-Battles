using System;
using UnityEngine;


namespace Mirror.Extensions
{
    
    
    public class NetworkPlayerController : NetworkBehaviour
    {
        
        public delegate void ChangeBalanceDelegate(long Value);
        public static ChangeBalanceDelegate ChangeBalance;

        public delegate long GetBalanceDelegate();
        public static GetBalanceDelegate GetBalance;
        
        public delegate void OnBalanceChangedDelegate(long value);
        public static event OnBalanceChangedDelegate OnBalanceChanged;
    

        public delegate void ChangeHealthDelegate(int Value);
        public static ChangeHealthDelegate ChangeHealth;
    
        public delegate int GetHealthDelegate();
        public static GetHealthDelegate GetHealth;
        
        public delegate void OnHealthChangedDelegate(int value);
        public static event OnHealthChangedDelegate OnHealthChanged;
     
        
        public delegate void OnDieDelegate();
        public static event OnDieDelegate OnDie;
        
        

        [SyncVar] public long Balance;
        [SyncVar] public int Health;
        
        [SyncVar(hook = nameof(OnDeadStateChanged))] public bool IsDead;



#region Lifecycle
        
        
        void Awake()
        {
            
            
        }

        void OnDestroy()
        {
         
            
        }

        
        void Start()
        {
            
        }

        void Update()
        {
            
        }
        
        
#endregion


#region Network Lifecycle

        
        public override void OnStartServer()
        {
            base.OnStartServer();
            
            Health = 100;
            Balance = 650;
            IsDead = false;
        }

        public override void OnStopServer()
        {
            base.OnStopServer();
        }


        public override void OnStartClient()
        {
            base.OnStartClient();
        }

        public override void OnStopClient()
        {
            base.OnStopClient();
        }


        public override void OnStartAuthority()
        {
            base.OnStartAuthority();
            
            GetBalance += OnGetBalance;
            GetHealth += OnGetHealth;
            
            ChangeBalance += ChangeBalanceValue;
            ChangeHealth += ChangeHealthValue;

            WaveManager.OnEndWave += GiveWaveReward;
        }

        public override void OnStopAuthority()
        {
            WaveManager.OnEndWave -= GiveWaveReward;
            
            ChangeHealth -= ChangeHealthValue;
            ChangeBalance -= ChangeBalanceValue;
            
            GetHealth -= OnGetHealth;
            GetBalance -= OnGetBalance;
            
            base.OnStopAuthority();
        }

        
#endregion


        
        
        
        void GiveWaveReward(uint reward) => ChangeBalance(reward);
        
        
        
        
#region Balance System

        long OnGetBalance() => Balance;

        void ChangeBalanceValue(long value) => ChangeBalanceOnServer(value);
        [Command]
        void ChangeBalanceOnServer(long value)
        {
            Balance += value;

            ChangeBalanceOnClient(Balance);
        }
        [TargetRpc]
        void ChangeBalanceOnClient(long balance)
        {
            OnBalanceChanged?.Invoke(balance);
        }
        
#endregion


        
#region Health Balance

        int OnGetHealth() => Health;
        
        void ChangeHealthValue(int value) => ChangeHealthOnServer(value);
        [Command]
        void ChangeHealthOnServer(int value)
        {
            Health += value;

            if (Health < 0)
            {
                Health = 0;
                IsDead = true;
            }

            ChangeHealthOnClient(Health);
        }
        [TargetRpc]
        void ChangeHealthOnClient(int health)
        {
            OnHealthChanged?.Invoke(health);
        }

        void OnDeadStateChanged(bool oldState, bool newState)
        {
            if(newState == oldState)
                return;
            
            if(!isOwned)
                return;
            
            if(newState)
                OnDie?.Invoke();
        }
        
#endregion


        [SerializeField] GameObject testObject;
        [SerializeField] Transform container;
        [ContextMenu(nameof(SpawnNetworkObject))]
        public void SpawnNetworkObject()
        {
            GameObject obj = Instantiate(testObject, container);
            obj.name = "Test Network Object";
            NetworkServer.Spawn(obj);
        }


    }
}
