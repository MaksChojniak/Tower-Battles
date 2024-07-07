using System;
using UnityEngine;
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

        
        public EnemyController EnemyController { private set; get; }
        public Animator Animator { private set; get; }
        

        public const string MOVE_CLIP_NAME = "Move";

        
        
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
        
        void OnSetSelectedAnimation(bool state)
        {
            SetSelectedMaterial(state);
            SetOutlineMaterial(state);

        }

        void SetSelectedMaterial(bool state)
        {
            
        }
        
        void SetOutlineMaterial(bool state)
        {
            
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
