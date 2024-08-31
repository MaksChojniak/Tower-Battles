using DefaultNamespace;
using MMK.Settings;
using TMPro;
using UnityEngine;
using AudioSettings = MMK.Settings.AudioSettings;

namespace Settings
{
    public class UIVolume : MonoBehaviour
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
            // int volume = (int)(value * 100f);
            Settings.UIVolume = Mathf.RoundToInt(value);

            SettingsManager.SetAudioSettings(Settings);
        }
        
        
        
        void UpdateUI()
        {
            SliderBar.slider.value = Settings.UIVolume;
            
            string text = Settings.UIVolume.ToString();
            ValueText.text = text;

        }
        
        
    }
}
