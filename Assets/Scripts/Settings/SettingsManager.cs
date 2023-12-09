using Assets.Scripts.Settings;
using System;
using System.Collections;
using TMPro;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.SceneManagement;

namespace DefaultNamespace
{
    public class SettingsManager : MonoBehaviour
    {
        public static SettingsManager Instance;

        public static event Action<SettingsData> ShareSettingsData;
        
        public static Action<SettingsData> UpdateSettingsData;

        public SettingsData SettingsData;

        void OnEnable()
        {
            if (Instance != null)
            {
                Destroy(this.gameObject);
                return;
            }

            Instance = this;
            DontDestroyOnLoad(this.gameObject);

            SettingsData = new SettingsData()
            {
                MusicVolume = 0,
                EffectVolume = 0,
                QualityLevel = Quality.QualityLevelsType.Medium,
                ShadowsActive = false,
                ParticlesActive = false,
                FPSLimitIndex = 5,
                Language = Language.LanguageType.Poland,
                HandMode = HandModeType.Right,
                Font = FontAsset.secondFont
            };

            SceneManager.sceneLoaded += OnSceneLoaded;
            UpdateSettingsData += OnUpdateData;
        }

        void OnDisable()
        {
            if (Instance == this)
            {
                Instance = null;

                UpdateSettingsData -= OnUpdateData;
                SceneManager.sceneLoaded -= OnSceneLoaded;
            }
        }
        
        
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
