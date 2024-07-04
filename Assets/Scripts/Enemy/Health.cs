using System;
using UnityEngine;
using UnityEngine.UI;

// namespace Enemy
// {

    public class Health : MonoBehaviour
    {
        public delegate void OnTakeDamageDelegate(bool IsBurning);
        public event OnTakeDamageDelegate OnTakeDamage;
        
        public delegate void OnDieDelegate();
        public event OnDieDelegate OnDie;
        
        
        public delegate int GetHealthDelegate();
        public GetHealthDelegate GetHealth;

        public delegate void ChangeHealthDelegate(int Value);
        public ChangeHealthDelegate ChangeHealth;
        
        public delegate void SetHealthDelegate(int Value);
        public SetHealthDelegate SetHealth;


        [Space(18)]
        [Header("Properties UI")]
        [SerializeField] RectTransform HealthBarObject;
        [SerializeField] RectTransform HealthBar => HealthBarObject.transform.GetChild(0).GetComponent<RectTransform>();
        [SerializeField] Image HealthBarImage => HealthBar.GetComponent<Image>();
        
        [Header("Stats")]
        [SerializeField] int HealthValue;
        [SerializeField] int BaseHealthValue;

        
        public EnemyController EnemyController { private set; get; }

        
        void Awake()
        {
            EnemyController = this.GetComponent<EnemyController>();
            
            RegisterHandlers();
            
        }

        void OnDestroy()
        {
            UnregisterHandlers();
            
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
            SetHealth += OnSetHealth;
            
            GetHealth += OnGetHealth;
            ChangeHealth += OnChangeHealth;

        }
        
        void UnregisterHandlers()
        {
            ChangeHealth -= OnChangeHealth;
            GetHealth -= OnGetHealth;

            SetHealth -= OnSetHealth;

        }
        
#endregion



        void OnSetHealth(int Value)
        {
            HealthValue = Value;
            BaseHealthValue = Value;
        }


        int OnGetHealth() => HealthValue;

        void OnChangeHealth(int value)
        {
            HealthValue += value;
            
            OnTakeDamage?.Invoke(EnemyController.IsBurning);
            
            if(HealthValue <= 0)
                OnDie?.Invoke();
            
            Debug.Log($"Change Health value  [value: {value}, health: {HealthValue}]");

            UpdateUI();
        }


        void UpdateUI()
        {
            bool enemyIsAlive = HealthValue > 0;
            
            HealthBarObject.gameObject.SetActive(enemyIsAlive);
            
            HealthBarImage.fillAmount = !enemyIsAlive ? 0 : (float)HealthValue / (float)BaseHealthValue;
            
        }
        
    }


// }
