using UnityEngine;

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
        public static NetworkManager Singleton => (NetworkManager)singleton; 



#region Lifecycle


        public override void Awake()
        {
            base.Awake();
        }

        public override void OnDestroy()
        {
            base.OnDestroy();
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

        }

        public override void OnStopServer()
        {
            base.OnStopServer();
        }


        public override void OnStartClient()
        {
            base.OnStartClient();

        }

        public override void OnStopClient()
        {
            base.OnStopClient();
            
        }


#endregion




        public override void OnServerAddPlayer(NetworkConnectionToClient conn)
        {

        }


    }

}
