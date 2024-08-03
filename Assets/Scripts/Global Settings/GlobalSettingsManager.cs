using System;
using UnityEngine;

namespace MMK
{
    
    
    public class GlobalSettingsManager : MonoBehaviour
    {
        public delegate GlobalSettings GetGameSettingsDelegate();
        public static GetGameSettingsDelegate GetGlobalSettings;


        [SerializeField] GlobalSettings settings;

        

        void Awake()
        {
            DontDestroyOnLoad(this.gameObject);
            
            
            RegisterHandlers();
            
        }

        void OnDestroy()
        {
            UnregisterHandlers();

        }

        void Start()
        {
            
        }


#region Register & Unregister Handlers

        void RegisterHandlers()
        {
            GetGlobalSettings += OnGetGlobalSettings;
            
        }
        
        void UnregisterHandlers()
        {
            GetGlobalSettings -= OnGetGlobalSettings;

        }
        
#endregion


        GlobalSettings OnGetGlobalSettings() => settings;



    }
}
