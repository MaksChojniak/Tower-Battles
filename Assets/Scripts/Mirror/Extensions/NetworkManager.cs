using System.Linq;
using System.Threading.Tasks;
using Newtonsoft.Json;
using Player;
using UnityEngine;

namespace Mirror.Extensions
{
    
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

        
        

#region Network Messages


        public struct ClientSpawnPlayerCommand : NetworkMessage {}


        public struct OnClientSpawnPlayerCommand : NetworkMessage
        {
            public uint netID;
            public string PlayerName;
        }
        
        
        public struct ServerSpawnPlayerCommand : NetworkMessage
        {
            public string PlayerData_JSON;
        }
        
        
#endregion

        
        
        
        
        public string playerName;



#region Lifecycle
        
        
        public override void Awake()
        {
            base.Awake();

            GameObject player = Instantiate(playerPrefab, Vector3.zero, Quaternion.identity);
            player.name = playerName;
        }

        

        public override void OnClientConnect()
        {
            base.OnClientConnect();

            RegisterCustomSpawnHandlers();
        }
        
        public override void OnClientDisconnect()
        {
            UnregisterCustomSpawnHandlers();

            OnClientRemovePlayer();
            
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
        }

        public override void OnStopClient()
        {
            base.OnStopClient();
            
            OnClientStopped?.Invoke();
        }
        
        
#endregion


        

#region Adding Player

        void RegisterCustomSpawnHandlers()
        {
            NetworkClient.RegisterHandler<ClientSpawnPlayerCommand>(ClientSpawnPlayer);
            NetworkServer.RegisterHandler<ServerSpawnPlayerCommand>(ServerSpawnPlayer);
            NetworkClient.RegisterHandler<OnClientSpawnPlayerCommand>(OnClientSpawnPlayer);
            
        }
        
        void UnregisterCustomSpawnHandlers()
        {
            NetworkClient.UnregisterHandler<OnClientSpawnPlayerCommand>();
            NetworkClient.UnregisterHandler<ServerSpawnPlayerCommand>();
            NetworkServer.UnregisterHandler<ClientSpawnPlayerCommand>();
            
        }


        public override void OnServerAddPlayer(NetworkConnectionToClient conn)
        {
            conn.Send(new ClientSpawnPlayerCommand());
            
            // TODO Update on clients players joined before new player
            foreach (var connection in NetworkServer.connections.Values)
            {
                NetworkIdentity identity = connection.identity;
                
                if(identity == null)
                    continue;
                
                GameObject player = identity.gameObject;

                conn.Send(new OnClientSpawnPlayerCommand()
                {
                    netID = identity.netId,
                    PlayerName = player.name,
                });
            }
            
        }

        
        public void ClientSpawnPlayer(ClientSpawnPlayerCommand message)
        {
            PlayerController player = PlayerController.GetLocalPlayer?.Invoke();

            NetworkClient.Send(new ServerSpawnPlayerCommand()
            {
                PlayerData_JSON = JsonConvert.SerializeObject(player.PlayerData)
            } );
            
            Destroy(player.gameObject);
        }
        
        
        public void ServerSpawnPlayer(NetworkConnectionToClient conn, ServerSpawnPlayerCommand message)
        {
            GameObject player = Instantiate(playerPrefab, Vector3.zero, Quaternion.identity);
            DontDestroyOnLoad(player);
            
            player.name = $"Server Player  [connId={conn.connectionId}]";
            
            NetworkIdentity identity = player.GetComponent<NetworkIdentity>();

            
            PlayerController playerController = player.GetComponent<PlayerController>();
            playerController.PlayerData = JsonConvert.DeserializeObject<PlayerData>(message.PlayerData_JSON);

            NetworkServer.AddPlayerForConnection(conn, player);
            
            NetworkServer.SendToAll(new OnClientSpawnPlayerCommand()
            {
                netID = identity.netId,
                PlayerName = player.name,
            } );
        }

        
        public async void OnClientSpawnPlayer(OnClientSpawnPlayerCommand message)
        {
            if(NetworkServer.active)
                return;

            Debug.Log($"{nameof(OnClientSpawnPlayer)}");

            NetworkIdentity identity = null;
            while (identity == null)
            {
                identity = GameObject.FindObjectsOfType<NetworkIdentity>().FirstOrDefault(netIdentity => netIdentity.netId == message.netID);
                
                await Task.Yield();
            }
                
            GameObject player = identity.gameObject;
            DontDestroyOnLoad(player);

            player.name = message.PlayerName;
            // player.name = $"Client Player  [connId={NetworkClient.connection.connectionId}]";
        }
        
        
#endregion

        
        

        void OnClientRemovePlayer()
        {
            NetworkIdentity identity = NetworkClient.connection.identity;
            identity.sceneId = Utils.GetTrueRandomUInt();
            
            GameObject player = identity.gameObject;
            
            player.SetActive(true);
            player.name = playerName;
            
        }

        


    }
}
