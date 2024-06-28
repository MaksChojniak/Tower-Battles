using System.Collections;
using System.Collections.Generic;
using DefaultNamespace;
using NUnit.Framework;
using UnityEngine;
using UnityEngine.TestTools;
using MMK;
using MMK.ScriptableObjects;
using MMK.Towers;
using Towers;

public class TowerInforationsDataTest
{
    // A Test behaves as an ordinary method
    
    
    
#region Compare Data
    
    [Test]
    public void CompareData_SoldierToSoldier()
    {
        Soldier data = ScriptableObject.CreateInstance<Soldier>();

        Assert.AreEqual(data.TryGetData<Soldier>(out var soldier),true);
        
        Assert.AreNotEqual(soldier, null);
        
        Assert.AreEqual(soldier.GetType(),typeof(Soldier));
    }
    
    [Test]
    public void CompareData_SoldierToBooster()
    {
        Soldier data = ScriptableObject.CreateInstance<Soldier>();
        
        Assert.AreEqual(data.TryGetData<Booster>(out var booster),false);
        
        Assert.AreEqual(booster,null);
    }
    
    
    
    
    
    
    [Test]
    public void CompareData_BoosterToBooster()
    {
        Booster data = ScriptableObject.CreateInstance<Booster>();
        
        Assert.AreEqual(data.TryGetData<Booster>(out var booster),true);
        
        Assert.AreNotEqual(booster, null);
        
        Assert.AreEqual(booster.GetType(),typeof(Booster));
    }
    
    [Test]
    public void CompareData_BoosterToSoldier()
    {
        Booster data = ScriptableObject.CreateInstance<Booster>();

        Assert.AreEqual(data.TryGetData<Soldier>(out var soldier),false);
        
        Assert.AreEqual(soldier,null);
    }
    
#endregion


    
#region Compare Contorller

    [Test]
    public void CompareContorller_SoldierToSoldier()
    {
        SoldierController controller = new GameObject("").AddComponent<SoldierController>(); 

        
        Assert.AreEqual(controller.TryGetController<SoldierController>(out var soldier),true);
        
        Assert.AreNotEqual(soldier, null);
        
        Assert.AreEqual(soldier.GetType(),typeof(SoldierController));
    }
    
    [Test]
    public void CompareContorller_SoldierToBooster()
    {
        SoldierController controller = new GameObject("").AddComponent<SoldierController>(); 

        
        Assert.AreEqual(controller.TryGetController<BoosterController>(out var booster),false);
        
        Assert.AreEqual(booster,null);
    }
    
    
    
    
    
    
    [Test]
    public void CompareContorller_BoosterToBooster()
    {
        BoosterController controller = new GameObject("").AddComponent<BoosterController>(); 

        
        Assert.AreEqual(controller.TryGetController<BoosterController>(out var booster),true);
        
        Assert.AreNotEqual(booster, null);
        
        Assert.AreEqual(booster.GetType(),typeof(BoosterController));
    }
    
    [Test]
    public void CompareContorller_BoosterToSoldier()
    {
        BoosterController controller = new GameObject("").AddComponent<BoosterController>(); 

        
        Assert.AreEqual(controller.TryGetController<SoldierController>(out var soldier),false);
        
        Assert.AreEqual(soldier,null);
    }
    
#endregion


    
#region Compare Data & Controller

    [Test]
    public void CompareDataContorller_SoldierToSoldier()
    {

        SoldierController controller = new GameObject("").AddComponent<SoldierController>(); 
        Soldier data = ScriptableObject.CreateInstance<Soldier>();

        
        Assert.AreEqual((data, controller).TryGetInfo<Soldier, SoldierController>(out var soldierData, out var soldierController),true);
        
        Assert.AreNotEqual(soldierData, null);
        Assert.AreNotEqual(soldierController, null);
        
        Assert.AreEqual(soldierData.GetType(),typeof(Soldier));
        Assert.AreEqual(soldierController.GetType(),typeof(SoldierController));
    }
    
    [Test]
    public void CompareDataContorller_SoldierToBooster()
    {
        SoldierController controller = new GameObject("").AddComponent<SoldierController>(); 
        Soldier data = ScriptableObject.CreateInstance<Soldier>();

        
        Assert.AreEqual((data, controller).TryGetInfo<Booster, BoosterController>(out var boosterData, out var boosterController),false);
        
        Assert.AreEqual(boosterData, null);
        Assert.AreEqual(boosterController, null);
    }
    
    
    
    
    
    
    [Test]
    public void CompareDataContorller_BoosterToBooster()
    {
        BoosterController controller = new GameObject("").AddComponent<BoosterController>(); 
        Booster data = ScriptableObject.CreateInstance<Booster>();

        
        Assert.AreEqual((data, controller).TryGetInfo<Booster, BoosterController>(out var boosterData, out var boosterController),true);
        
        Assert.AreNotEqual(boosterData, null);
        Assert.AreNotEqual(boosterController, null);
        
        Assert.AreEqual(boosterData.GetType(),typeof(Booster));
        Assert.AreEqual(boosterController.GetType(),typeof(BoosterController));
    }
    
    [Test]
    public void CompareDataContorller_BoosterToSoldier()
    {
        BoosterController controller = new GameObject("").AddComponent<BoosterController>(); 
        Booster data = ScriptableObject.CreateInstance<Booster>();
        
        
        Assert.AreEqual((data, controller).TryGetInfo<Soldier, SoldierController>(out var boosterData, out var boosterController),false);
        
        Assert.AreEqual(boosterData, null);
        Assert.AreEqual(boosterController, null);
    }
    
#endregion

    
    
}
