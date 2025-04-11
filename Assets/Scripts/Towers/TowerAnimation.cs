using System;
using MMK.ScriptableObjects;
using UnityEngine;

namespace MMK.Towers
{
    public class TowerAnimation : MonoBehaviour
    {
        public delegate void UpdateControllerDelegate(int Level);
        public UpdateControllerDelegate UpdateController;
        
        public AnimationClip LevelUpClip;
        public AnimationClip RemoveTowerClip;

        public RuntimeAnimatorController[] AnimationControllers; 
        
        
        public TowerController TowerController { private set; get; }
        public Animator Animator { private set; get; }

        
        public const string LEVEL_UP_CLIP_NAME = "LevelUp";
        public const string REMOVE_TOWER_CLIP_NAME = "RemoveTower";
        
        

        
        protected virtual void Awake()
        {
            Debug.Log("Virtual Awake");

            TowerController = this.GetComponent<TowerController>();
            
            if (this.TryGetComponent<Animator>(out var animator))
                Animator = animator;
            else
                Debug.LogException(new Exception("Enemy doesn't have Animator"));

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
            UpdateController += OnUpdateController;

        }

        protected virtual void UnregisterHndlers()
        {
            UpdateController -= OnUpdateController;

        }

#endregion


        void OnUpdateController(int Level)
        {
            Animator.runtimeAnimatorController = AnimationControllers[Level];
        }
        


        protected void PlayLevelUpAnimation()
        {
            Animator.Play(LEVEL_UP_CLIP_NAME);
            
        }
        
        protected void PlayRemoveAnimation()
        {
            Animator.Play(REMOVE_TOWER_CLIP_NAME);
            
        }


    }
}
