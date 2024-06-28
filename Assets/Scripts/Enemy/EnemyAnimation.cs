using System;
using UnityEngine;

// namespace Enemy
// {
    public class EnemyAnimation : MonoBehaviour
    {
        
        public GameObject BloodParticlePrefab;

        public AnimationClip RagdollClip;

        
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
            if (RagdollClip == null)
                throw new NullReferenceException("RagdollClip doesn't exist  [value = null]");
            
            Animation.AddClip(RagdollClip, RAGDOLL_CLIP_NAME);

        }
        
        

        void PlayTakeDamageAnimation()
        {
            ParticleSystem bloodParticle = Instantiate(BloodParticlePrefab, this.transform.position, this.transform.rotation).GetComponent<ParticleSystem>();

            bloodParticle.Play();
        }


        
        void PlayDieAnimation()
        {
            Animation.Play(RAGDOLL_CLIP_NAME);
            
        }
        
        
        
    }


// }
