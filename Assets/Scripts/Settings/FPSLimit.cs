using System;
using System.Collections;
using System.Threading;
using TMPro;
using UnityEngine;
using UnityEngine.Rendering;

namespace DefaultNamespace
{
    [Serializable]
    public struct FPSData
    {
        public int FPSValue;
    }
    
    public class FPSLimit : MonoBehaviour
    {
        public FPSData[] FPSDatas;
        [SerializeField] TMP_Text FPSLimitText;

        [SerializeField] CanvasGroup LeftButton;
        [SerializeField] CanvasGroup RightButton;

        [Space(18)]
        [Header("Debug")]
        [SerializeField] int currentDataIndex;

        void Awake()
        {
            SettingsManager.ShareSettingsData += OnUpdateData;
            
        }

        void OnDestroy()
        {
            SettingsManager.ShareSettingsData -= OnUpdateData;
        }
        
        void OnUpdateData(SettingsData data)
        {
            currentDataIndex = (data.FPSLimitIndex >= FPSDatas.Length) ? FPSDatas.Length - 1 : data.FPSLimitIndex;
            OnDataChanged();
        }


        public void FPSDataChange(int direction)
        {
            if (currentDataIndex + direction < 0)
            {
                // currentDataIndex = FPSDatas.Length - 1;
            }
            else if (currentDataIndex + direction >= FPSDatas.Length)
            {
                // currentDataIndex = 0;
            }
            else
            {
                currentDataIndex += direction;
            }

            ShareData();

            OnDataChanged();
        }

        void ShareData()
        {
            SettingsData data = SettingsManager.Instance.SettingsData;

            data.FPSLimitIndex = currentDataIndex;
        
            SettingsManager.UpdateSettingsData(data);
        }

        void OnDataChanged()
        {
            if (currentDataIndex <= 0)
            {
                LeftButton.interactable = false;
                LeftButton.alpha = 0.7f;
            }
            else if (currentDataIndex >= FPSDatas.Length - 1)
            {
                RightButton.interactable = false;
                RightButton.alpha = 0.7f;
            }
            else
            {
                LeftButton.interactable = true;
                RightButton.interactable = true;
                LeftButton.alpha = 1f;
                RightButton.alpha = 1f;
            }
            
            int FPSLimitValue = currentDataIndex == FPSDatas.Length - 1 ? Screen.currentResolution.refreshRate : FPSDatas[currentDataIndex].FPSValue;
            FPSLimitText.text = $"{(currentDataIndex == FPSDatas.Length - 1 ? "Unlimited" : $"{FPSLimitValue}")} FPS";

            Debug.Log($"{FPSLimitValue}");
            Application.targetFrameRate = FPSLimitValue;

            QualitySettings.vSyncCount = 0;
        }

    }
    

}
