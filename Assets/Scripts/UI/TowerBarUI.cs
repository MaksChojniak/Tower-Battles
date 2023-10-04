using System;
using System.Collections;
using System.Collections.Generic;
using DefaultNamespace;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class TowerBarUI : MonoBehaviour
{
    [SerializeField] TowersBarTile[] Tiles;
    
    [SerializeField] TMP_Text TowersCount;


    void Awake()
    {
        TowerSpawner.OnPlaceTower += OnUpdateTowersCount;
    }

    void OnDestroy()
    {
        TowerSpawner.OnPlaceTower -= OnUpdateTowersCount;
    }


    void Start()
    {
        OnUpdateTowersCount();
            
        for (int i = 0; i < Tiles.Length; i++)
        {
            if (PlayerTowerInventory.Instance.TowerDeck[i] != null)
                Tiles[i].UpdateSprite(PlayerTowerInventory.Instance.TowerDeck[i].TowerSprite);
            else
                Tiles[i].UpdateSprite(null);
        }
    }



    void OnUpdateTowersCount()
    {
        TowersCount.text = $"{GameObject.FindObjectsOfType<TowerController>().Length}/{TowerSpawner.MaxTowersCount} Towers";
    }
}
