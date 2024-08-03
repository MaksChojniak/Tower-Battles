using DefaultNamespace;
using System;
using MMK;
using MMK.Settings;
using TMPro;
using UnityEngine;


namespace Assets.Scripts.Settings
{

    
    public class HandMode : MonoBehaviour
    {

        [Header("Properties")]
        [SerializeField] HandModeType HandModeType;

        
        
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
            SettingsManager.ShareHandModeType += OnShareHandModeType;
        }
        
        void UnregisterHandlers()
        {
            SettingsManager.ShareHandModeType -= OnShareHandModeType;
        }
        
#endregion


        void OnShareHandModeType(HandModeType handModeType)
        {
            // if(HandModeType == handModeType)
            //     return;

            HandModeType = handModeType;
            
            OnDataChanged();
        }


        void OnDataChanged()
        {
            TowerSpawner.HandMode = HandModeType;

            UpdateUI();
        }



        public void ChangeData(int direction)
        {
            int index = (int)HandModeType;
            index += direction;

            SettingsManager.SetHandModeType((HandModeType)index);
        }
        
        
        
        void UpdateUI()
        {
            LeftButton.interactable = HandModeType == HandModeType.Right;
            LeftButton.alpha = LeftButton.interactable ? 1f : 0.7f;
                
            RightButton.interactable = HandModeType == HandModeType.Left;
            RightButton.alpha = RightButton.interactable ? 1f : 0.7f;


            string text = HandModeType.ToString();
            ValueText.text = text;

        }
    }
}
