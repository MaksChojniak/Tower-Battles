using System;
using Unity.Services.Core;
using UnityEngine;



public class StorePayment : MonoBehaviour
{
    public delegate void PurchaseDelegate(StoreProduct product);
    public static PurchaseDelegate Purchase;

    GoogleStore store;


    //public string environment = "production";

    //async void Start()
    //{
    //    try
    //    {
    //        var options = new InitializationOptions()
    //            .SetEnvironmentName(environment);

    //        await UnityServices.InitializeAsync(options);
    //    }
    //    catch (Exception exception)
    //    {
    //        // An error occurred during initialization.
    //    }
    //}

    private void Awake()
    {
        DontDestroyOnLoad(this);
    }

    private void Start()
    {


        store = new GoogleStore(StoreProduct.AllProducts);

        Purchase += store.Purchase;
    }

    private void OnDestroy()
    {
        Purchase -= store.Purchase;
    }

}


