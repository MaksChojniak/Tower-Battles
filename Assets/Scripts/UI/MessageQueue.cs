using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Threading.Tasks;
using TMPro;
using UI.Animations;
using UnityEngine;
using UnityEngine.Audio;
using UnityEngine.UI;

namespace UI
{
    public enum MessageType
    {
        Normal,
        BattlepassProgress,
        GameReward,

    }
    
    [Serializable]
    public class Message
    {
        public string Tittle = "";
        public List<MessageProperty> Properties = new List<MessageProperty>();
        public Action OnClickAction = null;
        public MessageType MessageType = MessageType.Normal;
    }
    [Serializable]
    public class MessageProperty
    {
        public string Name;
        public string Value;
    }


    [Serializable]
    public class MessageObjectUI
    {
        public GameObject MessageObject;
        [Space]
        public TMP_Text TittleText;
        public TMP_Text ContentText;
        [Space]
        public GameObject ExtendedMessagePanel;
        public Button MessageButton;
    }


    public class MessageQueue : MonoBehaviour
    {

        public delegate void AddMessageToQueueDelegate(params Message[] values);
        public static AddMessageToQueueDelegate AddMessageToQueue;

        public delegate void OnEnqueueMessageDelegate();
        public event OnEnqueueMessageDelegate OnEnqueueMessage;


        [SerializeField] UIAnimation OpenMessagePanel;
        [SerializeField] UIAnimation CloseMessagePanel;

        [Space(12)]
        [Header("UI Proprties")]
        [Space]
        [SerializeField] MessageObjectUI NormalMessage;
        [Space]
        [SerializeField] GameObject BattlepassProgressMessage;
        [Space]
        [SerializeField] MessageObjectUI GameRewardMessage;
        GameObject[] MessagesPanels => new[] {NormalMessage.MessageObject, BattlepassProgressMessage, GameRewardMessage.MessageObject};


        [SerializeField] readonly Queue<Message> messagesQueue = new Queue<Message>();



        void Awake()
        {   
            DontDestroyOnLoad(this.gameObject);

            RegisterHandlers();

        }

        void OnDestroy()
        {
            UnregisterHandlers();

        }



#region Register & Unregister Handlers

        void RegisterHandlers()
        {
            AddMessageToQueue += AddMessageToQueueProcess;
            OnEnqueueMessage += OnAddMessageToQueue;

        }

        void UnregisterHandlers()
        {
            OnEnqueueMessage -= OnAddMessageToQueue;
            AddMessageToQueue -= AddMessageToQueueProcess;

        }

#endregion


        void AddMessageToQueueProcess(params Message[] values)
        {
            foreach (var value in values)
            {
                messagesQueue.Enqueue(value);
            }

            OnEnqueueMessage?.Invoke();

        }


        bool activeMessage;
        async void OnAddMessageToQueue()
        {
            if (activeMessage)
                return;

            activeMessage = true;

            Message message = messagesQueue.Peek();
            
            await ShowMessage(message);


            messagesQueue.Dequeue();

            activeMessage = false;

            if (messagesQueue.Count > 0)
                OnEnqueueMessage?.Invoke();

        }



#region Show Message

        
        async Task ShowMessage(Message message)
        {
            MessagePanelByType(message);
            
            
            OpenMessagePanel.PlayAnimation();

            await OpenMessagePanel.WaitAsync();
            //await Task.Delay(Mathf.RoundToInt(OpenMessagePanel.animationLenght * 1000));


            await Task.Delay(Mathf.RoundToInt(2.5f * 1000));


            CloseMessagePanel.PlayAnimation();

            await CloseMessagePanel.WaitAsync();
            //await Task.Delay(Mathf.RoundToInt(CloseMessagePanel.animationLenght * 1000));
        }


        void MessagePanelByType(Message message)
        {
            foreach (var panels in MessagesPanels)
                panels.SetActive(false);
            
            switch (message.MessageType)
            {
                case MessageType.Normal:
                    SetupMessage(NormalMessage, message);
                    break;
                case MessageType.BattlepassProgress:
                    SetupBattlepassMessage(BattlepassProgressMessage, message);
                    break;
                case MessageType.GameReward:
                    SetupMessage(GameRewardMessage, message);
                    break;
                default:
                    throw new NullReferenceException($"Don't have that message type");
            }
            
        }



        void SetupMessage(MessageObjectUI messageObjectUI, Message message)
        {
            string tittle = message.Tittle;
            string content = "";
            foreach (var value in message.Properties)
            {
                if (string.IsNullOrEmpty(value.Name))
                    continue;

                if (!string.IsNullOrEmpty(content))
                    content += "\n";

                content += value.Name;

                if (!string.IsNullOrEmpty(value.Value))
                    content += $": {value.Value}";

            }
            
            
            bool hasInteractivity = message.OnClickAction != null;
            
            RegisterOnClick(messageObjectUI.ExtendedMessagePanel, messageObjectUI.MessageButton, hasInteractivity, message.OnClickAction);
            
            messageObjectUI.MessageObject.SetActive(true);

            messageObjectUI.TittleText.text = tittle;
            messageObjectUI.ContentText.text = content;
        }


        void SetupBattlepassMessage(GameObject messageObjectUI, Message message)
        {
            messageObjectUI.GetComponent<BattlepassMessage>().ShowMessage(message, OpenMessagePanel);

            messageObjectUI.SetActive(true);
        }


        void RegisterOnClick(GameObject extendedMessage, Button button, bool hasInteractivity, Action onClick = null)
        {
            extendedMessage.SetActive(hasInteractivity);

            button.interactable = hasInteractivity;

            button.onClick.RemoveAllListeners();
            if (hasInteractivity)
                button.onClick.AddListener(() => onClick?.Invoke());
        }
        
        
  #endregion


    }
}
