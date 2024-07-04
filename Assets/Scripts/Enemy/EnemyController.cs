using System;
using MMK.Extensions;
using UnityEngine;
using PathCreation;

// namespace MMK.Enemy
// {

    [RequireComponent(typeof(EnemyAnimation))]
    [RequireComponent(typeof(EnemyAudio))]
    [RequireComponent(typeof(EnemyMovement))]
    [RequireComponent(typeof(Health))]
    public class EnemyController : MonoBehaviour
    {
        public delegate void SetBurningActiveDelegate(bool State);
        public SetBurningActiveDelegate SetBurningActive; 
        
        [Header("Stats")]
        public bool Hidden;
        public bool IsBurning;

        
        [Space(12)]
        [SerializeField] Enemy EnemyData;
        

        public Health HealthComponent { private set; get; }
        public EnemyMovement MovementComponent { private set; get; }
        public EnemyAnimation AnimationComponent { private set; get; }
        public EnemyAudio AudioComponent { private set; get; }
         
         

         void Awake()
         {
            IsBurning = false;
            Hidden = EnemyData.IsGhost;

            HealthComponent = GetComponent<Health>();
            MovementComponent = GetComponent<EnemyMovement>();
            AnimationComponent = GetComponent<EnemyAnimation>();
            AudioComponent = GetComponent<EnemyAudio>();

            RegisterHandlers();
            
        }

        void OnDestroy()
        {
            UnregisterHandlers();
            
        }

        void Start()
        {
            MovementComponent.SetSpeed(EnemyData.Speed);
            HealthComponent.SetHealth(EnemyData.GetBaseHealth());
            
        }

        void Update()
        {

        }



        
#region Register & Unregister Handlers

        void RegisterHandlers()
        {
            HealthComponent.OnDie += OnDie;
            SetBurningActive += OnSetBurningActive;

        }
        
        void UnregisterHandlers()
        {
            SetBurningActive -= OnSetBurningActive;
            HealthComponent.OnDie -= OnDie;
            
        }
        
#endregion
        



        void OnDie()
        {
            MovementComponent.enabled = false;
            // Destroy(this.gameObject);
            this.Invoke(() => Destroy(this.gameObject) , 1.5f);
        }


        void OnSetBurningActive(bool state)
        {
            IsBurning = state;
            
            // TODO set bruning animation state
        }
        
    }

// }