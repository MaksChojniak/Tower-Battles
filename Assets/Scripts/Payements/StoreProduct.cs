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

    public static StoreProduct[] AllProducts { get => (new List<StoreProduct>() { Test }).ToArray(); }

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
