using System.Collections.Generic;
using DefaultNamespace;
using MMK;
using MMK.Settings;
using TMPro;
using UnityEngine;
using UnityEngine.Audio;
using AudioSettings = MMK.Settings.AudioSettings;

namespace Assets.Scripts.Settings
{
    enum AudioType
    {
        Music,
        Effects,
        UI
    }

    [AddComponentMenu("Audio Settings")]
    public class Audio : MonoBehaviour
    {


        [Header("Properties")]
        [SerializeField] AudioSettings AudioSettings;

        [Space(10)]
        [SerializeField] AudioType AudioType;
        [Space]
        [SerializeField] AudioMixer AudioMixer;


        [Space(12)]
        [Header("UI Properties")]
        [SerializeField] SettingsSliderBar SliderBar;
        [SerializeField] TMP_Text ValueText;

        [Space(8)]
        [SerializeField] CanvasGroup LeftButton;
        [SerializeField] CanvasGroup RightButton;


        readonly Dictionary<AudioType, string> AudioVolumeKeys = new Dictionary<AudioType, string>()
        {
            { AudioType.UI, "Volume_UI" },
            { AudioType.Effects, "Volume_EFFECTS" },
            { AudioType.Music, "Volume_MUSIC" },
        };


void Awake()
        {
            RegisterHandlers();
       
        }

        void OnDestroy()
        {
            UnregisterHandlers();
            
        }



#region Register & Unregister

        void RegisterHandlers()
        {
            SettingsManager.ShareAudioSettings += OnShareAudioSettings;
            
        }
        
        void UnregisterHandlers()
        {
            SettingsManager.ShareAudioSettings -= OnShareAudioSettings;
            
        }
        
#endregion


        
        
        void OnShareAudioSettings(AudioSettings audioSetings)
        {
            // if( AudioSettings.Equals(audioSetings) )
            //     return;

            AudioSettings = audioSetings;
            
            OnDataChanged();
        }


        void OnDataChanged()
        {
            string key = AudioVolumeKeys[AudioType];
            float value = 0;
            switch (AudioType)
            {
                case AudioType.UI:
                    value = AudioSettings.UIVolume;
                    break;
                case AudioType.Effects:
                    value = AudioSettings.EffectVolume;
                    break;
                case AudioType.Music:
                    value = AudioSettings.MusicVolume;
                    break;
            }
            value /= 100;

            AudioMixer.SetFloat(key, Mathf.Log10(value) * 20);

            UpdateUI();
        }


        
        public void ChangeData(float progressBarValue)
        {
            int value = Mathf.RoundToInt(progressBarValue);
            
            AudioSettings audioSettings = new AudioSettings()
            {
                MusicVolume = AudioType == AudioType.Music ? value : AudioSettings.MusicVolume,
                EffectVolume = AudioType == AudioType.Effects ? value : AudioSettings.EffectVolume,
                UIVolume = AudioType == AudioType.UI ? value : AudioSettings.UIVolume,
            };

            SettingsManager.SetAudioSettings(audioSettings);
        }
        
        
        
        void UpdateUI()
        {
            int value = 0;
            switch (AudioType)
            {
                case AudioType.Music:
                    value = AudioSettings.MusicVolume;
                    break;
                case AudioType.Effects:
                    value = AudioSettings.EffectVolume;
                    break;
                case AudioType.UI:
                    value = AudioSettings.UIVolume;
                    break;
            }


            LeftButton.interactable = value > 0;
            LeftButton.alpha = LeftButton.interactable ? 1f : 0.7f;
            
            RightButton.interactable = value < 100;
            RightButton.alpha = RightButton.interactable ? 1f : 0.7f;
            
            
            ValueText.text = value.ToString();
            
            SliderBar.slider.value = value;

        }
        
        
        
        
        
        
    }
    
}
