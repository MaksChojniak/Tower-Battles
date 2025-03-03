﻿

using System;
using UnityEngine;

namespace MMK.Towers
{

    public class SelectedRing : MonoBehaviour
    {

        public delegate void SetActiveRingDelegate(bool state);
        public SetActiveRingDelegate SetActiveRing;
        

        public GameObject RingObject;
        
        
        public TowerController TowerController { private set; get; }



        void Awake()
        {
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
            SetActiveRing += OnSetActiveRing;
            TowerSpawner.OnStartPlacingTower += OnStartPlacingTower;

        }

        void UnregisterHandlers()
        {
            TowerSpawner.OnStartPlacingTower -= OnStartPlacingTower;
            SetActiveRing -= OnSetActiveRing;
            
        }
        
#endregion



        void OnStartPlacingTower(TowerController Tower)
        {
            SetActiveRing(false);
        }
        
        
        void OnSetActiveRing(bool state)
        {
            RingObject.SetActive(state);
            
        }
        
        
        
    }
    
    

    
}


