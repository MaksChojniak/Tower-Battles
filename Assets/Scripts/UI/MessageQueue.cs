using System;
using System.Collections.Generic;
using System.Threading.Tasks;
using TMPro;
using UI.Animations;
using UnityEngine;
using UnityEngine.UI;

namespace UI
{
    [Serializable]
    public class Message
    {
        public string Tittle = "";
        public List<MessageProperty> Properties = new List<MessageProperty>();
        public Action OnClickAction = null;
    }
    [Serializable]
    public class MessageProperty
    {
        public string Name;
        public string Value;
    }
    
    
    
    public class MessageQueue : MonoBehaviour
    {

        public delegate void AddMessageToQueueDelegate(params Message[] values);
        public static AddMessageToQueueDelegate AddMessageToQueue;

        public delegate void OnEnqueueMessageDelegate();
        public event OnEnqueueMessageDelegate OnEnqueueMessage;


        [SerializeField] UIAnimation OpenMessagePanel;
        [SerializeField] UIAnimation CloseMessagePanel;

        [Space(8)]
        [Header("UI Proprties")]
        [SerializeField] TMP_Text TittleText;
        [SerializeField] TMP_Text ContentText;
        [SerializeField] GameObject ExtendedButton;
        [SerializeField] Button MessageButton;


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

            bool hasInteractivity = message.OnClickAction != null;
            
            ExtendedButton.SetActive(hasInteractivity);
            
            MessageButton.interactable = hasInteractivity;
            
            MessageButton.onClick.RemoveAllListeners();
            if(hasInteractivity)
                MessageButton.onClick.AddListener( () => message.OnClickAction.Invoke() );

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

            // Debug.Log($"<color=green>Message</color>\n\n{message}");
            
            TittleText.text = tittle;
            ContentText.text = content;
            
            OpenMessagePanel.PlayAnimation();
            
            await Task.Delay( Mathf.RoundToInt( OpenMessagePanel.GetAnimationClip().length * 1000 ) );
            
            
            await Task.Delay( Mathf.RoundToInt( 2.5f * 1000 ) );
            
            
            CloseMessagePanel.PlayAnimation();
            
            await Task.Delay( Mathf.RoundToInt( CloseMessagePanel.GetAnimationClip().length * 1000 ) );
            
            messagesQueue.Dequeue();

            activeMessage = false;
            
            if(messagesQueue.Count > 0)
                OnEnqueueMessage?.Invoke();

        }
        
        
        

    }
}
