using System;
using System.Linq;
using DefaultNamespace;
using MMK.ScriptableObjects;
using Player;
using UI.Animations;
using UnityEngine;
using UnityEngine.UI;

namespace UI
{
    public class StartGame : MonoBehaviour
    {


        [SerializeField] Button StartButton;
        
        [SerializeField] UIAnimation OpenLobbyAnimation;

        bool hasTowerInDeck;
        
        
        void Awake()
        {
            RegisterHandlers();

            OnDeckChanged(PlayerController.GetLocalPlayerData?.Invoke().DeckSerializable);
        }

        void OnDestroy()
        {
            UnregisterHandlers();
            
        }


        void Update()
        {
            StartButton.interactable = hasTowerInDeck;

        }



#region Regiser & Unregister Handlers

        void RegisterHandlers()
        {
            PlayerData.OnDeckChanged += OnDeckChanged;
            
        }

        void UnregisterHandlers()
        {
            PlayerData.OnDeckChanged -= OnDeckChanged;
            
        }
        
#endregion




        public void GoToLobby()
        {
            PlayerData data = PlayerController.GetLocalPlayerData?.Invoke();
            
            hasTowerInDeck = data != null && 
                             data.DeckSerializable != null &&
                             data.DeckSerializable.Any(tower => tower != null && !string.IsNullOrEmpty(tower.ID));

            if (hasTowerInDeck)
                OpenLobbyAnimation.PlayAnimation();
            else
                WarningSystem.ShowWarning(WarningSystem.WarningType.DeckIsEmpty);
        }


            void OnDeckChanged(TowerSerializable[] deckserializable) => hasTowerInDeck = deckserializable.Any(tower => tower != null && !string.IsNullOrEmpty(tower.ID));
        


    }
}
