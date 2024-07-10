using System;
using System.Collections;
using System.Collections.Generic;
using System.Data;
using System.Xml.Schema;
using TMPro;
using UnityEngine;
using UnityEngine.AddressableAssets;
using UnityEngine.ResourceManagement.AsyncOperations;
using Random = UnityEngine.Random;

// namespace Enemy
// {
    public class EnemyAnimation : MonoBehaviour
    {
        public delegate void SetSelectedAnimationDelegate(bool state);
        public SetSelectedAnimationDelegate SetSelectedAnimation;
        
        
        public GameObject BloodParticlePrefab;

        // public AnimationClip MoveClip;
        
        public Transform Body;

        [SerializeField] GameObject healthObject;
        GameObject healthPanel => healthObject.transform.GetChild(0).gameObject;
        TMP_Text healthText => healthPanel.transform.GetChild(0).GetComponent<TMP_Text>();

        
        public EnemyController EnemyController { private set; get; }
        public Animator Animator { private set; get; }
        

        public const string MOVE_CLIP_NAME = "Move";

        const string SELECTED_MATERIAL_ADDRESS = "Zombie Selected.mat";
        const string OUTLINE_MATERIAL_ADDRESS = "Zombie Outline.mat";

        
        
        void Awake()
        {
            EnemyController = this.GetComponent<EnemyController>();
            
            if (this.TryGetComponent<Animator>(out var animator))
                Animator = animator;
            else
                Debug.LogException(new Exception("Enemy doesn't have Animator"));
            
            InitializeAnimationClips();
            
            RegisterHandlers();

        }

        void OnDestroy()
        {
            UnregisterHandlers();

            if(outlineMaterialHandle.IsValid())
                Addressables.Release(outlineMaterialHandle);
            if(selectedMaterialHandle.IsValid())
                Addressables.Release(selectedMaterialHandle);
        }

        void Start()
        {
            StartCoroutine(SpawnMaterials());
            
        }

        void Update()
        {
            if(healthPanel.activeSelf)
                healthText.text = $"{EnemyController.HealthComponent.GetHealth()} HP";
        }

        void FixedUpdate()
        {
            
        }

        void LateUpdate()
        {
            if (healthPanel.activeSelf)
                UpdateTextRotation();
        }




#region Register & Unregister Handlers

        void RegisterHandlers()
        {
            EnemyController.HealthComponent.OnTakeDamage += PlayTakeDamageAnimation;
            EnemyController.HealthComponent.OnDie += PlayDieAnimation;
            EnemyController.MovementComponent.OnMove += PlayMoveAnimation;

            SetSelectedAnimation += OnSetSelectedAnimation;

        }

        void UnregisterHandlers()
        {
            SetSelectedAnimation -= OnSetSelectedAnimation;
            
            EnemyController.MovementComponent.OnMove -= PlayMoveAnimation;
            EnemyController.HealthComponent.OnDie -= PlayDieAnimation;
            EnemyController.HealthComponent.OnTakeDamage -= PlayTakeDamageAnimation;
        }
  
#endregion
        
        
        
        void InitializeAnimationClips()
        {
            // if (MoveClip == null)
            //     throw new NullReferenceException("RagdollClip doesn't exist  [value = null]");
            
            //Animator.AddClip(MovementClip, MOVEMENT_CLIP_NAME);

        }


        void PlayMoveAnimation(float speed)
        {
            Animator.speed = speed / 2f;
        }


        
#region Select Animation

        void UpdateTextRotation()
        {
            Vector3 direction = (Camera.main.transform.position - this.transform.position);
            Quaternion rotation = Quaternion.Euler(healthObject.transform.rotation.x, Quaternion.LookRotation(direction, Vector3.up).y, healthObject.transform.rotation.z);
            // rotation.y = Quaternion.LookRotation(direction, Vector3.up).y;
            healthObject.transform.rotation = rotation;
            
        }

        
        
        void OnSetSelectedAnimation(bool state)
        {
            foreach (var meshRenderer in Body.GetComponentsInChildren<MeshRenderer>())
            {
                SetMaterials(meshRenderer, state);
            }

            healthPanel.SetActive(state);
            
        }


        static Material SelectedMaterial;
        static Material OutlineMaterial;
        
        void SetMaterials(MeshRenderer meshRenderer, bool state)
        {
            List<Material> materials = new List<Material>() { meshRenderer.materials[0] };

            if (state)
            {
                materials.Add(SelectedMaterial);
                materials.Add(OutlineMaterial);
            }

            meshRenderer.materials = materials.ToArray();
            
        }


        static AsyncOperationHandle<Material> selectedMaterialHandle;
        static AsyncOperationHandle<Material> outlineMaterialHandle;
        IEnumerator SpawnMaterials()
        {

            if (!selectedMaterialHandle.IsValid())
            {
                selectedMaterialHandle = Addressables.LoadAssetAsync<Material>(SELECTED_MATERIAL_ADDRESS);
                yield return selectedMaterialHandle;
        
                if (selectedMaterialHandle.Status != AsyncOperationStatus.Succeeded)
                    yield break;
        
                SelectedMaterial = new Material(selectedMaterialHandle.Result);

            }
        
   
            if (!outlineMaterialHandle.IsValid())
            {
                outlineMaterialHandle = Addressables.LoadAssetAsync<Material>(OUTLINE_MATERIAL_ADDRESS);
                yield return outlineMaterialHandle;
        
                if (outlineMaterialHandle.Status != AsyncOperationStatus.Succeeded)
                    yield break;
        
                OutlineMaterial = new Material(outlineMaterialHandle.Result);

            }
        
            
        }


#endregion
        
        

#region Take Damage Animation

        void PlayTakeDamageAnimation(bool IsBurning)
        {
            if (IsBurning)
                PlayBurningAnimation();
            else
                PlayBloodAnimation();
        }



        void PlayBurningAnimation()
        {
            
        }

        void PlayBloodAnimation()
        {
            GameObject bloodParticleObject = Instantiate(BloodParticlePrefab, this.transform.position, this.transform.rotation);
            ParticleSystem bloodParticle = bloodParticleObject.transform.GetChild(0).GetComponent<ParticleSystem>();

            bloodParticle.Play();
            
            Destroy(bloodParticleObject, 1.5f);
        }
        
#endregion

        

#region Die Animation

        [ContextMenu(nameof(PlayDieAnimation))]
        void PlayDieAnimation()
        {
            SetSelectedAnimation(false);
            
            PlayRagdoll();
            
        }

        void PlayRagdoll()
        {
            Destroy(Animator);
            
            if (Body == null)
            {
                Debug.LogException(new Exception("Body is null"));
                return;
            }

            Rigidbody[] rigidbodies = Body.transform.GetChild(0).GetComponentsInChildren<Rigidbody>();
            foreach (var rb in rigidbodies)
            {
                rb.gameObject.layer = LayerMask.NameToLayer("Ragdoll");
                
                rb.isKinematic = false;

                Vector3 direction = (rb.transform.right * Random.Range(10f, 25f) * (Random.Range(0, 100) % 2 == 0 ? 1 : -1) ) +
                                    (rb.transform.forward * Random.Range(10f, 25f) * (Random.Range(0, 100) % 2 == 0 ? 1 : -1) );
                rb.AddForce(direction, ForceMode.Impulse);
                
            }
        }
        
#endregion
        
        
        
        
    }


// }
