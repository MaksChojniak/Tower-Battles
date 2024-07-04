using System;
using System.Collections;
using System.Collections.Generic;
using MMK;
using MMK.Towers;
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
            if (PlayerTowerInventory.Instance.TowerDeck[i] != null)
                Tiles[i].UpdateSprite(PlayerTowerInventory.Instance.TowerDeck[i].TowerSprite);
            else
                Tiles[i].UpdateSprite(null);
        }
    }

    void Update()
    {
        TowersCount.text = $"{GameObject.FindGameObjectsWithTag("Tower").Length}/{GameSettingsManager.GetGameSettings().MaxTowersCount} Towers";
        
    }


}
