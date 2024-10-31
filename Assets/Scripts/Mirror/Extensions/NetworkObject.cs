using System;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

namespace Mirror.Extensions
{
    [Serializable]
    public struct NetworkObjectData
    {
        public string Name;
        public uint NetID;
        public int[] SiblingIndexes;
    }
    
    public class NetworkObject : NetworkBehaviour
    {
        public SyncList<NetworkObjectData> ChildNetworkObjects = new SyncList<NetworkObjectData>();

        


        public override void OnStartServer()
        {
            base.OnStartServer();

            NetworkObject networkObject = this.transform.GetComponentInParent<NetworkObject>();
            if(networkObject != null)
                networkObject.AddNewNetworkObject(this);
        }

        public override void OnStopServer()
        {
            base.OnStopServer();
        }


        
        public override void OnStartClient()
        {
            base.OnStartClient();
            
            ChildNetworkObjects.OnChange += OnChildNetworkObjectsChanged;

            foreach (var childNetworkObject in ChildNetworkObjects)
            {
                SyncNetworkObject(childNetworkObject);
            }
        }

        public override void OnStopClient()
        {
            ChildNetworkObjects.OnChange += OnChildNetworkObjectsChanged;
            
            base.OnStopClient();
        }



        
        void OnChildNetworkObjectsChanged(SyncList<NetworkObjectData>.Operation operation, int index, NetworkObjectData value)
        {
            if (operation == SyncList<NetworkObjectData>.Operation.OP_ADD)
                SyncNetworkObject(value);

        }


        void SyncNetworkObject(NetworkObjectData networkObjectData)
        {
            NetworkObject[] networkObjects = GameObject.FindObjectsOfType<NetworkObject>(true);
            
            NetworkObject targetNetworkObject = networkObjects.FirstOrDefault(networkObject => networkObject.netId == networkObjectData.NetID);
            if(targetNetworkObject == null)
                return;

            // Set Name
            targetNetworkObject.gameObject.name = networkObjectData.Name;
            
            // Set Parent And Hierarchy Position
            Transform targetNetworkObjectParent = this.transform;
            for (int i = networkObjectData.SiblingIndexes.Length-1; i > 0; i--)
            {
                targetNetworkObjectParent = targetNetworkObjectParent.GetChild(networkObjectData.SiblingIndexes[i]);
                
                Debug.Log($"sync siblind {i} index: {networkObjectData.SiblingIndexes[i]}");
            }
            targetNetworkObject.transform.SetParent(targetNetworkObjectParent);
            targetNetworkObject.transform.SetSiblingIndex(networkObjectData.SiblingIndexes[0]);

            Debug.Log($"Network Object Synced [ID:{networkObjectData.NetID}, Name:{networkObjectData.Name}]");
        }
        


        public void AddNewNetworkObject(NetworkObject networkObject)
        {
            List<int> siblingIndexes = new List<int>();
            
            Transform objectTransform = networkObject.transform;
            while (!objectTransform.TryGetComponent<NetworkObject>(out NetworkObject parentNetworkObject) && parentNetworkObject == this)
            {
                siblingIndexes.Add(objectTransform.GetSiblingIndex());
                objectTransform = objectTransform.parent;
                Debug.Log($"siblind index: {objectTransform.GetSiblingIndex()}");
            }
            
            NetworkObjectData networkObjectData = new NetworkObjectData()
            {
                Name = networkObject.gameObject.name,
                NetID = networkObject.netId,
                SiblingIndexes = siblingIndexes.ToArray(),
            };
            
            ChildNetworkObjects.Add(networkObjectData);
        }

    }
}
