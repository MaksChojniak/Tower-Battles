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

    public static StoreProduct Test 
    { 
        get => new StoreProduct("test_item", ProductType.Consumable, (int quantity) => 
        {
            long value = 75;
            ShowMessage("Shop Payement", "Gems", StringFormatter.GetGemsText, value, quantity);
            PlayerData.ChangeGemsBalance?.Invoke(value * quantity); 
        }   );
    }

    public static StoreProduct Gems75
    {
        get => new StoreProduct("gems_75", ProductType.Consumable, (int quantity) => 
        {
            long value = 75;
            ShowMessage("Pile of Gems", "Gems", StringFormatter.GetGemsText, value, quantity);
            PlayerData.ChangeGemsBalance?.Invoke(value * quantity); 
        }   );
    }

    public static StoreProduct Gems175
    {
        get => new StoreProduct("gems_175", ProductType.Consumable, (int quantity) => 
        {
            long value = 175;
            ShowMessage("Sack of Gems", "Gems", StringFormatter.GetGemsText, value, quantity);
            PlayerData.ChangeGemsBalance?.Invoke(value * quantity); 
        }   );
    }

    public static StoreProduct Gems425
    {
        get => new StoreProduct("gems_425", ProductType.Consumable, (int quantity) => 
        {
            long value = 425;
            ShowMessage("Bucket of Gems", "Gems", StringFormatter.GetGemsText, value, quantity);
            PlayerData.ChangeGemsBalance?.Invoke(value * quantity); 
        }   );
    }

    public static StoreProduct Gems750
    {
        get => new StoreProduct("gems_750", ProductType.Consumable, (int quantity) => 
        {
            long value = 750;
            ShowMessage("Chest of Gems", "Gems", StringFormatter.GetGemsText, value, quantity);
            PlayerData.ChangeGemsBalance?.Invoke(value * quantity); 
        }   );
    }

    public static StoreProduct Gems1200
    {
        get => new StoreProduct("gems_1200", ProductType.Consumable, (int quantity) => 
        {
            long value = 1200;
            ShowMessage("Barrel of Gems", "Gems", StringFormatter.GetGemsText, value, quantity);
            PlayerData.ChangeGemsBalance?.Invoke(value * quantity); 
        }   );
    }

/*
 
Pile of Gems | gems_75 | 1,00 PLN | 26 kwi 2025 | Nieaktywne
Sack of Gems | gems_175 | 1,00 PLN | 26 kwi 2025 | Nieaktywne
Bucket of Gems | gems_425 | 1,00 PLN | 26 kwi 2025 | Nieaktywne
Chest of Gems | gems_750 | 1,00 PLN | 26 kwi 2025 | Nieaktywne
Barrel of Gems | gems_1200 | 1,00 PLN | 26 kwi 2025 | Nieaktywne

*/

    #endregion


    public delegate string CurrencyFormatterDelegate(long Value, bool WithIcon = true, string IconSize = "");

    readonly public string ID;
    readonly public ProductType Type;

    Action<int> ProcessPurhase;

    StoreProduct(string id, ProductType type, Action<int> processPurhase)
    {
        this.ID = id;
        this.Type = type;
        this.ProcessPurhase = processPurhase;
    }

    public void Process(int quantity = 1) => this.ProcessPurhase.Invoke(quantity);


    public static void ShowMessage(string tittle, string currencyName, CurrencyFormatterDelegate currencyFormatter, long value, int quantity)
    {
        string quantityText = quantity > 1 ? $"{quantity} X " : "";
        List<MessageProperty> properties = new List<MessageProperty>()
        {
            new MessageProperty() { Name = currencyName, Value = $"{quantityText}{currencyFormatter(value, true, "66%")}" }
        };

        Message message = new Message();

        message.MessageType = MessageType.Normal;
        message.Tittle = tittle;
        message.Properties = properties;

        if (message != null)
            MessageQueue.AddMessageToQueue?.Invoke(message);
    }
}
