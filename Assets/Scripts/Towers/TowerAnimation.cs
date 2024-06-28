using System;
using MMK.ScriptableObjects;
using UnityEngine;

namespace MMK.Towers
{
    public class TowerAnimation : MonoBehaviour
    {
        
        
        public AnimationClip LevelUpClip;
        public AnimationClip RemoveTowerClip;
        
        
        public TowerController TowerController { private set; get; }
        public Animation Animation { private set; get; }

        
        public const string LEVEL_UP_CLIP_NAME = "LevelUp";
        public const string REMOVE_TOWER_CLIP_NAME = "RemoveTower";
        
        

        
        protected virtual void Awake()
        {
            TowerController = this.GetComponent<TowerController>();
            
            if (this.TryGetComponent<Animation>(out var animation))
                Animation = animation;
            else
                Animation = this.gameObject.AddComponent<Animation>();

            // InitializeAnimationClips();
            
            RegisterHandlers();
        }

        protected virtual void OnDestroy()
        {
            UnregisterHndlers();
            
        }

        protected virtual void Start()
        {
            
        }

        protected virtual void Update()
        {
            
        }

        protected virtual void FixedUpdate()
        {
            
        }


        
#region Register & Unregister Handlers

        protected virtual void RegisterHandlers()
        {
            
        }

        protected virtual void UnregisterHndlers()
        {

        }

#endregion


        protected virtual void InitializeAnimationClips()
        {
            if (LevelUpClip == null)
                throw new NullReferenceException("ShootAnimationClip doesn't exist  [value = null]");
            
            Animation.AddClip(LevelUpClip, LEVEL_UP_CLIP_NAME);
            
            if (RemoveTowerClip == null)
                throw new NullReferenceException("ShootAnimationClip doesn't exist  [value = null]");
            
            Animation.AddClip(RemoveTowerClip, REMOVE_TOWER_CLIP_NAME);
            
        }
        
        


        protected void PlayLevelUpAnimation()
        {
            Animation.Play(LEVEL_UP_CLIP_NAME);
            
        }
        
        protected void PlayRemoveAnimation()
        {
            Animation.Play(REMOVE_TOWER_CLIP_NAME);
            
        }


    }
}
