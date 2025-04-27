using MMK;
using Player;
using System.Collections.Generic;
using UI;
using UnityEngine;

namespace Social_Medias
{
    public enum SocialMediaType 
    {
        FACEBOOK,
        INSTAGRAM,
        TIKTOK,
        YOUTUBE,
        DISCORD
    }

    public class SocialMedia : MonoBehaviour
    {
        [SerializeField] bool canBeRemoved;

        [Space]
        [SerializeField] SocialMediaType mediaType;


        void Awake()
        {
            if (IsVisited(this.mediaType))
                Hide();
        }

        void OnDestroy()
        {
            
        }


        public void Open()
        {
            string url = GetUrlByType(this.mediaType);

            if (string.IsNullOrEmpty(url))
                return;
            
            Application.OpenURL(url);

            if (!canBeRemoved)
                return;

            PlayerPrefs.SetInt(mediaType.ToString(), 1);
            PlayerPrefs.Save();

            ShowRewardMessage(15);

            Hide();
        }


        void Hide() => Destroy(this.transform.parent.gameObject);
        

        bool IsVisited(SocialMediaType mediaType) => PlayerPrefs.HasKey(mediaType.ToString());


        void ShowRewardMessage(long coins)
        {
            List<MessageProperty> properties = new List<MessageProperty>()
            { 
                (new MessageProperty() { Name = "Coins", Value = $"{StringFormatter.GetCoinsText(coins, true, "66%")}" })
            };

            Message message = null;

            if (properties.Count > 0)
            {
                message = new Message();

                message.MessageType = MessageType.Normal;
                message.Tittle = "Social Media Rewards";
                message.Properties = properties;
            }

            if (message != null)
                MessageQueue.AddMessageToQueue?.Invoke(message);

            PlayerData.ChangeCoinsBalance(coins);

        }


        static string GetUrlByType(SocialMediaType mediaType)
        {
            switch (mediaType)
            {
                case SocialMediaType.FACEBOOK:
                    return "https://www.facebook.com/kacper.chojniak.7/";
                case SocialMediaType.INSTAGRAM:
                    return "https://www.instagram.com/twintechtitans/";
                case SocialMediaType.TIKTOK:
                    return "https://www.tiktok.com/@twintechtitans?_t=8fvm5MNi8Qa&_r=1";
                case SocialMediaType.YOUTUBE:
                    return "https://www.youtube.com/@TwinTechTitans/featured";
                case SocialMediaType.DISCORD:
                    return "https://discord.gg/UXFnDnNFws";
                default:
                    return "empty";

            }
        }


    }
}
