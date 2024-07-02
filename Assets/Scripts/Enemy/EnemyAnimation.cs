using System;
using UnityEngine;
using Random = UnityEngine.Random;

// namespace Enemy
// {
    public class EnemyAnimation : MonoBehaviour
    {
        
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
                Animator = this.gameObject.AddComponent<Animator>();
            
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

        }

        void UnregisterHandlers()
        {
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
            // if (!Animator.IsPlaying(MOVEMENT_CLIP_NAME))
            //     Animator.Play(MOVEMENT_CLIP_NAME);
            //
            // Animator.clip.apparentSpeed

            // Animator.speed = speed;
        }
        

        void PlayTakeDamageAnimation()
        {
            ParticleSystem bloodParticle = Instantiate(BloodParticlePrefab, this.transform.position, this.transform.rotation).transform.GetChild(0).GetComponent<ParticleSystem>();

            bloodParticle.Play();
            
            Destroy(bloodParticle.gameObject, 2f);
        }


        
        void PlayDieAnimation()
        {
            PlayRagdoll();
            
        }

        void PlayRagdoll()
        {
            if (Body == null)
            {
                Debug.LogException(new Exception("Body is null"));
                return;
            }

            Rigidbody[] rigidbodies = Body.GetComponentsInChildren<Rigidbody>();
            foreach (var rb in rigidbodies)
            {
                rb.isKinematic = false;
                
                rb.AddForce(Random.Range(-1f, 1f), 0f, Random.Range(-1f,1f) );
            }
        }
        
        
        
    }


// }
