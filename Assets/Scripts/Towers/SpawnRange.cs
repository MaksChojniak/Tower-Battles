using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.CompilerServices;
using DefaultNamespace;
using MMK.Towers;
using MMK;
using Unity.VisualScripting;
using UnityEditor;
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


            // if (!collidedObjects.Any(_collider => _collider.TryGetComponent<Ground>(out var _ground)))
            //     return false;
            
            
            collidedObjects = collidedObjects.
                Where(_collider => !_collider.TryGetComponent<Path>(out var _path) || 
                                   !_collider.TryGetComponent<Ground>(out var _ground) ).
                ToArray();

            
            Debug.Log($"Spawn Range Colliders [count: {collidedObjects.Length}, ]");

            
            if (collidedObjects.Length > 1)
                return false;


            return true;
        }




        GameObject[] GetCollidedObjects(Transform root)
        {
            Collider[] colliders = new Collider[GlobalSettingsManager.GetGlobalSettings().MaxTowersCount];

            Vector3 position = root.position + new Vector3(0, root.localScale.y / 2, 0);
            int collidersCount = Physics.OverlapBoxNonAlloc(position, root.localScale / 2, colliders, Quaternion.identity);

            
            colliders = colliders.ToList().GetRange(0, collidersCount).ToArray();

            
            return colliders.
                Select(_collider => _collider.gameObject).
                ToArray();

        }



        void OnDrawGizmos()
        {
            Vector3 localScale = SpawnRangeObject.transform.localScale;

            Vector3 SpawnRangePosition = SpawnRangeObject.transform.position;
           

            Vector3 pointA = SpawnRangePosition + new Vector3(-0.5f * localScale.x, 0, -0.5f * localScale.z);
            Vector3 pointB = SpawnRangePosition + new Vector3(0.5f * localScale.x, 0, -0.5f * localScale.z);
            Vector3 pointC = SpawnRangePosition + new Vector3(0.5f * localScale.x, 0, 0.5f * localScale.z);
            Vector3 pointD = SpawnRangePosition + new Vector3(-0.5f * localScale.x, 0, 0.5f * localScale.z);

            Vector3[] points = { pointA, pointB, pointC, pointD };

            for(int i = 0; i < points.Length; i++)
            {
                Gizmos.DrawCube(points[i] - new Vector3(0, localScale.y, 0), new Vector3(0.1f, localScale.y * 2, 0.1f));
            }
            
        }
        
        
        
        
        // static bool IsGrounded(Transform root)
        // {
        //     Vector3 localScale = root.localScale;
        //
        //     Vector3 SpawnRangePosition = root.position;
        //    
        //
        //     Vector3 pointA = SpawnRangePosition + new Vector3(-0.5f * localScale.x, 0, -0.5f * localScale.z);
        //     Vector3 pointB = SpawnRangePosition + new Vector3(0.5f * localScale.x, 0, -0.5f * localScale.z);
        //     Vector3 pointC = SpawnRangePosition + new Vector3(0.5f * localScale.x, 0, 0.5f * localScale.z);
        //     Vector3 pointD = SpawnRangePosition + new Vector3(-0.5f * localScale.x, 0, 0.5f * localScale.z);
        //
        //     Vector3[] points = { pointA, pointB, pointC, pointD };
        //
        //     for(int i = 0; i < points.Length; i++)
        //     {
        //         RaycastHit hit;
        //         
        //         Ray ray = new Ray(points[i], Vector3.down);
        //         
        //         if (!Physics.Raycast(ray, out hit, 0.25f) )
        //             return false;
        //         
        //     }
        //
        //     return true;
        // }
        
        
        static bool IsGrounded(Transform root)
        {
            Vector3 localScale = root.localScale;

            Vector3 SpawnRangePosition = root.position;
           

            Vector3 pointA = SpawnRangePosition + new Vector3(-0.5f * localScale.x, 0, -0.5f * localScale.z);
            Vector3 pointB = SpawnRangePosition + new Vector3(0.5f * localScale.x, 0, -0.5f * localScale.z);
            Vector3 pointC = SpawnRangePosition + new Vector3(0.5f * localScale.x, 0, 0.5f * localScale.z);
            Vector3 pointD = SpawnRangePosition + new Vector3(-0.5f * localScale.x, 0, 0.5f * localScale.z);

            Vector3[] points = { pointA, pointB, pointC, pointD };

            GameObject ground = null;
            
            for(int i = 0; i < points.Length; i++)
            {
                Collider[] colliders = new Collider[GlobalSettingsManager.GetGlobalSettings().MaxTowersCount];

                Vector3 pos = points[i] - new Vector3(0, localScale.y * 2, 0);
                Vector3 size = new Vector3(0.1f, localScale.y * 2f, 0.1f);
                int collidersCount = Physics.OverlapBoxNonAlloc(pos, size, colliders, Quaternion.identity);
                
                colliders = colliders.ToList().GetRange(0, collidersCount).ToArray();

                // if ( !colliders.Any(_collider => _collider.TryGetComponent<Ground>( out var _ground) ) )
                //     return false;
                
                Collider groundCollider = colliders.FirstOrDefault(_collider => _collider.TryGetComponent<Ground>(out var _ground));
                if (groundCollider == null)
                    return false;

                if (ground == null)
                    ground = groundCollider.gameObject;
                else if (groundCollider.gameObject != ground)
                    return false;
                
            }

            return true;
        }
        
        
        
    }
}
