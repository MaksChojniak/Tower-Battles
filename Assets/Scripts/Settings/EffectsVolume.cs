using MMK.Settings;
using TMPro;
using UnityEngine;
using AudioSettings = MMK.Settings.AudioSettings;

namespace DefaultNamespace
{
    public class EffectsVolume : MonoBehaviour
    {

        [Header("Properties")]
        [SerializeField] AudioSettings Settings;
        
        
        
        [Space(12)]
        [Header("UI Properties")]
        [SerializeField] TMP_Text ValueText;
        [SerializeField] SettingsSliderBar SliderBar;
        
        
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


        void OnShareAudioSettings(AudioSettings settings)
        {
            Settings = settings;
            
            OnDataChanged();
        }
        
        
        
        void OnDataChanged()
        {
            // TODO Update volume in AudioManager

            UpdateUI();
        }



        public void ChangeData(float value)
        {
            int volume = (int)(value * 100f);
            Settings.EffectVolume = volume;

            SettingsManager.SetAudioSettings(Settings);
        }
        
        
        
        void UpdateUI()
        {
            SliderBar.slider.value = Settings.EffectVolume / 100f;
            
            string text = Settings.EffectVolume.ToString();
            ValueText.text = text;
            
        }
        
        
    }
}
