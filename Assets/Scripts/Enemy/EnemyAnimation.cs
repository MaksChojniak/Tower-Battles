using System;
using UnityEngine;
using Random = UnityEngine.Random;

// namespace Enemy
// {
    public class EnemyAnimation : MonoBehaviour
    {
        
        public GameObject BloodParticlePrefab;

        public AnimationClip RagdollClip;
        public Transform Body;

        
        public EnemyController EnemyController { private set; get; }
        public Animation Animation { private set; get; }
        

        public const string RAGDOLL_CLIP_NAME = "Ragdoll";

        
        
        void Awake()
        {
            EnemyController = this.GetComponent<EnemyController>();
            
            if (this.TryGetComponent<Animation>(out var animation))
                Animation = animation;
            else
                Animation = this.gameObject.AddComponent<Animation>();
            
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

        }

        void UnregisterHandlers()
        {
            EnemyController.HealthComponent.OnDie -= PlayDieAnimation;
            EnemyController.HealthComponent.OnTakeDamage -= PlayTakeDamageAnimation;
            
        }
  
#endregion
        
        
        
        void InitializeAnimationClips()
        {
            // if (RagdollClip == null)
            //     throw new NullReferenceException("RagdollClip doesn't exist  [value = null]");
            //
            // Animation.AddClip(RagdollClip, RAGDOLL_CLIP_NAME);

        }
        
        

        void PlayTakeDamageAnimation()
        {
            ParticleSystem bloodParticle = Instantiate(BloodParticlePrefab, this.transform.position, this.transform.rotation).transform.GetChild(0).GetComponent<ParticleSystem>();

            bloodParticle.Play();
            
            Destroy(bloodParticle.gameObject, 2f);
        }


        
        void PlayDieAnimation()
        {
            // Animation.Play(RAGDOLL_CLIP_NAME);
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
