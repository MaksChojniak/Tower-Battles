using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.CompilerServices;
using MMK.Towers;
using MMK;
using UnityEngine;

namespace Towers
{
    
    public class SpawnRange : MonoBehaviour
    {
        [Header("Properties UI")]
        [SerializeField] GameObject SpawnRangeObject;
        [SerializeField] MeshRenderer SpawnRangeRenderer => SpawnRangeObject.GetComponent<MeshRenderer>();

        [Header("Properties")]
        [SerializeField] Material RedMaterial;
        [SerializeField] Material GreenMaterial;
        
        
        // [Header("Stats")]


        static int SpawnRangeLayerMask => LayerMask.NameToLayer("SpawnRange");

        
        public TowerController TowerController { private set; get; }



        void Awake()
        {
            TowerController = this.GetComponent<TowerController>();

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
            TowerSpawner.OnPlacingTower += OnPlacingTower;
            TowerSpawner.OnTowerPlaced += OnTowerPlaced;
            
        }

        void UnregisterHndlers()
        {
            TowerSpawner.OnTowerPlaced -= OnTowerPlaced;
            TowerSpawner.OnPlacingTower -= OnPlacingTower;
            
        }
        
#endregion


        void OnPlacingTower(TowerController tower, bool canBePlaced)
        {
            TowerController currentTower = this.GetComponent<TowerController>();

            SpawnRangeObject.SetActive(true);

            if (tower != currentTower)
                SpawnRangeRenderer.material = RedMaterial;
            else
                SpawnRangeRenderer.material = canBePlaced ? GreenMaterial : RedMaterial;
            
        }

        void OnTowerPlaced(TowerController tower)
        {
            TowerController currentTower = this.GetComponent<TowerController>();

            if (currentTower == tower)
                SpawnRangeObject.layer = SpawnRangeLayerMask;
            
            SpawnRangeObject.SetActive(false);
        }
        
        


        public bool CanBePlaced()
        {
            // Spanw Range is not grounded
            if (!IsGrounded(SpawnRangeObject.transform))
                return false;


            GameObject[] collidedObjects = GetCollidedObjects(SpawnRangeObject.transform);
            
            Debug.Log($"Spawn Range Colliders [count: {collidedObjects.Length}, ]");

            // Check if collided object is other Spawn Range
            foreach (var collidedObject in collidedObjects)
            {
                if (collidedObject.layer == SpawnRangeLayerMask)
                {
                    Debug.Log($"Spawn Range collided with other Spawn Range [owner: {this.gameObject.name}]");
                    return false;
                }
                
            }
            
            return true;
        }



        GameObject[] GetCollidedObjects(Transform root)
        {
            Collider[] colliders = new Collider[GameSettings.MAX_TOWERS_COUNT];
            
            int collidersCount = Physics.OverlapBoxNonAlloc(root.position, root.lossyScale / 2, colliders, Quaternion.identity);

            return colliders.
                Where(_collider => _collider != null && _collider.gameObject != null).
                Select(_collider => _collider.gameObject).
                ToArray();
        }
        
        
        
        
        
        
        
        
        static bool IsGrounded(Transform root)
        {
            Vector3 SpawnRangePosition = root.position;

            Vector3 localScale = root.localScale;

            Vector3 pointA = SpawnRangePosition + new Vector3(-0.5f * localScale.x, 0, -0.5f * localScale.z);
            Vector3 pointB = SpawnRangePosition + new Vector3(0.5f * localScale.x, 0, -0.5f * localScale.z);
            Vector3 pointC = SpawnRangePosition + new Vector3(0.5f * localScale.x, 0, 0.5f * localScale.z);
            Vector3 pointD = SpawnRangePosition + new Vector3(-0.5f * localScale.x, 0, 0.5f * localScale.z);

            Vector3[] points = { pointA, pointB, pointC, pointD };

            for(int i = 0; i < points.Length; i++)
            {
                RaycastHit hit;
                
                Ray ray = new Ray(points[i], Vector3.down);
                
                if (!Physics.Raycast(ray, out hit, 0.5f))
                    return false;
                
            }

            return true;
        }
        
        
    }
}
