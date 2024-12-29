using System;
using System.Collections;
using UnityEngine;
using UnityEngine.SceneManagement;

namespace MMK.Internet_Connection
{
    public class InternetChecker : MonoBehaviour
    {
        public delegate void OnNetworkConnectionLostDelegate();
        public static event OnNetworkConnectionLostDelegate OnNetworkConnectionLost;
        
        public delegate void OnNetworkConnectionFindDelegate();
        public static event OnNetworkConnectionFindDelegate OnNetworkConnectionFind;

        public delegate void OnChangeConnectionStateDelegate();
        event OnChangeConnectionStateDelegate OnChangeConnectionState;
        
        
        static InternetChecker Instance;



        [SerializeField] float checkInterval;
        
        [Space]
        [SerializeField] NetworkReachability connectionState;
        

        
        void Awake()
        {
            if (Instance != null)
            {
                Destroy(this.gameObject);
                return;
            }

            Instance = this;
            DontDestroyOnLoad(this.gameObject);
            
            RegisterHanlders();
        }

        void OnDestroy()
        {
            if(Instance != this)
                return;
            
            UnregisterHanlders();
        }

        void Start()
        {
            StartCoroutine(SimulatedUpdate());
            
        }




#region Register & Unregister Handlers

        void RegisterHanlders()
        {
            OnChangeConnectionState += OnConnectionStateChanged;

        }

        void UnregisterHanlders()
        {
            OnChangeConnectionState += OnConnectionStateChanged;

        }
        
#endregion

        
        IEnumerator SimulatedUpdate()
        {
            while (true)
            {
                yield return new WaitForSeconds(1f / checkInterval);

                NetworkReachability currentConnectionState = Application.internetReachability;
                if (currentConnectionState != connectionState)
                {
                    connectionState = currentConnectionState;
                    OnChangeConnectionState?.Invoke();
                }
                
            }
            
        }


        void OnConnectionStateChanged()
        {
            
        }






    }
}
