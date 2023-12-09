using DefaultNamespace;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using TMPro;
using UnityEngine;
using UnityEngine.TextCore.Text;

namespace Assets.Scripts.Settings
{
    [Serializable]
    public enum FontAsset
    {
        baseFont,
        secondFont

    }

    public class Font : MonoBehaviour
    {
        [SerializeField] FontAsset FontAsset;

        [SerializeField] TMP_FontAsset baseFontAsset;
        [SerializeField] TMP_FontAsset secondFontAsset;


        [SerializeField] TMP_Text FontText;

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
            FontAsset = data.Font;
            UpdateUI();
        }

        public void ChangeFont()
        {
            if (FontAsset == FontAsset.baseFont)
                FontAsset = FontAsset.secondFont;
            else
                FontAsset = FontAsset.baseFont;

            ShareData();

            UpdateUI();
        }

        void ShareData()
        {
            SettingsData data = SettingsManager.Instance.SettingsData;

            data.Font = FontAsset;

            SettingsManager.UpdateSettingsData(data);
        }

        void UpdateUI()
        {
            if (FontAsset == FontAsset.baseFont)
                FontText.text = $"{baseFontAsset.name.ToString()}";
            else
                FontText.text = $"{secondFontAsset.name.ToString()}";


            RightButton.interactable = true;
            RightButton.alpha = 1f;
            LeftButton.interactable = true;
            LeftButton.alpha = 1f;

            if (FontAsset == FontAsset.baseFont)
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
