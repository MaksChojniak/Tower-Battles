using MMK;
using Player;
using System;
using System.Collections;
using System.Collections.Generic;
using UI;
using UnityEngine;
using UnityEngine.Purchasing;


public class StoreProduct
{
    #region Avaiable Products

    public static StoreProduct[] AllProducts { get => (new List<StoreProduct>() { Test, Gems75, Gems175, Gems425, Gems750, Gems1200 }).ToArray(); }

    public static StoreProduct Test { get => new StoreProduct("test_item", ProductType.Consumable, () => 
    {
        long value = 75;

        Debug.Log("You Bought Test Product");

        List<MessageProperty> properties = new List<MessageProperty>()
            {
                (new MessageProperty() { Name = "Gems", Value = $"{StringFormatter.GetGemsText(value, true, "66%")}" })
            };

        Message message = null;

        if (properties.Count > 0)
        {
            message = new Message();

            message.MessageType = MessageType.Normal;
            message.Tittle = "Shop Payement";
            message.Properties = properties;
        }

        if (message != null)
            MessageQueue.AddMessageToQueue?.Invoke(message);

        PlayerData.ChangeGemsBalance?.Invoke(value); 
    }   ); }

    public static StoreProduct Gems75
    {
        get => new StoreProduct("gems_75", ProductType.Consumable, () =>
        {
            long value = 75;

            Debug.Log("You Bought Test Product");

            List<MessageProperty> properties = new List<MessageProperty>()
            {
                (new MessageProperty() { Name = "Gems", Value = $"{StringFormatter.GetGemsText(value, true, "66%")}" })
            };

            Message message = null;

            if (properties.Count > 0)
            {
                message = new Message();

                message.MessageType = MessageType.Normal;
                message.Tittle = "Pile of Gems";
                message.Properties = properties;
            }

            if (message != null)
                MessageQueue.AddMessageToQueue?.Invoke(message);

            PlayerData.ChangeGemsBalance?.Invoke(value);
        });
    }

    public static StoreProduct Gems175
    {
        get => new StoreProduct("gems_175", ProductType.Consumable, () =>
        {
            long value = 175;

            Debug.Log("You Bought Test Product");

            List<MessageProperty> properties = new List<MessageProperty>()
            {
                (new MessageProperty() { Name = "Gems", Value = $"{StringFormatter.GetGemsText(value, true, "66%")}" })
            };

            Message message = null;

            if (properties.Count > 0)
            {
                message = new Message();

                message.MessageType = MessageType.Normal;
                message.Tittle = "Sack of Gems";
                message.Properties = properties;
            }

            if (message != null)
                MessageQueue.AddMessageToQueue?.Invoke(message);

            PlayerData.ChangeGemsBalance?.Invoke(value);
        });
    }

    public static StoreProduct Gems425
    {
        get => new StoreProduct("gems_425", ProductType.Consumable, () =>
        {
            long value = 425;

            Debug.Log("You Bought Test Product");

            List<MessageProperty> properties = new List<MessageProperty>()
            {
                (new MessageProperty() { Name = "Gems", Value = $"{StringFormatter.GetGemsText(value, true, "66%")}" })
            };

            Message message = null;

            if (properties.Count > 0)
            {
                message = new Message();

                message.MessageType = MessageType.Normal;
                message.Tittle = "Bucket of Gems";
                message.Properties = properties;
            }

            if (message != null)
                MessageQueue.AddMessageToQueue?.Invoke(message);

            PlayerData.ChangeGemsBalance?.Invoke(value);
        });
    }

    public static StoreProduct Gems750
    {
        get => new StoreProduct("gems_750", ProductType.Consumable, () =>
        {
            long value = 750;

            Debug.Log("You Bought Test Product");

            List<MessageProperty> properties = new List<MessageProperty>()
            {
                (new MessageProperty() { Name = "Gems", Value = $"{StringFormatter.GetGemsText(value, true, "66%")}" })
            };

            Message message = null;

            if (properties.Count > 0)
            {
                message = new Message();

                message.MessageType = MessageType.Normal;
                message.Tittle = "Chest of Gems";
                message.Properties = properties;
            }

            if (message != null)
                MessageQueue.AddMessageToQueue?.Invoke(message);

            PlayerData.ChangeGemsBalance?.Invoke(value);
        });
    }

    public static StoreProduct Gems1200
    {
        get => new StoreProduct("gems_1200", ProductType.Consumable, () =>
        {
            long value = 1200;

            Debug.Log("You Bought Test Product");

            List<MessageProperty> properties = new List<MessageProperty>()
            {
                (new MessageProperty() { Name = "Gems", Value = $"{StringFormatter.GetGemsText(value, true, "66%")}" })
            };

            Message message = null;

            if (properties.Count > 0)
            {
                message = new Message();

                message.MessageType = MessageType.Normal;
                message.Tittle = "Barrel of Gems";
                message.Properties = properties;
            }

            if (message != null)
                MessageQueue.AddMessageToQueue?.Invoke(message);

            PlayerData.ChangeGemsBalance?.Invoke(value);
        });
    }

/*
 
Pile of Gems | gems_75 | 1,00 PLN | 26 kwi 2025 | Nieaktywne
Sack of Gems | gems_175 | 1,00 PLN | 26 kwi 2025 | Nieaktywne
Bucket of Gems | gems_425 | 1,00 PLN | 26 kwi 2025 | Nieaktywne
Chest of Gems | gems_750 | 1,00 PLN | 26 kwi 2025 | Nieaktywne
Barrel of Gems | gems_1200 | 1,00 PLN | 26 kwi 2025 | Nieaktywne

*/

    #endregion


    readonly public string ID;
    readonly public ProductType Type;

    Action ProcessPurhase;

    StoreProduct(string id, ProductType type, Action processPurhase)
    {
        this.ID = id;
        this.Type = type;
        this.ProcessPurhase = processPurhase;
    }

    public void Process() => this.ProcessPurhase.Invoke();
}
