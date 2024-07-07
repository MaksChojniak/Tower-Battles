using Assets.Scripts.Settings;
using System;
using System.Collections;
using UnityEngine;
using UnityEngine.SceneManagement;

namespace DefaultNamespace
{
    public enum GraphicsQuality
    {
        Low,
        Medium,
        High,
        Ultra,
    }
    [Serializable]
    public class CPU
    {
        public string Name;
        public int Cores;
        public double CoresFrequency;

        public void Update()
        {
            Name = SystemInfo.processorType;
            Cores = SystemInfo.processorCount;
            CoresFrequency = Math.Round(SystemInfo.processorFrequency / 1000f, 1);
        }
    }
    [Serializable]
    public class RAM
    {
        public int Size;

        public void Update()
        {
            Size = Mathf.RoundToInt(SystemInfo.systemMemorySize / 1024f);
        }
    }
    [Serializable]
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
    [Serializable]
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
        }

        public void Update()
        {
            CPU.Update();
            RAM.Update();
            Battery.Update();

        }
    }
    
    [Serializable]
    public class Settings
    {
        public GraphicsQuality GraphicsQuality;

        public Hardware Hardware;


        public Settings()
        {
            
        }
        

        [ContextMenu(nameof(UpdateGraphicsQuality))]
        public void UpdateGraphicsQuality()
        {
            Hardware = new Hardware();
            Hardware.Update();
            
            GraphicsQuality = CalculateQuality(Hardware);
            
        }

        static GraphicsQuality CalculateQuality(Hardware hardware)
        {


            return GraphicsQuality.Low;
        }
        
    }
    
    
    
    
    
    public class SettingsManager : MonoBehaviour
    {
        public static SettingsManager Instance;

        public static event Action<SettingsData> ShareSettingsData;
        
        public static Action<SettingsData> UpdateSettingsData;

        public Settings Settings;
        
        public SettingsData SettingsData;

        
        
        void OnEnable()
        {
            if (Instance != null)
            {
                Destroy(this.gameObject);
                return;
            }

            Instance = this;
            DontDestroyOnLoad(Instance.gameObject);

            
            SettingsData = new SettingsData()
            {
                MusicVolume = 100,
                EffectVolume = 100,
                UIVolume = 100,
                QualityLevel = Quality.QualityLevelsType.Medium,
                ShadowsActive = true,
                ParticlesActive = true,
                FPSLimitIndex = 5,
                Language = Language.LanguageType.Poland,
                HandMode = HandModeType.Right,
                Font = FontAsset.secondFont
            };

            
            RegisterHandlers();
        }

        void OnDisable()
        {
            if (Instance == this)
            {
                Instance = null;
                UnregisterHandlers();
            }
        }


        void Awake()
        {
            // hardwareInformations = GetHarwareInformations();
        }

        
#region Hardware Informations

        // [Serializable]
        // public class CPU
        // {
        //     public string Name;
        //     public int Cores;
        //     public int Frequency;
        //
        //     public CPU()
        //     {
        //         Name = SystemInfo.processorType;
        //         Cores = SystemInfo.processorCount;
        //         Frequency =  SystemInfo.processorFrequency;
        //         
        //     }
        //     
        // }
        // [Serializable]
        // public class GPU
        // {
        //     public string Name;
        //     public int RAM_GB;
        //     public int RAM_MB;
        //
        //     public GPU()
        //     {
        //         Name = SystemInfo.graphicsDeviceName;
        //         RAM_MB = SystemInfo.graphicsMemorySize;
        //         RAM_GB = Mathf.RoundToInt(RAM_MB / 1024f);
        //
        //     }
        //     
        // }
        // [Serializable]
        // public class RAM
        // {
        //     public int Size_GB;
        //     public int Size_MB;
        //
        //     public RAM()
        //     {
        //         Size_MB = SystemInfo.systemMemorySize; 
        //         Size_GB = Mathf.RoundToInt(Size_MB / 1024f);
        //         
        //     }
        //     
        // }
        //
        // [Serializable]
        // struct HardwareInformations
        // {
        //     public GPU GPU;
        //     public CPU CPU;
        //     public RAM RAM;
        // }
        //
        //
        // [SerializeField] HardwareInformations hardwareInformations;
        //
        // HardwareInformations GetHarwareInformations()
        // {
        //     GPU GPU = new GPU();
        //     CPU CPU = new CPU();
        //     RAM RAM = new RAM();
        //
        //     return new HardwareInformations()
        //     {
        //         GPU = GPU, 
        //         CPU = CPU,
        //         RAM = RAM
        //     };
        // }

#endregion




#region Register & Unregister Handlers

        void RegisterHandlers()
        {
            SceneManager.sceneLoaded += OnSceneLoaded;
            UpdateSettingsData += OnUpdateData;
            
        }

        void UnregisterHandlers()
        {
            UpdateSettingsData -= OnUpdateData;
            SceneManager.sceneLoaded -= OnSceneLoaded;
            
        }
        
#endregion
        
        
        
        void OnSceneLoaded(Scene scene, LoadSceneMode mode)
        {
            Debug.Log("Shange Scene");
            StartCoroutine(UpdateSettngsMenu());
        }

        IEnumerator UpdateSettngsMenu()
        {
            yield return new WaitForEndOfFrame();
            yield return new WaitForEndOfFrame();
            
            ShareSettingsData?.Invoke(SettingsData);
        }

        void OnUpdateData(SettingsData newData)
        {
            SettingsData = newData;

            ShareSettingsData?.Invoke(SettingsData);
        }
        
        
    }

    [Serializable]
    public struct SettingsData
    {
        [Range(0, 100)]
        public int MusicVolume;
        [Range(0, 100)]
        public int EffectVolume;
        [Range(0, 100)]
        public int UIVolume;

        [Space(10)]
        public Quality.QualityLevelsType QualityLevel;
        public bool ShadowsActive;
        public bool ParticlesActive;
        public int FPSLimitIndex;

        [Space(10)]
        public Language.LanguageType Language;
        public HandModeType HandMode;
        public FontAsset Font;
    }
}
