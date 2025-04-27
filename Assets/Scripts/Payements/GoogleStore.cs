using UnityEngine;
using System;
using UnityEngine.Purchasing.Extension;
using UnityEngine.Purchasing;
using System.Linq;

public class GoogleStore : IDetailedStoreListener
{
    IStoreController storeController;

    public GoogleStore(params StoreProduct[] products)
    {
        InitializeBuilder(this, products);

    }

    public void Purchase(StoreProduct product)
    {
        Debug.Log("[Payments] start process payement ");
        this.storeController.InitiatePurchase(product.ID);
    }


   

    void IStoreListener.OnInitialized(IStoreController controller, IExtensionProvider extensions)
    {
        this.storeController = controller;

        Debug.Log("[Payments] payement initialized");
    }

    void IStoreListener.OnInitializeFailed(InitializationFailureReason error)
    {
        throw new NotImplementedException();
    }

    void IStoreListener.OnPurchaseFailed(Product product, PurchaseFailureReason failureReason)
    {
        throw new NotImplementedException();
    }

    void IDetailedStoreListener.OnPurchaseFailed(Product product, PurchaseFailureDescription failureDescription)
    {
        throw new NotImplementedException();
    }

    PurchaseProcessingResult IStoreListener.ProcessPurchase(PurchaseEventArgs purchaseEvent)
    {
        Debug.Log("[Payments] process payement");

        StoreProduct product = StoreProduct.AllProducts.First(p => p.ID == purchaseEvent.purchasedProduct.definition.id);

        if (product == null)
            return PurchaseProcessingResult.Pending;

        product.Process();

        Debug.Log("[Payments] process payement complete");

        Debug.Log(purchaseEvent.purchasedProduct.receipt);
        Debug.Log(purchaseEvent.purchasedProduct.transactionID);

        return PurchaseProcessingResult.Complete;
    }

    void IStoreListener.OnInitializeFailed(InitializationFailureReason error, string message)
    {
        throw new NotImplementedException();
    }


    static ConfigurationBuilder InitializeBuilder(IDetailedStoreListener listener, params StoreProduct[] products)
    {
        ConfigurationBuilder builder = ConfigurationBuilder.Instance(StandardPurchasingModule.Instance());

        foreach (StoreProduct product in products)
            builder.AddProduct(product.ID, product.Type);

        UnityPurchasing.Initialize(listener, builder);

        return builder;
    }

}
