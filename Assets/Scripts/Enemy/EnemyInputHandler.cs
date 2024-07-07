

using System;
using System.Linq;
using UnityEngine;

namespace MMK.Enemy
{
    public class EnemyInputHandler : MonoBehaviour
    {

        [SerializeField] GameObject[] Hitboxes;
        
        
        const int maxDistance = 1000;
        
        static int UILayer => LayerMask.NameToLayer("UI");
        
        
        public EnemyController EnemyController { private set; get; }


        [ContextMenu(nameof(UpdateHitboxes))]
        public void UpdateHitboxes()
        {
            Hitboxes = this.GetComponentsInChildren<MeshCollider>().Select(meshCollider => meshCollider.gameObject).ToArray();
        }
        
        

        void Awake()
        {
            EnemyController = this.GetComponent<EnemyController>();
            
        }

        void OnDestroy()
        {
            
        }

        void Start()
        {
            
        }

        void Update()
        {
            ClickListener();

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
            
            bool enemyIsClicked = false;
            
            if (Physics.Raycast(ray, out hit, maxDistance)) //, HitboxLayer))
                enemyIsClicked = Hitboxes.Contains(hit.transform.gameObject);


            EnemyController.AnimationComponent.SetSelectedAnimation(enemyIsClicked);
        }



    }
}
