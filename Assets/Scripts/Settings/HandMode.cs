using DefaultNamespace;
using System;
using TMPro;
using UnityEngine;


namespace Assets.Scripts.Settings
{
    [Serializable]
    public enum HandModeType
    {
        Left,
        Right
    }

    public class HandMode : MonoBehaviour
    {

        [SerializeField] HandModeType HandModeType;

        [SerializeField] TMP_Text HandModeText;

        [SerializeField] CanvasGroup LeftButton;
        [SerializeField] CanvasGroup RightButton;

        private void Awake()
        {
            SettingsManager.ShareSettingsData += OnUpdateData;
        }

        private void OnDestroy()
        {
            SettingsManager.ShareSettingsData -= OnUpdateData;
        }

        void OnUpdateData(SettingsData data)
        {
            HandModeType = data.HandMode;
            UpdateUI();
        }

        public void ChangeHandMode()
        {
            if (HandModeType == HandModeType.Left)
                HandModeType = HandModeType.Right;
            else
                HandModeType = HandModeType.Left;

            ShareData();

            UpdateUI();
        }

        void ShareData()
        {
            SettingsData data = SettingsManager.Instance.SettingsData;

            data.HandMode = HandModeType;

            SettingsManager.UpdateSettingsData(data);
        }

        void UpdateUI()
        {
            HandModeText.text = $"{HandModeType.ToString()} Hand";


            RightButton.interactable = true;
            RightButton.alpha = 1f;
            LeftButton.interactable = true;
            LeftButton.alpha = 1f;

            if (HandModeType == HandModeType.Right)
            { 
                LeftButton.interactable = false;
                LeftButton.alpha = 0.7f;
            }
            else
            {
                RightButton.interactable = false;
                RightButton.alpha = 0.7f;
            }
        }
    }
}
