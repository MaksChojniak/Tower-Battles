using System;
using UnityEngine;
using UnityEngine.SceneManagement;
using SystemInfo = UnityEngine.SystemInfo;

namespace MMK.Settings
{
    
#region Hardware Classes
    
    public class CPU
    {
        public string Name;
        public int Cores;
        public float CoresFrequency;
        
        public string Result;


        public void Update()
        {
            Name = SystemInfo.processorType;
            Cores = SystemInfo.processorCount;
            CoresFrequency = (float)Math.Round(SystemInfo.processorFrequency / 1000f, 1);

        }
    }
    
    public class RAM
    {
        public int Size;

        public void Update()
        {
            Size = Mathf.RoundToInt(SystemInfo.systemMemorySize / 1024f);
 
        }
    }
    
    public class Battery
    {
        public float ChargeLevel;
        public BatteryStatus ChargingStatus;

        public void Update()
        {
            ChargeLevel = SystemInfo.batteryLevel;
            ChargingStatus = SystemInfo.batteryStatus;
   
        }
    }
    
    
    public class Hardware
    {
        public CPU CPU;
        public RAM RAM;
        public Battery Battery;

        public Hardware()
        {
            CPU = new CPU();
            RAM = new RAM();
            Battery = new Battery();
            
            Update();
        }

        public void Update()
        {
            CPU.Update();
            RAM.Update();
            Battery.Update();

        }
    }
    
#endregion


#region Settings

    public enum GraphicsQuality : int
    {
        Low = 0,
        Medium = 1,
        High = 2,
        Ultra = 3,
    }
    
    public enum FontAsset : int
    {
        Liberation_Sans = 0,
        ZCOOL_Sans = 1

    }
    
    public enum LanguageType
    {
        Polish,
        English,
        German,
        French,
        Spanish
    }
    
    public enum HandModeType
    {
        Left,
        Right
    }

    [Serializable]
    public struct AudioSettings
    {
        [Range(0, 100)]
        public int MusicVolume;
        
        [Range(0, 100)]
        public int EffectVolume;
        
        [Range(0, 100)]
        public int UIVolume;

    }

    [Serializable]
    public struct Quality
    {
        public GraphicsQuality GraphicsQuality;

        public void SetQuality(GraphicsQuality quality)
        {
            GraphicsQuality = quality;
            
            
            QualitySettings.vSyncCount = 0;

            Application.targetFrameRate = Screen.resolutions[0].refreshRate;

            QualitySettings.SetQualityLevel((int)GraphicsQuality);

        }
        
    }
    
    
    [Serializable]
    public struct Settings
    {
        public delegate void OnSettingsChangedDelegate();
        public event OnSettingsChangedDelegate OnSettingsChanged;
        
        public AudioSettings AudioSettings;

        public Quality Quality;
        
        public LanguageType Language;
        public FontAsset Font;
        
        public HandModeType HandMode;
        
        
        
        public void SetAudioSettings(AudioSettings audioSettings)
        {
            AudioSettings = audioSettings;
            
            
            PlayerPrefs.SetInt(nameof(AudioSettings.MusicVolume), AudioSettings.MusicVolume);
            PlayerPrefs.SetInt(nameof(AudioSettings.EffectVolume), AudioSettings.EffectVolume);
            PlayerPrefs.SetInt(nameof(AudioSettings.UIVolume), AudioSettings.UIVolume);
            
            PlayerPrefs.Save();
            
            OnSettingsChanged?.Invoke();
        }

        public void SetLanguageType(LanguageType language)
        {
            Language = language;
            
            PlayerPrefs.SetString(nameof(Language), Language.ToString());
            
            PlayerPrefs.Save();
            
            OnSettingsChanged?.Invoke();
        }
        
        public void SetFontAsset(FontAsset font) 
        {
            Font = font;
            
            PlayerPrefs.SetString(nameof(Font), Font.ToString());
            
            PlayerPrefs.Save();
            
            OnSettingsChanged?.Invoke();
        }
        
        public void SetHandModeType(HandModeType handMode)
        {
            HandMode = handMode;
            
            PlayerPrefs.SetString(nameof(HandMode), HandMode.ToString());
            
            PlayerPrefs.Save();
            
            OnSettingsChanged?.Invoke();
        }




        public static void SaveData(Settings setings)
        {
            PlayerPrefs.SetInt(nameof(setings.AudioSettings.MusicVolume), setings.AudioSettings.MusicVolume);
            PlayerPrefs.SetInt(nameof(setings.AudioSettings.EffectVolume), setings.AudioSettings.EffectVolume);
            PlayerPrefs.SetInt(nameof(setings.AudioSettings.UIVolume), setings.AudioSettings.UIVolume);
            
            PlayerPrefs.SetString(nameof(setings.Language), setings.Language.ToString());
            
            PlayerPrefs.SetString(nameof(setings.Font), setings.Font.ToString());
            
            PlayerPrefs.SetString(nameof(setings.HandMode), setings.HandMode.ToString());
            
            PlayerPrefs.Save();
        }


        public static Settings LoadData()
        {
            Settings settings = new Settings();

            // Audio Settings
            AudioSettings audioSetings = new AudioSettings()
            {
                MusicVolume = PlayerPrefs.GetInt(nameof(audioSetings.MusicVolume), 50),
                EffectVolume = PlayerPrefs.GetInt(nameof(audioSetings.EffectVolume), 50),
                UIVolume = PlayerPrefs.GetInt(nameof(audioSetings.UIVolume), 50),
            };
            settings.AudioSettings = audioSetings;

            
            // Language Settings
            LanguageType language = LanguageType.English;
            if (Enum.TryParse<LanguageType>(PlayerPrefs.GetString(nameof(settings.Language)), out LanguageType languageType))
                language = languageType;
            settings.Language = language;
            
            
            // Font Settings
            FontAsset font = FontAsset.Liberation_Sans;
            if (Enum.TryParse<FontAsset>(PlayerPrefs.GetString(nameof(settings.Font)), out FontAsset fontAsset))
                font = fontAsset;
            settings.Font = font;
            
            
            // Hand Mode Settings
            HandModeType handMode = HandModeType.Right;
            if (Enum.TryParse<HandModeType>(PlayerPrefs.GetString(nameof(settings.HandMode)), out HandModeType handModeType))
                handMode = handModeType;
            settings.HandMode = handMode;
            

            return settings;
        }
        
    }
    
    
#endregion






    public class SettingsManager : MonoBehaviour
    {

#region Events

#region Audio Settings

        public delegate void ShareAudioSettingsDelegate(AudioSettings audioSetings);
        public static event ShareAudioSettingsDelegate ShareAudioSettings;

        public delegate void SetAudioSettingsDelegate(AudioSettings audioSetings);
        public static SetAudioSettingsDelegate SetAudioSettings;
  
#endregion
        
#region Language Settings

        public delegate void ShareLanguageTypeDelegate(LanguageType languageType);
        public static event ShareLanguageTypeDelegate ShareLanguageType;

        public delegate void SetLanguageTypeDelegate(LanguageType languageType);
        public static SetLanguageTypeDelegate SetLanguageType;
  
#endregion
        
#region Font Settings

        public delegate void ShareFontAssetDelegate(FontAsset fontAsset);
        public static event ShareFontAssetDelegate ShareFontAsset;

        public delegate void SetFontAssetDelegate(FontAsset fontAsset);
        public static SetFontAssetDelegate SetFontAsset;
  
#endregion
        
#region HandMode Settings

        public delegate void ShareHandModeTypeDelegate(HandModeType handModeType);
        public static event ShareHandModeTypeDelegate ShareHandModeType;

        public delegate void SetHandModeTypeDelegate(HandModeType handModeType);
        public static SetHandModeTypeDelegate SetHandModeType;
  
#endregion
        
#endregion
        
        

        // Settings
        public Settings Settings;

        // Hardware
        Hardware Hardware;

        
        

        void OnEnable()
        {
            DontDestroyOnLoad(this.gameObject);
            
            
            Settings = Settings.LoadData();
            
            Hardware = new Hardware();
            UpdateGraphicsQuality();
            
            
            RegisterHandlers();
        }

        
        void OnDisable()
        {
            UnregisterHandlers();

            Settings.SaveData(Settings);
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
            SceneManager.sceneLoaded += OnSceneLoaded;
            Settings.OnSettingsChanged += ShareSettings;

            SetHandModeType += OnSetHandModeType;
            SetFontAsset += OnSetFontAsset;
            SetLanguageType += OnSetLanguageType;
            SetAudioSettings += OnSetAudioSettings;
        }

        
        void UnregisterHandlers()
        {
            SetAudioSettings -= OnSetAudioSettings;
            SetLanguageType -= OnSetLanguageType;
            SetFontAsset -= OnSetFontAsset;
            SetHandModeType -= OnSetHandModeType;
            
            Settings.OnSettingsChanged -= ShareSettings;
            SceneManager.sceneLoaded -= OnSceneLoaded;
            
        }
        
#endregion
        
        
        
        void OnSceneLoaded(Scene scene, LoadSceneMode mode)
        {
            ShareSettings();
        }

        
        
        

#region Share Settings Data

        void ShareSettings()
        {
            ShareAudioSettings?.Invoke(Settings.AudioSettings);
            
            ShareHandModeType?.Invoke(Settings.HandMode);
            
            ShareFontAsset?.Invoke(Settings.Font);
            
            ShareLanguageType?.Invoke(Settings.Language);

        }
        
#endregion


        
#region Set Settings Data

        
        void OnSetAudioSettings(AudioSettings audioSettings) => Settings.SetAudioSettings(audioSettings);


        void OnSetHandModeType(HandModeType handModeType) => Settings.SetHandModeType(handModeType);

        
        void OnSetFontAsset(FontAsset fontAsset) => Settings.SetFontAsset(fontAsset);
        
        
        void OnSetLanguageType(LanguageType languageType) => Settings.SetLanguageType(languageType);

#endregion



#region Update Quality & Hardware
        
        [ContextMenu(nameof(UpdateGraphicsQuality))]
        public void UpdateGraphicsQuality()
        {
            Hardware.Update();

            Settings.Quality.SetQuality(CalculateQuality());
            
        }

        
        GraphicsQuality CalculateQuality()
        {
            float score = 0;

            // Battery
            if (Hardware.Battery.ChargingStatus == BatteryStatus.Charging)
                score += 5f;

            if (Hardware.Battery.ChargeLevel * 100f > 25f)
                score += 10f;

            // CPU
            if (Hardware.CPU.Cores > 4)
                score += (Hardware.CPU.Cores - 4f) * 2f;
            
            if (Hardware.CPU.CoresFrequency > 1.8f)
                score += (Hardware.CPU.CoresFrequency - 1.8f) / 0.2f;

            // RAM
            score += 5f * Hardware.RAM.Size;
            Debug.Log($"Score: {score}");
            
            
            if(score <= 35f)
                return GraphicsQuality.Low;
            else if (score <= 50f)
                return GraphicsQuality.Medium;
            else if (score <= 75f)
                return GraphicsQuality.High;
            else
                return GraphicsQuality.Ultra;
        }
        
#endregion
        
        
        
// #region On GUI
//
//         void OnGUI()
//         {
//             Rect rect = new Rect(new Vector2(250, 100), new Vector2(450, 100));
//             GUI.TextArea(rect, $"Your GQ: {Settings.Quality.GraphicsQuality.ToString()}", new GUIStyle(){fontSize = 64});
//             
//         }
//         
// #endregion

        
        
        

        
        
    }

    
    
}
