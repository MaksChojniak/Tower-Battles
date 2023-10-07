using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

namespace DefaultNamespace
{
    public class TowerHitbox : MonoBehaviour
    {

        TowerController controller;

        void Start()
        {
            controller = transform.parent.GetComponent<TowerController>();
        }

        void Update()
        {

            OnClick();
        }


        void OnClick()
        {
            if(controller == null) return;
            
            if (Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Began)
            {
                Vector3 pos = Input.GetTouch(0).position;

                GameObject UICOmponent = UIRaycast(ScreenPosToPointerData(pos));
                if (UICOmponent != null && UICOmponent.layer == LayerMask.NameToLayer("UI"))
                    return;

                Ray ray = Camera.main.ScreenPointToRay(pos);
                RaycastHit hit;
            
                if (Physics.Raycast(ray, out hit, 1000))
                {
                    bool state = hit.transform.gameObject.layer == LayerMask.NameToLayer("Tower") && hit.transform.gameObject == this.gameObject;
                    controller.ShowTowerViewRange(state);
                    controller.ShowTowerInformation(state);
                    
                }
            }
        }
        
        
        
        static GameObject UIRaycast (PointerEventData pointerData)
        {
            var results = new List<RaycastResult>();
            EventSystem.current.RaycastAll(pointerData, results);
 
            return results.Count < 1 ? null : results[0].gameObject;
        }
    
        static PointerEventData ScreenPosToPointerData (Vector2 screenPos)
            => new(EventSystem.current){position = screenPos};
    }
}
