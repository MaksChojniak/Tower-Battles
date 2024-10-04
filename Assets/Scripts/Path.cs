using System;
using MMK.Towers;
using Unity.VisualScripting;
using UnityEngine;

namespace DefaultNamespace
{
    public class Path : MonoBehaviour
    {


        GameObject path;
        
        
        void Awake()
        {
            RegisterHandlers();

            path = this.gameObject;
            
        }

        void OnDestroy()
        {
            UnregisterHandlers();
            
        }

        void Start()
        {
            DeactivePath();
            
        }




#region Register & Unregister Handlers

        
        void RegisterHandlers()
        {
            TowerSpawner.OnStartPlacingTower += ActivePath;
            
            TowerSpawner.OnTowerPlaced += DeactivePath;

        }

        void UnregisterHandlers()
        {
            TowerSpawner.OnTowerPlaced -= DeactivePath;
            
            TowerSpawner.OnStartPlacingTower -= ActivePath;
            
        }

        
#endregion

        

        void ActivePath(TowerController tower = null) => SetPathVisibility(true);
        void DeactivePath(TowerController tower = null) => SetPathVisibility(false);
        

        void SetPathVisibility(bool active)
        {
            path.SetActive(active);
        }
        
        
        
    }
    
    
    
    
    
    
}
