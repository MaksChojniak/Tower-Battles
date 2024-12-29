using System;
using System.Collections;
using System.Threading.Tasks;
using kcp2k;
using UI.Animations;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.UI;

namespace Mirror.Extensions
{
    
    public class LobbyFinder : MonoBehaviour
    {
        [SerializeField] ConnectionFinder ConnectionFinder;

        [Space]
        [Tooltip("Finding exisitng lobby Timeout in seconds")]
        [Range(0, 30)]
        [SerializeField] int findingTimeout;
        [Space]
        [SerializeField] GameObject SearchingLobbyPrefab;
        GameObject currentSearchingLobby = null;
        [SerializeField] GameObject WaitingForPlayersPrefab;
        GameObject currentWaitingForPlayers = null;
        
        void Awake()
        {
            
            
        }

        void OnDestroy()
        {
            if(!NetworkClient.active)
                ConnectionFinder.StopDiscovery();
            
        }




        bool connectionFinded;
        public void OnFindConnection(ServerResponse discoveredServer)
        {
            if(NetworkClient.active)
                return;

            connectionFinded = true;

            StopDiscovery();
            
            NetworkManager.Singleton.networkAddress = discoveredServer.uri.Host;
            ((KcpTransport)NetworkManager.Singleton.transport).port = (ushort)discoveredServer.uri.Port;
            
            NetworkManager.Singleton.StartClient();
        }

        
        
        public async void StartGame()
        {
            findingCanceled = false;
            connectionFinded = false;
            
            Discover();

            await Task.Delay(Mathf.RoundToInt(findingTimeout * 1000f));
            
            if(NetworkClient.active || connectionFinded || findingCanceled)
                return;

            StopDiscovery();
            
            NetworkManager.Singleton.StartHost();
            Advertise();

        }
        
        

        void Advertise()
        {
            currentWaitingForPlayers = Instantiate(WaitingForPlayersPrefab, Vector3.zero, Quaternion.identity);
            currentWaitingForPlayers.GetComponentInChildren<Button>().onClick.AddListener(StopDiscoveringAndAdvertising);
            
            ConnectionFinder.Advertise();
        }

        void StopAdvertising()
        {
            ConnectionFinder.StopDiscovery();
            
            if(currentWaitingForPlayers == null)
                return;
            
            // UIAnimation closeAnimation = currentWaitingForPlayers.GetComponent<UIAnimation>();
            // await Task.Delay(Mathf.RoundToInt(closeAnimation.animationLenght *  1000f));
            //
            // Destroy(currentWaitingForPlayers);
            // currentWaitingForPlayers = null;
        }
        

        void Discover()
        {
            currentSearchingLobby = Instantiate(SearchingLobbyPrefab, Vector3.zero, Quaternion.identity);
            currentSearchingLobby.GetComponentInChildren<Button>().onClick.AddListener(StopDiscoveringAndAdvertising);
            
            ConnectionFinder.Discover();
        }

        async void StopDiscovery()
        {
            ConnectionFinder.StopDiscovery();

            if(currentSearchingLobby == null)
                return;
            
            // UIAnimation closeAnimation = currentSearchingLobby.GetComponent<UIAnimation>();
            // await Task.Delay(Mathf.RoundToInt(closeAnimation.animationLenght *  1000f));
            //
            // Destroy(currentSearchingLobby);
            // currentSearchingLobby = null;
        }



        bool findingCanceled;
        void StopDiscoveringAndAdvertising()
        {
            findingCanceled = true;
            
            if(NetworkServer.active)
                NetworkManager.Singleton.StopHost();
            
            if(NetworkClient.active)
                NetworkManager.Singleton.StopClient();
            
            StopAdvertising();
            StopDiscovery();
        }




    }
    
    
}
