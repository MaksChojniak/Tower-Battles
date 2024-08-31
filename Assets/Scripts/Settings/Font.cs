using System;
using System.Linq;
using MMK;
using MMK.Settings;
using TMPro;
using UnityEngine;

namespace Assets.Scripts.Settings
{

    public class Font : MonoBehaviour
    {
        
        [Header("Properties")]
        [SerializeField] FontAsset FontAsset;

        
        
        [Space(12)]
        [Header("UI Properties")]
        [SerializeField] TMP_Text ValueText;

        [SerializeField] CanvasGroup LeftButton;
        [SerializeField] CanvasGroup RightButton;

        
        
        
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
            SettingsManager.ShareFontAsset += OnShareFontAsset;
        }
        
        void UnregisterHandlers()
        {
            SettingsManager.ShareFontAsset -= OnShareFontAsset;
        }
        
#endregion


        void OnShareFontAsset(FontAsset fontAsset)
        {
            // if(FontAsset == fontAsset)
            //     return;

            FontAsset = fontAsset;
            
            OnDataChanged();
        }


        void OnDataChanged()
        {
            FontChanger.ChangeFont(FontAsset);

            UpdateUI();
        }



        public void ChangeData(int direction)
        {
            int index = (int)FontAsset;
            index += direction;

            SettingsManager.SetFontAsset((FontAsset)index);
        }
        
        
        
        void UpdateUI()
        {
            int fontAssetsCount = GlobalSettingsManager.GetGlobalSettings.Invoke().FontAssets.Length;
            int index = (int)FontAsset;

            
            LeftButton.interactable = (index - 1 >= 0);
            LeftButton.alpha = LeftButton.interactable ? 1f : 0.7f;
                
            RightButton.interactable = (index  + 1 < fontAssetsCount);
            RightButton.alpha = RightButton.interactable ? 1f : 0.7f;


            string text = FontAsset.ToString();
            text = text.Replace('_', ' ');
            // Debug.Log(text.Replace('_', ' '));
            ValueText.text = text;

        }
        

    }
}
