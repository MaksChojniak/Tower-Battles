using System;
using System.Collections;
using UnityEngine;
using UnityEngine.SceneManagement;

namespace MMK
{
    public class InternetChecker : MonoBehaviour
    {
        public delegate void OnNetworkConnectionLostDelegate();
        public static event OnNetworkConnectionLostDelegate OnNetworkConnectionLost;
        
        public delegate void OnNetworkConnectionFindDelegate();
        public static event OnNetworkConnectionFindDelegate OnNetworkConnectionFind;
        
        
        static InternetChecker Instance;

        
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




#region Register & Unregister Handlers

        void RegisterHanlders()
        {
            OnNetworkConnectionLost += OnLostConnection;
            
            OnNetworkConnectionFind += OnFindConnection;

        }

        void UnregisterHanlders()
        {
            OnNetworkConnectionFind -= OnFindConnection;
            
            OnNetworkConnectionLost -= OnLostConnection;
            
        }
        
#endregion
        
        
        void Start()
        {
            StartCoroutine(CheckingConectionState());
        }


        NetworkReachability networkReachability = NetworkReachability.NotReachable;
        IEnumerator CheckingConectionState()
        {
            while (true)
            {
                yield return new WaitForSeconds(2);
                
                if (networkReachability == Application.internetReachability) 
                    continue;

                if(Application.internetReachability == NetworkReachability.NotReachable)
                    OnNetworkConnectionLost?.Invoke();
                else
                    OnNetworkConnectionFind?.Invoke();

                networkReachability = Application.internetReachability;
            }

        }

#region States

        DateTime lastConnectionLostDate = DateTime.Now;
        const float timeout = 15;
        
        void OnLostConnection()
        {
            Debug.Log("You Lost Internet Connection");
            lastConnectionLostDate = DateTime.Now;
        }

        void OnFindConnection()
        {
            Debug.Log("You Find Internet Connection");
                
            TimeSpan notConnectedTime = DateTime.Now - lastConnectionLostDate;
            if (notConnectedTime.TotalSeconds > timeout)
                SceneManager.LoadSceneAsync(GlobalSettingsManager.GetGlobalSettings.Invoke().loadingScene);
        }
        
#endregion

    }
}
