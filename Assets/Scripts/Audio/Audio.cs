using System;
using System.Collections;
using System.Threading.Tasks;
using UnityEngine;
using UnityEngine.Audio;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace Audio
{
    // public enum AudioInvokeType
    // {
    //     PointerClick,
    //     PointerDown,
    //     PointerUp,
    //     
    //     PointerBeginDrag,
    //     PointerDrag,
    //     PointerEndDrag,
    // }
    
    public class Audio : MonoBehaviour
    {
        public AudioClip Clip;
        public AudioMixerGroup AudioMixer;

        [Space]
        public EventTriggerType InvokeType;
        
        [Space]
        public bool IsCustom;

        Button button;
        EventTrigger trigger;
        
        
        void Awake()
        {
            if (!this.TryGetComponent<Button>(out button))
                Debug.LogWarning("Button is not exist");
            
            if (!this.TryGetComponent<EventTrigger>(out trigger))
                Debug.LogWarning("Event Trigger is not exist");
            
            if(button == null && trigger == null)
                throw new NullReferenceException("Button and Trigger is null");
            
            if(Clip == null)
                throw new NullReferenceException("Clip is null");
            
            RegiserHandlers();
            
        }


        void OnDestroy()
        {
            UnregisterHandlers();
            
        }


        
#region Register & Unregister Handlers

        void RegiserHandlers()
        {
            if(button != null)
                button.onClick.AddListener(OnClick);
            
            if(trigger != null)
            {
                EventTrigger.Entry entry = new EventTrigger.Entry();
                entry.eventID = InvokeType;
                entry.callback.AddListener((eventData) => { OnClick(); });
                trigger.triggers.Add(entry);
            }
        }

        void UnregisterHandlers()
        {
            if(button != null)
                button.onClick.RemoveListener(OnClick);
            
        }
        
#endregion


        public void SetClip(AudioClip audioClip)
        {
            Clip = audioClip;
        }
        
        
        public async void OnClick()
        {
            AudioSource audioSource = new GameObject("Audio Source").AddComponent<AudioSource>();
            audioSource.playOnAwake = false;
            audioSource.spatialBlend = 0f;
            
            audioSource.clip = Clip;
            if(AudioMixer != null)
                audioSource.outputAudioMixerGroup = AudioMixer;
            
            audioSource.Play();
            
            await Task.Yield();
            
            while(audioSource.isPlaying)
                await Task.Yield();
            
            await Task.Yield();
            
            Destroy(audioSource.gameObject);
        }
        
        
        
        
        
        

    }
    
}
