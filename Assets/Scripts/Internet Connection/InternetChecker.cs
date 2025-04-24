using System;
using System.Collections;
using UI.Animations;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.SceneManagement;

namespace MMK.Internet_Connection
{
    public class InternetChecker : MonoBehaviour
    {
        [SerializeField] UIAnimation OpenInternetLostPanel;
        [SerializeField] UIAnimation CloseInternetLostPanel;

        [SerializeField] float checkInterval;
        
        [Space]
        [SerializeField] NetworkReachability connectionState;
        

        
        void Awake()
        {
            DontDestroyOnLoad(this.gameObject);

            this.connectionState = NetworkReachability.NotReachable;
        }

        void OnDestroy()
        {

        }



        void Start()
        {
            StartCoroutine(SimulatedUpdate());
            
        }



        IEnumerator SimulatedUpdate()
        {
            while (Application.internetReachability != NetworkReachability.NotReachable)
            {
                yield return new WaitForSecondsRealtime(checkInterval);
                //Debug.Log("[InternetChecker] Internet Connected");
            }

            StartCoroutine(OnConnectionLost());
            
        }


        IEnumerator OnConnectionLost()
        {
            //Debug.Log("[InternetChecker] Lost Internet Connection");

            yield return OpenPanelAnimation();

            StartCoroutine(RetryFindConnection());

            Time.timeScale = 0;
        }

        IEnumerator RetryFindConnection()
        {
            while(Application.internetReachability == NetworkReachability.NotReachable)
            {
                yield return new WaitForSecondsRealtime(checkInterval);
                //Debug.Log("[InternetChecker] Retry");
            }

            Time.timeScale = 1;

            yield return ClosePanelAnimation();  

            StartCoroutine(SimulatedUpdate());
        }




        IEnumerator OpenPanelAnimation() => PlayAnimation(OpenInternetLostPanel);
        IEnumerator ClosePanelAnimation() => PlayAnimation(CloseInternetLostPanel);

        IEnumerator PlayAnimation(UIAnimation anim)
        {
            if (anim == null)
                yield break;

            anim.PlayAnimation();
            yield return anim.Wait();
            //yield return new WaitForSecondsRealtime(anim.animationLenght);
        }


    }
}
