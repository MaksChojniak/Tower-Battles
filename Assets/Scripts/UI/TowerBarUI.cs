using System;
using System.Collections;
using System.Collections.Generic;
using MMK;
using MMK.Towers;
using Player;
using TMPro;
using UnityEngine;

public class TowerBarUI : MonoBehaviour
{
    [SerializeField] TowersBarTile[] Tiles;
    
    [SerializeField] TMP_Text TowersCount;




    void Start()
    {
    
        for (int i = 0; i < Tiles.Length; i++)
        {
            // if (PlayerTowerInventory.Instance.TowerDeck[i] != null)
            if (PlayerController.GetLocalPlayerData().Deck[i].Value != null)
            {
                // Tiles[i].UpdateSprite(PlayerTowerInventory.Instance.TowerDeck[i].CurrentSkin.TowerSprite);
                Tiles[i].UpdateSprite(PlayerController.GetLocalPlayerData().Deck[i].Value.CurrentSkin.TowerSprite);
                // Tiles[i].UpdatePrice(true, PlayerTowerInventory.Instance.TowerDeck[i].GetPrice());
                Tiles[i].UpdatePrice(true, PlayerController.GetLocalPlayerData().Deck[i].Value.GetPrice());
            }
            else
            {
                Tiles[i].UpdateSprite(null);
                Tiles[i].UpdatePrice(false, 0);
            }
        }
    }

    void Update()
    {
        TowersCount.text = $"{GameObject.FindGameObjectsWithTag("Tower").Length}/{GlobalSettingsManager.GetGlobalSettings().MaxTowersCount} Towers";
        
    }


}
