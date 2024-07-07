using System;
using System.Linq;
using DefaultNamespace;
using MMK;
using MMK.Towers;
using UnityEngine;
using UnityEngine.UI;

namespace Towers
{
    public enum VisibilityMode
    {
        Active,
        Inactive,
        Hidden
    }
    
    public class ViewRange : MonoBehaviour
    {
        // public delegate EnemyController OnEnemyEnterRangeDelegate(EnemyController enemy);
        // public event OnEnemyEnterRangeDelegate OnEnemyEnterRange;
        //
        // public delegate EnemyController OnEnemyExitRangeDelegate(EnemyController enemy);
        // public event OnEnemyExitRangeDelegate OnEnemyExitRange;

        public delegate EnemyController GetEnemyByModeDelegate(TargetMode Mode, bool EnableBurningEnemy = true);
        public GetEnemyByModeDelegate GetEnemyByMode;
        
        public delegate EnemyController[] GetEnemiesInSpreadByModeDelegate(TargetMode Mode, float spread);
        public GetEnemiesInSpreadByModeDelegate GetEnemiesInSpreadByMode;


        public delegate void SetVisibilityDelegate(VisibilityMode Mode);
        public SetVisibilityDelegate SetVisibility;

        
        public delegate void SetViewRangeDelegate(float ViewRangeValue);
        public SetViewRangeDelegate SetViewRange;
        
        public delegate void SetHiddenDetecionDelegate(bool State);
        public SetHiddenDetecionDelegate SetHiddenDetecion;


        
        

        [Header("UI Properties")]
        [SerializeField] GameObject ViewRangeObject;
        [SerializeField] RectTransform ViewRangeRectTransform => ViewRangeObject.GetComponent<RectTransform>();
        [SerializeField] Image ViewRangeImage => ViewRangeObject.transform.GetChild(0).GetComponent<Image>();
        [SerializeField] LineRenderer LineRenderer;
        
        [Space(12)]
        [Header("Properties")]
        [SerializeField] Color ViewRangeActive;
        [SerializeField] Color ViewRangeInactive;
        // [SerializeField] Material RingMaterialExample;
        

        [Space(12)]
        [Header("Stats")]
        [SerializeField] float ViewRangeValue;
        [SerializeField] bool HasHiddenDetecion;
        
        [Space(18)]
        [Header("(Readonly)")]
        [SerializeField] EnemyController[] enemiesInRange;
        [SerializeField] EnemyController[] allEnemies;

        [Space(20)]
        [Header("Debug (ReadOnly)")]
        [SerializeField] VisibilityMode _visibilityMode;
        
        
        const float VIEW_RANGE_OFFSET = 0.8f;
        const float RADIUS_OFFSET = 0.125f;
        
        Material ringMaterial;
        int steps;
        
        
        public TowerController TowerController { private set; get; }
        
        
        
        void Awake()
        {
            TowerController = this.GetComponent<TowerController>();
            
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
            FindEnemiesInRange();
            
        }

        void FixedUpdate()
        {
            
        }



#region Register & Unregister Handlers

        void RegisterHandlers()
        {
            TowerSpawner.OnPlacingTower += OnPlacingTower;
            TowerSpawner.OnTowerPlaced += OnTowerPlaced;
            
            GetEnemyByMode += OnGetEnemyByMode;
            GetEnemiesInSpreadByMode += OnGetEnemiesInSpreadByMode;
       
            SetViewRange += OnSetViewRange;
            SetHiddenDetecion += OnSetHiddenDetecion;
            
            SetVisibility += OnSetVisibility;

        }

        void UnregisterHandlers()
        {
            SetVisibility -= OnSetVisibility;

            SetHiddenDetecion -= OnSetHiddenDetecion;
            SetViewRange -= OnSetViewRange;

            GetEnemiesInSpreadByMode -= OnGetEnemiesInSpreadByMode;
            GetEnemyByMode -= OnGetEnemyByMode;
            
            TowerSpawner.OnTowerPlaced -= OnTowerPlaced;
            TowerSpawner.OnPlacingTower -= OnPlacingTower;
            
        }
        
#endregion


        void FindEnemiesInRange()
        {
            Vector3 centerOfCircle = this.transform.position;

            allEnemies = GameObject.FindObjectsOfType<EnemyController>().
                Where(enemy => enemy.HealthComponent.GetHealth() > 0).
                ToArray();

            if (!HasHiddenDetecion)
                allEnemies = allEnemies.
                    Where(enemy => !enemy.Hidden).
                    ToArray();

            EnemyController[] _enemiesInRange = allEnemies.
                Where(enemy => Vector3.Distance(enemy.transform.position, centerOfCircle) <= ViewRangeValue ).
                ToArray();

            // // Invoke Event about Entered Enemies
            // EnemyController[] enteredEnemies = _enemiesInRange.Where(enemy => !enemiesInRange.Contains(enemy)).ToArray();
            // foreach (var enemy in enteredEnemies)
            //     OnEnemyEnterRange?.Invoke(enemy);
            //
            // // Invoke Event about Exited Enemies 
            // EnemyController[] exitedEnemies = enemiesInRange.Where(enemy => !_enemiesInRange.Contains(enemy)).ToArray();
            // foreach (var enemy in exitedEnemies)
            //     OnEnemyExitRange?.Invoke(enemy);

            enemiesInRange = _enemiesInRange;
        }


        
        
        void OnSetViewRange(float viewRangeValue)
        {
            ViewRangeValue = viewRangeValue;
            
            Debug.Log($"new View Range Value : {ViewRangeValue}");

            SetVisibility(_visibilityMode);
        }

        
        void OnSetHiddenDetecion(bool state)
        {
            HasHiddenDetecion = state;
            
            Debug.Log($"new Hidden Detection state:  {HasHiddenDetecion}");
        }



#region Get Enemy / Enemies

        EnemyController OnGetEnemyByMode(TargetMode mode, bool EnableBurningEnemy = true)
        {
            EnemyController[] enemies = new EnemyController[enemiesInRange.Length];
            enemiesInRange.CopyTo(enemies, 0);
            
            if (!EnableBurningEnemy)
                enemies = enemies.Where(enemy => !enemy.IsBurning).ToArray();
            
            Debug.Log($"enemies to calculates [count: {enemies.Length}, ]");

            switch (mode)
            {
                case TargetMode.Closest:
                    enemies = enemies.OrderByDescending( enemy => Vector3.Distance(enemy.transform.position, this.transform.position) ).ToArray();
                    break;
                case TargetMode.First:
                    enemies = enemies.OrderByDescending( enemy => enemy.MovementComponent.DistanceTravelled ).ToArray();
                    break;
                case TargetMode.Last:
                    enemies = enemies.OrderBy (enemy => enemy.MovementComponent.DistanceTravelled ).ToArray();
                    break;
                case TargetMode.Strongest:
                    enemies = enemies.OrderByDescending( enemy => enemy.HealthComponent.GetHealth() ).ToArray();
                    break;
                case TargetMode.Weakest:
                    enemies = enemies.OrderBy( enemy => enemy.HealthComponent.GetHealth() ).ToArray();
                    break;
            }
            
            if (enemies.Length <= 0)
                return null;
            
            return enemies[0];
        }


        EnemyController[] OnGetEnemiesInSpreadByMode(TargetMode mode, float spread)
        {
            EnemyController enemyInCenter = OnGetEnemyByMode(mode);

            if (enemyInCenter == null)
                return Array.Empty<EnemyController>();
         
            EnemyController[] enemiesInSpread = allEnemies.
                Where( enemy => Vector3.Distance(enemyInCenter.transform.position, enemy.transform.position) <= spread ).
                OrderBy( enemy => Vector3.Distance(enemyInCenter.transform.position, enemy.transform.position) ).
                ToArray();

            return enemiesInSpread;
        }
  
#endregion
        

        
        
        
        void OnPlacingTower(TowerController tower, bool canBePaced)
        {
            VisibilityMode mode = VisibilityMode.Hidden;
            
            if (tower == TowerController)
                mode = canBePaced ? VisibilityMode.Active : VisibilityMode.Inactive;

            OnSetVisibility(mode);

        }

        void OnTowerPlaced(TowerController tower)
        {
            OnSetVisibility(VisibilityMode.Hidden);

        }
        
        
        void OnSetVisibility(VisibilityMode mode)
        {
            switch (mode)
            {
                case VisibilityMode.Active:
                    ViewRangeObject.SetActive(true);
                    ViewRangeImage.color = ViewRangeActive;
                    OnDrawRing();
                    break;
                case VisibilityMode.Inactive:
                    ViewRangeObject.SetActive(true);
                    ViewRangeImage.color = ViewRangeInactive;
                    OnDrawRing();
                    break;
                case VisibilityMode.Hidden:
                    ViewRangeObject.SetActive(false);
                    break;
                default:
                    throw new Exception("There is no such type of VisibilityMode");
            }

            Debug.Log($"new Visibility Mode: {mode}");

            _visibilityMode = mode;
        }
        
        
        

        void OnDrawRing()
        {
            ViewRangeRectTransform.sizeDelta = new Vector2(ViewRangeValue * 2, ViewRangeValue * 2);

            float PosY = Ground.GroundPosY + 1 - VIEW_RANGE_OFFSET;
            Vector3 rectPosition = ViewRangeRectTransform.position;
            rectPosition.y = PosY;
            ViewRangeRectTransform.position = rectPosition;
            
            
            Vector3 centerOfCircle = this.transform.position;
            
            steps = Mathf.RoundToInt( 4 *  2 * 2 * Mathf.PI * ViewRangeValue);
            
            Vector3[] points = GetRingPoints(centerOfCircle, steps, ViewRangeValue - RADIUS_OFFSET, PosY);

            LineRenderer.positionCount = steps;

            for (int i = 0; i < steps; i++)
            {
                LineRenderer.SetPosition(i, points[i] );
            }
            
        }


        
        static Vector3[] GetRingPoints(Vector3 centerOfCircle, int steps, float radius, float PosY)
        {
            Vector3[] points = new Vector3[steps];
            
            for (int i = 0; i < steps; i++)
            {
                float circumferenceProgress = (float)i / (float)steps;

                float currentRadian = circumferenceProgress * 2 * Mathf.PI;

                float xScaled = Mathf.Cos(currentRadian);
                float zScaled = Mathf.Sin(currentRadian);

                float x = xScaled * radius;
                float z = zScaled * radius;

                Vector3 point = new Vector3(centerOfCircle.x + x, PosY, centerOfCircle.z + z);
                points[i] = point;
            }

            return points;
        } 
        
        
        
    }
    
    
}
