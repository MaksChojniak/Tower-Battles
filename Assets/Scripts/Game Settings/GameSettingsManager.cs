using System;
using UnityEngine;

namespace MMK
{
    
    
    public class GameSettingsManager : MonoBehaviour
    {
        public static GameSettingsManager Instance { get; set; }


        public delegate GameSettings GetGameSettingsDelegate();
        public static GetGameSettingsDelegate GetGameSettings;


        [SerializeField] GameSettings settings;


        void Awake()
        {
            if (Instance != null)
            {
                Destroy(this.gameObject);
                return;
            }

            Instance = this;
            DontDestroyOnLoad(Instance.gameObject);
            
            
            RegisterHandlers();
            
        }

        void OnDestroy()
        {
            UnregisterHandlers();
            
            if (Instance == this)
                Instance = null;
            
        }

        void Start()
        {
            
        }


#region Register & Unregister Handlers

        void RegisterHandlers()
        {
            GetGameSettings += OnGetGameSettings;
            
        }
        
        void UnregisterHandlers()
        {
            GetGameSettings -= OnGetGameSettings;

        }
        
#endregion


        GameSettings OnGetGameSettings() => settings;



    }
}
