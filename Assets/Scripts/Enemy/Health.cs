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
        
        
        public delegate void EndPathDelegate();
        public EndPathDelegate EndPath;

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
        bool isDead;

        
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
            
            EndPath += OnEndPath;
            
            GetHealth += OnGetHealth;
            ChangeHealth += OnChangeHealth;

        }
        
        void UnregisterHandlers()
        {
            ChangeHealth -= OnChangeHealth;
            GetHealth -= OnGetHealth;

            EndPath -= OnEndPath;

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
            if (HealthValue <= 0)
                HealthValue = 0;
            
            OnTakeDamage?.Invoke(EnemyController.IsBurning);

            if (HealthValue <= 0 && !isDead)
            {
                isDead = true;
                OnDie?.Invoke();
            }

            Debug.Log($"Change Health value  [value: {value}, health: {HealthValue}]");

            UpdateUI();
        }

        void OnEndPath()
        {
            EndPath -= OnEndPath;

            OnChangeHealth(-BaseHealthValue);
        }
        


        void UpdateUI()
        {
            bool enemyIsAlive = HealthValue > 0;
            
            HealthBarObject.gameObject.SetActive(enemyIsAlive);
            
            HealthBarImage.fillAmount = !enemyIsAlive ? 0 : (float)HealthValue / (float)BaseHealthValue;
            
        }
        
    }


// }
