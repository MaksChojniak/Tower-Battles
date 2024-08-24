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
        
        
        static int HitboxLayer => LayerMask.NameToLayer("Hitbox");
        static int IgnoreLayer => LayerMask.NameToLayer("Ignore Raycast");
        static int UILayer => LayerMask.NameToLayer("UI");
        
        
        public TowerController TowerController { private set; get; }
        
        
        void Awake()
        {
            TowerController = this.GetComponent<TowerController>();
            
        }

        void OnDestroy()
        {
            
        }

        void Start()
        {
            
        }

        void Update()
        {
            HitboxObject.layer = TowerController.IsPlaced ? HitboxLayer : IgnoreLayer;
            
            ClickListener();

        }

        void FixedUpdate()
        {
            
        }


        
        
        

        void ClickListener()
        {
            if (Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Began)
            {
                CheckClickedObject();

            }
            
            
        }


        void CheckClickedObject()
        {
            Vector3 screenPosition = Input.GetTouch(0).position;

            GameObject UIComponent = InputHandlerExtension.UIRaycast(InputHandlerExtension.ScreenPosToPointerData(screenPosition));
            if (UIComponent != null && UIComponent.layer == UILayer)
                return;

            Ray ray = Camera.main.ScreenPointToRay(screenPosition);
            RaycastHit hit;

            bool thisTowerIsClicked = false;

            if (Physics.Raycast(ray, out hit, maxDistance)) //, HitboxLayer))
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

        }

        
        
    }
    
    
}


public static class InputHandlerExtension
{

    public static GameObject UIRaycast (PointerEventData pointerData)
    {
        var results = new List<RaycastResult>();
        EventSystem.current.RaycastAll(pointerData, results);
 
        return results.Count < 1 ? null : results[0].gameObject;
    }
    
    public static PointerEventData ScreenPosToPointerData (Vector2 screenPos) => new(EventSystem.current){position = screenPos};
    
}
