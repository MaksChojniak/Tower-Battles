using System.Linq;
using MMK;
using MMK.Settings;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;


namespace Assets.Scripts
{
    public class FontChanger : MonoBehaviour
    {
        public delegate void ChangeFontDelegate(FontAsset font);
        public static ChangeFontDelegate ChangeFont;


        TMP_FontAsset font;


        void Awake()
        {
            DontDestroyOnLoad(this.gameObject);


            ChangeFont += OnChangeFont;
            SceneManager.sceneLoaded += OnSceneLoaded;
        }
        


        void OnDestroy()
        {
            SceneManager.sceneLoaded -= OnSceneLoaded;
            ChangeFont -= OnChangeFont;
        }


        void OnSceneLoaded(Scene scene, LoadSceneMode mode)
        {
            UpdateFont();
        }

        
        void OnChangeFont(FontAsset _font)
        {
            font = GlobalSettingsManager.GetGlobalSettings.Invoke().FontAssets[(int)_font];

            UpdateFont();
        }

        
        void UpdateFont()
        {
            if(font == null)
                return;
            
            TMP_FontAsset[] fonts = GlobalSettingsManager.GetGlobalSettings.Invoke().FontAssets;

            foreach (TextMeshPro textMeshPro3D in GameObject.FindObjectsOfType<TextMeshPro>(true))
            {
                if(fonts.Contains(textMeshPro3D.font))
                    textMeshPro3D.font = font;

            }
            foreach (TextMeshProUGUI textMeshProUI in GameObject.FindObjectsOfType<TextMeshProUGUI>(true))
            {
                if (fonts.Contains(textMeshProUI.font))
                    textMeshProUI.font = font;

            }
            
        }


       
    }
}
