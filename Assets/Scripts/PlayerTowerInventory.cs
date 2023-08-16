using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerTowerInventory : MonoBehaviour
{
    public static PlayerTowerInventory Instance;

    public int balance;
    public int winCount;
    public int defeatCount;

    public Building[] towerDeck = new Building[5];

    private void Awake()
    {
        if(Instance != null)
        {
            Destroy(gameObject);
            return;
        }
        else
        {
            Instance = this;
            DontDestroyOnLoad(gameObject);
        }


    }



}
