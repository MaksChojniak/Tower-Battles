using System;
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
            currentDataIndex = FPSDatas.Length - 1;
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

            OnDataChanged();
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
            
            int FPSLimitValue = FPSDatas[currentDataIndex].FPSValue;
            FPSLimitText.text = $"{(FPSLimitValue <= 0 ? "Unlimited" : $"{FPSLimitValue}")} FPS";

            Application.targetFrameRate = FPSLimitValue;
        }
    }
}
