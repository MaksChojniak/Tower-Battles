using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Reflection;
using System.Runtime.InteropServices;
using System.Runtime.Serialization.Formatters.Binary;
using System.Threading.Tasks;
using Newtonsoft.Json;
using Player;
using Unity.VisualScripting;
using UnityEditorInternal.Profiling;
using UnityEngine;
using UnityEngine.Rendering;

namespace Mirror.Extensions
{

    public enum LobbyType
    {
        PVP,
        COOP
    }


    // public struct AddPlayerOnClient : NetworkMessage {} 
    

    [AddComponentMenu("Network/Custom Network Manager")]
    public class NetworkManager : Mirror.NetworkManager
    {
        public delegate void OnServerStartedDelegate();
        public static OnServerStartedDelegate OnServerStarted;

        public delegate void OnServerStoppedDelegate();
        public static OnServerStoppedDelegate OnServerStopped;


        public delegate void OnClientStartedDelegate();
        public static OnClientStartedDelegate OnClientStarted;

        public delegate void OnClientStoppedDelegate();
        public static OnClientStoppedDelegate OnClientStopped;




#region Lifecycle


        public override void Awake()
        {
            base.Awake();
        }


        public override void OnClientConnect()
        {
            base.OnClientConnect();
        }

        public override void OnClientDisconnect()
        {

            base.OnClientDisconnect();
        }



        public override void OnStartServer()
        {
            base.OnStartServer();

            OnServerStarted?.Invoke();
        }

        public override void OnStopServer()
        {
            base.OnStopServer();

            OnServerStopped?.Invoke();
        }



        public override void OnStartClient()
        {
            base.OnStartClient();

            OnClientStarted?.Invoke();
            
            // NetworkClient.RegisterHandler<AddPlayerOnClient>(OnClientAddPlayer);
        }

        public override void OnStopClient()
        {
            // NetworkClient.UnregisterHandler<AddPlayerOnClient>();
            
            base.OnStopClient();

            OnClientStopped?.Invoke();
        }


#endregion





        public override void OnServerAddPlayer(NetworkConnectionToClient conn)
        {
            GameObject playerObject = Instantiate(playerPrefab, Vector3.zero, Quaternion.identity);
            DontDestroyOnLoad(playerObject);
            
            NetworkIdentity playerIdentity = playerObject.GetComponent<NetworkIdentity>();


            // base.OnServerAddPlayer(conn);

            // conn.Send(new AddPlayerOnClient());
        }

        
        // void OnClientAddPlayer(AddPlayerOnClient networkMessage)
        // {
        //    
        // }
        

    }

}
