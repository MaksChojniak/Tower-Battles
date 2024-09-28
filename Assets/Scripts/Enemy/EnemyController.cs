using System;
using MMK.Enemy;
using MMK.Extensions;
using UnityEngine;
using PathCreation;

// namespace MMK.Enemy
// {

    [RequireComponent(typeof(EnemyAnimation))]
    [RequireComponent(typeof(EnemyAudio))]
    [RequireComponent(typeof(EnemyMovement))]
    [RequireComponent(typeof(Health))]
    [RequireComponent(typeof(EnemyInputHandler))]
    public class EnemyController : MonoBehaviour
    {
        public delegate void SetBurningActiveDelegate(bool State, int Level);
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
        public EnemyInputHandler InputHandlerComponent { private set; get; }
         
         

         void Awake()
         {
            IsBurning = false;
            Hidden = EnemyData.IsGhost;

            HealthComponent = GetComponent<Health>();
            MovementComponent = GetComponent<EnemyMovement>();
            AnimationComponent = GetComponent<EnemyAnimation>();
            AudioComponent = GetComponent<EnemyAudio>();
            InputHandlerComponent = GetComponent<EnemyInputHandler>();

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
            
            
            if (EnemyData.CanSpawnAfterDead)
            {
                foreach (var enemyToSpawn in EnemyData.EnemiesToSpawn)
                {
                    for (int i = 0; i < enemyToSpawn.Count; i++)
                    {
                        EnemyController enemyController = Instantiate(enemyToSpawn.Enemy.EnemyPrefab, this.transform.position, this.transform.rotation, this.transform.parent).GetComponent<EnemyController>();
                        enemyController.MovementComponent.DistanceTravelled = MovementComponent.DistanceTravelled;
                    }
                }

            }
            
            
            this.Invoke( () => Destroy(this.gameObject) , 1.5f);
        }


        


        void OnSetBurningActive(bool state, int level)
        {
            IsBurning = state;

            MovementComponent.SetSpeedMultiplier(IsBurning);
            
            AnimationComponent.SetBurningAnimation(state, level);
        }
        
    }

// }