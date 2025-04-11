using System;
using UnityEngine;

namespace MMK.Towers
{
    public class TowerAudio : MonoBehaviour
    {

        [Space(12)]
        public AudioData OnTowerClickedAudio;

        [Space(12)]
        public AudioData LevelUpAudio;

        [Space(12)]
        public AudioData RemoveTowerAudio;
        
        [Space(12)]
        public AudioData PlaceTowerAudio;


        public const string AudioParentName = "Audio";





        protected virtual void Awake()
        {
            SetupAudioData();
            
            RegisterHandlers();
            
        }

        protected virtual void OnDestroy()
        {
            UnregisterHandlers();
            
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



        
#region Register& Unregister Handlers

        protected virtual void RegisterHandlers()
        {

        }

        protected virtual void UnregisterHandlers()
        {
            
        }
        
 #endregion
        



        protected void PlayRemoveTowerAudio()
        {
            if (RemoveTowerAudio.AudioClip == null)
                throw new NullReferenceException("RemoveTowerAudio Clip doesn't exist  [value = null]");
            
            RemoveTowerAudio.AudioSource.Play();
            
        }
        
        
        protected void PlayLevelUpAudio()
        {
            if (LevelUpAudio.AudioClip == null)
                throw new NullReferenceException("LevelUpAudio Clip doesn't exist  [value = null]");

            LevelUpAudio.AudioSource.Play();

        }
        
        
        protected void PlayOnTowerClickedAudio()
        {
            if (OnTowerClickedAudio.AudioClip == null)
                throw new NullReferenceException("OnTowerClickedAudio Clip doesn't exist  [value = null]");

            OnTowerClickedAudio.AudioSource.Play();

        }

        protected void PlayPlaceTowerAudio()
        {
            if (PlaceTowerAudio.AudioClip == null)
                throw new NullReferenceException("PlaceTowerAudio Clip doesn't exist  [value = null]");
            
            PlaceTowerAudio.AudioSource.Play();
        }
        
        
        
        
        
#region Setup Prefab
        
        [ContextMenu(nameof(SetupAudioData))]
        protected virtual void SetupAudioData()
        {
            Transform audioParent = GetAudioParent().transform;
            
            OnTowerClickedAudio.SetupAudio(audioParent.transform);
            LevelUpAudio.SetupAudio(audioParent.transform);
            RemoveTowerAudio.SetupAudio(audioParent.transform);
            PlaceTowerAudio.SetupAudio(audioParent.transform);

        }


        protected GameObject GetAudioParent()
        {
            bool hasAudioParent = false;
            GameObject audioParent = null;
            
            for (int i = 0; i < this.transform.childCount; i++)
            {
                if (this.transform.GetChild(i).gameObject.name.Contains(AudioParentName))
                {
                    hasAudioParent = true;
                    audioParent = this.transform.GetChild(i).gameObject;
                }
            }
            
            if (!hasAudioParent)
                audioParent = new GameObject(AudioParentName);
            
            audioParent.transform.SetParent(this.transform);
            
            return audioParent;
        }
        
#endregion
        
        
    }

}



 

