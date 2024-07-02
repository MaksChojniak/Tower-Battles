


using System;
using System.Linq;
using UnityEngine;
using UnityEngine.Audio;
using UnityEngine.EventSystems;
using UnityEngine.SceneManagement;
using UnityEngine.UI;


namespace MMK
{
    [Serializable]
    public struct AudioSettings
    {
        [Range(0, 100)]
        public int VolumeMusic;
        
        [Range(0, 100)]
        public int VolumeMisc;
        
        [Range(0, 100)]
        public int VolumeUI;


        public const string VOLUME_MUSIC_AUDIO_MIXER = "Volume_MUSIC";
        
        public const string VOLUME_MISC_AUDIO_MIXER = "Volume_MISC";
        
        public const string VOLUME_UI_AUDIO_MIXER = "Volume_UI";
    }

    public enum AudioType
    {
        Music,
        Misc,
        UI,
    }
    

    public class AudioManager : MonoBehaviour
    {
        public static AudioManager Instance { get; set; }

        public delegate void PlayAudioDelegate(AudioClip audioClip, AudioType audioType);
        public static PlayAudioDelegate PlayAudio;

        public delegate void UpdateAudioSettingsDelegate(AudioSettings settings);
        public static UpdateAudioSettingsDelegate UpdateAudioSettings;
        

        [SerializeField] AudioMixer audioMixer;

        
        const string MUSIC_MIXER_GROUP_NAME = "Music";
        const string MISC_MIXER_GROUP_NAME = "Misc/Effects";
        const string UI_MIXER_GROUP_NAME = "UI";
        

        void Awake()
        {
            if (Instance != null)
            {
                Destroy(this.gameObject);
                return;
            }

            Instance = this;
            DontDestroyOnLoad(Instance.gameObject);
            
            RegisterHandlers();
            
        }

        void OnDestroy()
        {
            UnregisterHandlers();

            if (Instance == this)
                Instance = null;
            
        }


#region Register & Unregister Handlers

        void RegisterHandlers()
        {
            PlayAudio += OnPlayAudio;
            UpdateAudioSettings += OnUpdateAudioSettings;
            
            // SceneManager.sceneLoaded += OnSceneLoaded;

        }

        void UnregisterHandlers()
        {
            // SceneManager.sceneLoaded -= OnSceneLoaded;
            
            UpdateAudioSettings -= OnUpdateAudioSettings;
            PlayAudio -= OnPlayAudio;
            
        }
        
#endregion

        
        // void OnSceneLoaded(Scene scene, LoadSceneMode mode)
        // {
        //     RegisterHandlersForButtons();
        //
        // }
        //
        // void RegisterHandlersForButtons()
        // {
        //     EventTrigger[] eventTriggers = GameObject.FindObjectsOfType<EventTrigger>(true);
        //     Button[] buttons = GameObject.FindObjectsOfType<Button>(true);
        //
        //     foreach (var eventTrigger in eventTriggers)
        //     {
        //         EventTrigger.Entry trigger = eventTrigger.triggers.FirstOrDefault(trigger => trigger.eventID == EventTriggerType.PointerClick);
        //
        //         if (trigger != null)
        //             trigger.callback.AddListener(OnClick);
        //     }
        //     
        //     foreach (var button in buttons)
        //     {
        //         button.onClick.AddListener(OnClick);
        //     }
        // }
        //
        // void OnClick()
        // {
        //     PlayAudio(GameSettingsManager.GetGameSettings().ButtonAudioClip, AudioType.UI);
        // }
        //
        // void OnClick(BaseEventData data)
        // {
        //     OnClick();
        // }
        
        
        
        

        void OnPlayAudio(AudioClip audioClip, AudioType audioType)
        {
            AudioSource audioSource = CreateAudioSource($"[Audio Source]", this.transform, audioType);

            audioSource.clip = audioClip;
            audioSource.Play();
            
            Destroy(audioSource.gameObject, audioClip.length + 0.1f);
        }

        AudioSource CreateAudioSource(string gameObjectName, Transform gameObjectParent, AudioType audioType)
        {
            GameObject createdGameObject = new GameObject(gameObjectName);
            Transform createdTransform = createdGameObject.transform;
            
            createdTransform.SetParent(gameObjectParent);

            createdTransform.localPosition = Vector3.zero;
            createdTransform.localRotation= Quaternion.identity;
            createdTransform.localScale = Vector3.zero;
            
            AudioSource audioSource = createdGameObject.AddComponent<AudioSource>();
            
            audioSource.playOnAwake = false;
            audioSource.loop = false;

            string mixerGroupName = "";
            switch (audioType)
            {
                case AudioType.Music:
                    mixerGroupName = MUSIC_MIXER_GROUP_NAME;
                    break;
                case AudioType.Misc:
                    mixerGroupName = MISC_MIXER_GROUP_NAME;
                    break;
                case AudioType.UI:
                    mixerGroupName = UI_MIXER_GROUP_NAME;
                    break;
                default:
                    throw new NullReferenceException($"Audio Mixer Group is null"); 
                    break;
            }
            audioSource.outputAudioMixerGroup = audioMixer.FindMatchingGroups(mixerGroupName).First();

            return audioSource;
        }




        void OnUpdateAudioSettings(AudioSettings settings)
        {
            audioMixer.SetFloat(AudioSettings.VOLUME_MUSIC_AUDIO_MIXER, settings.VolumeMusic);
            
            audioMixer.SetFloat(AudioSettings.VOLUME_MISC_AUDIO_MIXER, settings.VolumeMisc);
            
            audioMixer.SetFloat(AudioSettings.VOLUME_UI_AUDIO_MIXER, settings.VolumeUI);
            
        }
        
        
        
    }
    
    
}
