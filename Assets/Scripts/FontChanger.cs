using Assets.Scripts.Settings;
using DefaultNamespace;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using TMPro;
using UnityEngine;
using static UnityEngine.GraphicsBuffer;

namespace Assets.Scripts
{
    public class FontChanger : MonoBehaviour
    {
        public static FontChanger Instance;

        [SerializeField] TMP_FontAsset baseFontAsset;
        [SerializeField] TMP_FontAsset secondFontAsset;
        
        [SerializeField] FontAsset actuallyFont;


        private void Awake()
        {
            if(Instance != null)
            {
                Destroy(this.gameObject);
                return;
            }

            DontDestroyOnLoad(this.gameObject);
            Instance = this;

            SettingsManager.ShareSettingsData += UpdateFont;
        }

        private void OnDestroy()
        {
            if(Instance == this)
            {
                SettingsManager.ShareSettingsData -= UpdateFont;
            }   
        }


        private void Update()
        {
            TMP_FontAsset fontAsset = baseFontAsset;

            if (actuallyFont == FontAsset.baseFont)
                fontAsset = baseFontAsset;
            else
                fontAsset = secondFontAsset;

            ChangeFont(fontAsset);

        }


        void UpdateFont(SettingsData settings)
        {
            actuallyFont = settings.Font;
        }


        void ChangeFont(TMP_FontAsset font)
        {

            foreach (TextMeshPro textMeshPro3D in GameObject.FindObjectsOfType<TextMeshPro>())
            {
                if(textMeshPro3D.font == baseFontAsset || textMeshPro3D.font == secondFontAsset)
                    textMeshPro3D.font = font;
            }
            foreach (TextMeshProUGUI textMeshProUi in GameObject.FindObjectsOfType<TextMeshProUGUI>())
            {
                if (textMeshProUi.font == baseFontAsset || textMeshProUi.font == secondFontAsset)
                    textMeshProUi.font = font;
            }
        }
    }
}
