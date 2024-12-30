using System;
using System.Collections.Generic;
using DefaultNamespace;
using MMK;
using MMK.ScriptableObjects;
using MMK.Towers;
using UnityEngine;
using UnityEngine.EventSystems;

namespace Towers
{
    public class InputHandler : MonoBehaviour
    {
        
        // public delegate void OnClickDelegate();
        // public static event OnClickDelegate OnClick;
        
        public delegate void OnClickedDelegate();
        public event OnClickedDelegate OnClicked;


        
        [SerializeField] GameObject HitboxObject;
        
        
        
        const int maxDistance = 1000;
        
        
        
        
        
        public TowerController TowerController { private set; get; }
        
        
        void Awake()
        {
            TowerController = this.GetComponent<TowerController>();

            GameSceneInputHandler.OnInputClicked += CheckClickedObject;
        }

        void OnDestroy()
        {
            GameSceneInputHandler.OnInputClicked -= CheckClickedObject;
        }

        void Start()
        {
            
        }

        void Update()
        {
            HitboxObject.layer = TowerController.IsPlaced ? GameSceneInputHandler. HitboxLayer : GameSceneInputHandler.IgnoreLayer;

        }

        void FixedUpdate()
        {
            
        }




        void CheckClickedObject(TouchData data)
        {
            if (data.HittedObjectUI)
                return;

            bool thisTowerIsClicked = false;

            if (data.IsObjectHitted(out var hit))
                thisTowerIsClicked = hit.transform.gameObject == HitboxObject;

            GameTowerInformations.SetActiveInformationsPanel?.Invoke(thisTowerIsClicked, TowerController.GetTowerInformations?.Invoke());

            TowerController.SelectedRingComponent.SetActiveRing(thisTowerIsClicked);


            VisibilityMode visibilityMode = thisTowerIsClicked ? VisibilityMode.Active : VisibilityMode.Hidden;

            if (TowerController.TryGetController<SoldierController>(out var soldierController))
                soldierController.ViewRangeComponent.SetVisibility(visibilityMode);
            // if (TowerController.TryGetController<BoosterController>(out var boosterController))
            //     boosterController.ViewRangeComponent.SetVisibility(visibilityMode);
            // else if (TowerController.TryGetController<SpawnerController>(out var spawnerController))
            //     spawnerController.ViewRangeComponent.SetVisibility(visibilityMode);


            if (thisTowerIsClicked)
                OnClicked?.Invoke();

            //Ray ray = new Ray();
            //RaycastHit hit;
            //bool thisTowerIsClicked = false;

            //if (Physics.Raycast(ray, out hit, maxDistance)) //, HitboxLayer))
            //    thisTowerIsClicked = hit.transform.gameObject == HitboxObject;

            
            //GameTowerInformations.SetActiveInformationsPanel?.Invoke( thisTowerIsClicked, TowerController.GetTowerInformations?.Invoke() );
            
            //TowerController.SelectedRingComponent.SetActiveRing(thisTowerIsClicked);

            
            //VisibilityMode visibilityMode = thisTowerIsClicked ? VisibilityMode.Active : VisibilityMode.Hidden;

            //if (TowerController.TryGetController<SoldierController>(out var soldierController))
            //    soldierController.ViewRangeComponent.SetVisibility(visibilityMode);
            //// if (TowerController.TryGetController<BoosterController>(out var boosterController))
            ////     boosterController.ViewRangeComponent.SetVisibility(visibilityMode);
            //// else if (TowerController.TryGetController<SpawnerController>(out var spawnerController))
            ////     spawnerController.ViewRangeComponent.SetVisibility(visibilityMode);


            //if (thisTowerIsClicked)
            //    OnClicked?.Invoke();

        }

        
        
    }
    
    
}



