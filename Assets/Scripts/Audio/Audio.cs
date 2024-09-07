using System;
using UnityEngine;
using UnityEngine.UI;

namespace Audio
{
    public enum AudioType
    {
        
    }
    
    public class Audio : MonoBehaviour
    {
        

        Button button;
        
        
        void Awake()
        {
            if (this.TryGetComponent<Button>(out button))
                throw new Exception("Button is not exist");
            
            RegiserHandlers();
        }


        void OnDestroy()
        {
            UnregisterHandlers();
            
        }


        
#region Register & Unregister Handlers

        void RegiserHandlers()
        {
            button.onClick.AddListener(OnClick);
        }

        void UnregisterHandlers()
        {
            button.onClick.RemoveListener(OnClick);
        }
        
#endregion

        
        
        void OnClick()
        {
            
            
        }
        

    }
    
}
