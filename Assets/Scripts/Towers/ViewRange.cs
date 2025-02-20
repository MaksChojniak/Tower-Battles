using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.CompilerServices;
using DefaultNamespace;
using MMK;
using MMK.Towers;
using Org.BouncyCastle.Bcpg;
using UnityEngine;
using UnityEngine.UI;
using static UnityEngine.EventSystems.EventTrigger;

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
        
        public delegate void GetEnemiesInSpreadByModeDelegate(TargetMode Mode, float spread, out int count, out EnemyController[] enemies);
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
        //[SerializeField] EnemyController[] enemiesInRange;
        const int maxEnemiesCount = 100;
        EnemyController[] allEnemies = new EnemyController[maxEnemiesCount];
        int lastAllEnemiesIndex = -1;

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
            lastAllEnemiesIndex = 0;


            foreach(var objectWitTag in GameObject.FindGameObjectsWithTag("Enemy"))
            {
                if (lastAllEnemiesIndex >= maxEnemiesCount)
                    break;

                if (objectWitTag.layer !=GameSceneInputHandler.RagdollLayer && objectWitTag.TryGetComponent<EnemyController>(out var enemy) && enemy.HealthComponent.GetHealth() > 0 && ((!HasHiddenDetecion && !enemy.Hidden) || (HasHiddenDetecion)))
                {
                    allEnemies[lastAllEnemiesIndex] = enemy;
                    lastAllEnemiesIndex++;
                }
            }
            //var objectsWitTag = GameObject.FindGameObjectsWithTag("Enemy");
            //for(int i = 0; i < objectsWitTag.Length && lastAllEnemiesIndex < maxEnemiesCount; i++)
            //{
            //    if (objectsWitTag[i].TryGetComponent<EnemyController>(out var enemy) && enemy.HealthComponent.GetHealth() > 0 && ((!HasHiddenDetecion && !enemy.Hidden) || (HasHiddenDetecion)))
            //    {
            //        allEnemies[lastAllEnemiesIndex] = enemy;
            //        lastAllEnemiesIndex++;
            //    }
            //}

            ////Vector3 centerOfCircle = this.transform.position;

            //// allEnemies = GameObject.FindObjectsOfType<EnemyController>().
            //allEnemies = GameObject.FindGameObjectsWithTag("Enemy").
            //    Where(enemyObject => enemyObject.TryGetComponent<EnemyController>(out var enemy) && enemy.HealthComponent.GetHealth() > 0 && ((!HasHiddenDetecion && !enemy.Hidden) || (HasHiddenDetecion)) ).
            //    Select(enemyObject => enemyObject.GetComponent<EnemyController>() ).
            //    //Where(enemy => enemy.HealthComponent.GetHealth() > 0).
            //    ToArray();

            ////if (!HasHiddenDetecion)
            ////    allEnemies = allEnemies.
            ////        Where(enemy => !enemy.Hidden).
            ////        ToArray();

            ////enemiesInRange = allEnemies.
            ////    Where(enemy => Vector3.Distance(enemy.transform.position, centerOfCircle) <= ViewRangeValue ).
            ////    ToArray();
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
            //List<EnemyController> enemies = new  List<EnemyController> ();
            //for(int i = 0; i < allEnemies.Count; i++)
            //{
            //    if( ((!EnableBurningEnemy && !allEnemies[i].IsBurning) || EnableBurningEnemy) && Vector3.Distance(allEnemies[i].transform.position, this.transform.position) <= ViewRangeValue)
            //        enemies.Add (allEnemies[i]);
            //}

            //EnemyController[] enemies = allEnemies.Where(enemy => ((!EnableBurningEnemy && !enemy.IsBurning) || EnableBurningEnemy) && Vector3.Distance(enemy.transform.position, this.transform.position) <= ViewRangeValue).ToArray();
            //EnemyController[] enemies = new EnemyController[enemiesInRange.Length];
            //enemiesInRange.CopyTo(enemies, 0);
            
            //if (!EnableBurningEnemy)
            //    enemies = enemies.Where(enemy => !enemy.IsBurning).ToArray();
            
            //Debug.Log($"enemies to calculates [count: {enemies.Count}, ]");

            Array.Sort(allEnemies, (enemy1, enemy2) => ((!EnableBurningEnemy && !enemy1.IsBurning) || EnableBurningEnemy).CompareTo(((!EnableBurningEnemy && !enemy1.IsBurning) || EnableBurningEnemy)) );
            lastAllEnemiesIndex = 0;
            for (int i = 0; i < allEnemies.Length; i++)
            {
                if (allEnemies[i] != null && ((!EnableBurningEnemy && !allEnemies[i].IsBurning) || EnableBurningEnemy))
                    lastAllEnemiesIndex++;
                else
                    break;
            }

            switch (mode)
            {
                case TargetMode.Closest:
                    //enemies = enemies.OrderByDescending( enemy => Vector3.Distance(enemy.transform.position, this.transform.position) ).ToArray();
                    Array.Sort(allEnemies, 0, lastAllEnemiesIndex, Comparer<EnemyController>.Create((enemy1, enemy2) => Vector3.Distance(enemy1.transform.position, this.transform.position).CompareTo(Vector3.Distance(enemy2.transform.position, this.transform.position))));
                    break;
                case TargetMode.First:
                    //enemies = enemies.OrderByDescending( enemy => enemy.MovementComponent.DistanceTravelled ).ToArray();
                    Array.Sort(allEnemies, 0, lastAllEnemiesIndex, Comparer<EnemyController>.Create((enemy1, enemy2) => enemy2.MovementComponent.DistanceTravelled.CompareTo(enemy1.MovementComponent.DistanceTravelled)));
                    break;
                case TargetMode.Last:
                    //enemies = enemies.OrderBy (enemy => enemy.MovementComponent.DistanceTravelled ).ToArray();
                    Array.Sort(allEnemies, 0, lastAllEnemiesIndex, Comparer<EnemyController>.Create((enemy1, enemy2) => enemy1.MovementComponent.DistanceTravelled.CompareTo(enemy2.MovementComponent.DistanceTravelled)));
                    break;
                case TargetMode.Strongest:
                    //enemies = enemies.OrderByDescending( enemy => enemy.HealthComponent.GetHealth() ).ToArray();
                    Array.Sort(allEnemies, 0, lastAllEnemiesIndex, Comparer<EnemyController>.Create((enemy1, enemy2) => enemy2.HealthComponent.GetHealth().CompareTo(enemy1.HealthComponent.GetHealth())));
                    break;
                case TargetMode.Weakest:
                    //enemies = enemies.OrderBy( enemy => enemy.HealthComponent.GetHealth() ).ToArray();
                    Array.Sort(allEnemies, 0, lastAllEnemiesIndex, Comparer<EnemyController>.Create((enemy1, enemy2) => enemy1.HealthComponent.GetHealth().CompareTo(enemy2.HealthComponent.GetHealth())));
                    break;
            }

            //if (enemies.Count <= 0)
            //    return null;

            //return enemies[0];
            for (int i = 0; i < lastAllEnemiesIndex; i++)
            {
                if (allEnemies[i] != null && allEnemies[i].HealthComponent.GetHealth() > 0 && Vector3.Distance(allEnemies[i].transform.position, this.transform.position) <= ViewRangeValue)
                    return allEnemies[i];
            }

            return null;
        }


        void OnGetEnemiesInSpreadByMode(TargetMode mode, float spread, out int count, out EnemyController[] enemies)
        {
            count = -1;
            enemies = null;

            EnemyController enemyInCenter = OnGetEnemyByMode(mode);

            if (enemyInCenter == null)
                return;
                //return (null, -1);

            //EnemyController[] enemiesInSpread = allEnemies.
            //    Where( enemy => Vector3.Distance(enemyInCenter.transform.position, enemy.transform.position) <= spread ).
            //    OrderBy( enemy => Vector3.Distance(enemyInCenter.transform.position, enemy.transform.position) ).
            //    ToArray();
            //List<EnemyController> enemiesInSpread = new List<EnemyController>();
            //for(int i = 0; i < allEnemies.Count; i++)
            //{
            //    if(Vector3.Distance(enemyInCenter.transform.position, allEnemies[i].transform.position) <= spread)
            //        enemiesInSpread.Add(allEnemies[i]);
            //}
            //enemiesInSpread.Sort((enemy1, enemy2) => Vector3.Distance(enemy2.transform.position, enemyInCenter.transform.position).CompareTo(Vector3.Distance(enemy1.transform.position, enemyInCenter.transform.position)));

            Array.Sort(allEnemies, 0, lastAllEnemiesIndex, Comparer<EnemyController>.Create((enemy1, enemy2) => Vector3.Distance(enemy1.transform.position, enemyInCenter.transform.position).CompareTo(Vector3.Distance(enemy2.transform.position, enemyInCenter.transform.position))));
            lastAllEnemiesIndex = 0;
            for (int i = 0; i < allEnemies.Length; i++)
            {
                //if (allEnemies[i] != null && Vector3.Distance(enemyInCenter.transform.position, allEnemies[i].transform.position) <= spread)
                if (allEnemies[i] != null && allEnemies[i].HealthComponent.GetHealth() > 0 && Vector3.Distance(enemyInCenter.transform.position, allEnemies[i].transform.position) <= spread)
                {
                    allEnemies[lastAllEnemiesIndex] = allEnemies[i];
                    lastAllEnemiesIndex++;
                }
            }

            //return (allEnemies, lastAllEnemiesIndex);
            count = lastAllEnemiesIndex;
            enemies = allEnemies;
            return;
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
