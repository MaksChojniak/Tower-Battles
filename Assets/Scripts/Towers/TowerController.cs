using System;
using System.Collections;
using System.Threading.Tasks;
using System.Xml.Schema;
using DefaultNamespace;
using Mirror;
using MMK.ScriptableObjects;
using MMK.Towers;
using TMPro;
using Towers;
using UnityEngine;

namespace MMK.Towers
{
    
//     public abstract class TowerController : MonoBehaviour
//     {
//         public static event Action<object, TypeOfBuildng, bool, TowerController> OnShowTowerInformation;
//         public static Action<GameObject, bool> ShowTowerSpawnRange;
//         public static event Action OnDestroyTower;
//
//         public Action DestroyTower;
//         public Action<bool> ShowTowerInformation;
//         public Action PlaceTower;
//         public Action<bool> ShowTowerViewRange;
//         public Action<TargetMode> UpdateTargetMode;
//
//         [Range(0,4)]
//         public int UpgradeLevel;
//         public bool IsPlaced;
//         public TargetMode targetMode;
//
//         [SerializeField] protected GameObject CurrentTowerObject;
//         public TowerViewRange ViewRange;
//         public TowerSpawnRange SpawnRange;
//         [SerializeField] GameObject SelectedRingImage;
//
//
//         public virtual void Awake()
//         {
//             ShowTowerInformation += ShowTowerInfo;
//             ShowTowerSpawnRange += SetActiveSpawnRange;
//             ShowTowerViewRange += SetActiveViewRange;
//             PlaceTower += OnPlaceTower;
//             DestroyTower += Destroy;
//             UpdateTargetMode += OnUpdateTargetMode;
//
//             GameTowerInformations.OnUpgradeTower += OnUpgradeTower;
//
//             UpgradeLevel = 0;
//         }
//         
//         public virtual void OnDestroy()
//         {
//             ShowTowerInformation -= ShowTowerInfo;
//             ShowTowerSpawnRange -= SetActiveSpawnRange;
//             ShowTowerViewRange -= SetActiveViewRange;
//             PlaceTower -= OnPlaceTower;
//             DestroyTower -= Destroy;
//             UpdateTargetMode -= OnUpdateTargetMode;
//
//
//             GameTowerInformations.OnUpgradeTower -= OnUpgradeTower;
//         }
//         
//         public virtual void Start()
//         {
//             UpdateTower();
//         }
//
//         public virtual void Update()
//         {
//             
//         }
//
//         public virtual void FixedUpdate()
//         {
//             
//         }
//
//         protected virtual void Destroy()
//         {
//             OnDestroyTower?.Invoke();
//         }
//
//         protected virtual void OnUpgradeTower(TowerController towerController)
//         {
//             if(towerController != this || UpgradeLevel >= 4)
//                 return;
//             
//             UpgradeLevel += 1;
//             
//             UpdateTower();
//             ShowTowerInformation(true);
//         }
//
//         protected virtual void UpdateTower()
//         {
//             CurrentTowerObject = this.transform.GetChild(UpgradeLevel).gameObject;
//
//             for (int i = 0; i < 5; i++)
//             {
//                 this.transform.GetChild(i).gameObject.SetActive(false);
//             }
//
//             CurrentTowerObject.SetActive(true);
//         }
//         
//
//         public bool ViewRangeIsActive => ViewRange.IsActive();
//
//         void ShowTowerInfo(bool state)
//         {
//             (object, TypeOfBuildng) data = GetTowerData();
//             OnShowTowerInformation?.Invoke(data.Item1, data.Item2, state, this);
//
//             SelectedRingImage.SetActive(state);
//         }
//
//
//         protected virtual (object, TypeOfBuildng) GetTowerData()
//         {
//             return (null, TypeOfBuildng.Soldier);
//         }
//         
//
//         void OnPlaceTower()
//         {
//             this.gameObject.layer = LayerMask.NameToLayer("Tower");
//             IsPlaced = true;
//             SpawnRange.Place();
//
//             for (int i = 0; i < this.gameObject.transform.childCount; i++)
//             {
//                 if(this.gameObject.transform.GetChild(i).TryGetComponent(typeof(TowerHitbox), out var hitbox))
//                     hitbox.gameObject.layer = LayerMask.NameToLayer("Hitbox");
//             }
//         }
//
//         protected void UpdateViewRange(float range)
//         {
//             ViewRange.ViewRange = range;
//         }
//
//         void SetActiveSpawnRange(GameObject currentTower, bool state)
//         {
//             SpawnRange.SetActive(state);
//
//             if (!state)
//                 return;
//
//             SpawnRange.SetState(this.gameObject == currentTower);
//             ViewRange.SetState(this.gameObject == currentTower);
//         }
//
//         void SetActiveViewRange(bool state)
//         {
//             ViewRange.SetState(state);
//             ViewRange.SetActive(state);
//         }
//
//
//         protected virtual void OnUpdateTargetMode(TargetMode mode)
//         {
//             targetMode = mode;
//         }
//
//
//     }
//
//
//
// }


    [RequireComponent(typeof(InputHandler))]
    [RequireComponent(typeof(SpawnRange))]
    [RequireComponent(typeof(SelectedRing))]
    [RequireComponent(typeof(TowerLevel))]
    // [RequireComponent(typeof(ViewRange))]
    public abstract class TowerController : MonoBehaviour
    {
        public delegate int GetLevelDelegate();
        public GetLevelDelegate GetLevel;
        
        public delegate bool UpgradeLevelDelegate();
        public UpgradeLevelDelegate UpgradeLevel;
        
        public delegate void OnLevelUpDelegate();
        public event OnLevelUpDelegate OnLevelUp;


        public delegate void RemoveTowerDelegate();
        public RemoveTowerDelegate RemoveTower;
        
        public delegate void OnRemoveTowerDelegate();
        public OnRemoveTowerDelegate OnRemoveTower;


        public delegate TowerInformations GetTowerInformationsDelegate();
        public GetTowerInformationsDelegate GetTowerInformations;
            
        

        [Range(0, 4)]
        [SerializeField] protected int Level;
        public bool IsPlaced;

        
        public InputHandler InputHandlerCmponent { private set; get; }
        public SpawnRange SpawnRangeComponent { private set; get; }
        public SelectedRing SelectedRingComponent { private set; get; }
        public TowerLevel LevelComponent { private set; get; }
        // public ViewRange ViewRangeComponent { private set; get; }



        protected virtual void Awake()
        {
            InputHandlerCmponent = this.GetComponent<InputHandler>();
            SpawnRangeComponent = this.GetComponent<SpawnRange>();
            SelectedRingComponent = this.GetComponent<SelectedRing>();
            LevelComponent = this.GetComponent<TowerLevel>();
            // ViewRangeComponent = this.GetComponent<ViewRange>();
            
            RegisterHandlers();
        }

        protected virtual void OnDestroy()
        {
            UnregisterHndlers();
            
        }

        protected virtual void Start()
        {
            LevelComponent.SetActive(false);
            UploadNewData();

        }

        protected virtual void Update() {}

        protected virtual void FixedUpdate() {}


        
#region Register & Unregister Handlers

        protected virtual void RegisterHandlers()
        {
            GetLevel += OnGetLevel;
            UpgradeLevel += OnUpgradeLevel;
            
            RemoveTower += RemoveTowerProcess;
            TowerSpawner.OnTowerPlaced += OnTowerPlaced;

            GetTowerInformations += OnGetTowerInformations;

        }

        protected virtual void UnregisterHndlers()
        {
            GetTowerInformations -= OnGetTowerInformations;
            
            TowerSpawner.OnTowerPlaced -= OnTowerPlaced;
            RemoveTower -= RemoveTowerProcess;
            
            UpgradeLevel -= OnUpgradeLevel;
            GetLevel -= OnGetLevel;

        }

#endregion



        int OnGetLevel() => Level;
        

        [ContextMenu(nameof(OnUpgradeLevel))]
        protected virtual bool OnUpgradeLevel()
        {
            Level += 1;

            OnLevelUpgraded();

            return true;
        }


        
        void OnLevelUpgraded()
        {
            UpdateTowerModel();
            UploadNewData();

            OnLevelUp?.Invoke();
        }


        protected virtual void UploadNewData()
        {
            
            
        }




        void UpdateTowerModel()
        {
            if(Level > 0)
                this.transform.GetChild(Level-1).gameObject.SetActive(false);
            
            this.transform.GetChild(Level).gameObject.SetActive(true);
        }



        protected virtual TowerInformations OnGetTowerInformations()
        {
            return new TowerInformations(){ Data = null, Controller = this };
        }
        
        


        protected virtual void RemoveTowerProcess()
        {
            // Destroy Tower
            Destroy(this.gameObject);

            OnRemoveTower?.Invoke();
        }


        void OnTowerPlaced(TowerController tower)
        {
            if (tower != this)
                return;
            
            IsPlaced = true;
            
            UploadNewData();
            LevelComponent.SetActive(true);
        }
        
        
    }
    




}
