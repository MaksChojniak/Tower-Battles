using System;
using System.Collections;
using System.Collections.Generic;
using DefaultNamespace;
using MMK;
using MMK.Towers;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class TowerBarUI : MonoBehaviour
{
    [SerializeField] TowersBarTile[] Tiles;
    
    [SerializeField] TMP_Text TowersCount;


    void Awake()
    {
        // TowerSpawner.OnPlaceTower += OnUpdateTowersCount;
        // TowerController.OnDestroyTower += OnUpdateTowersCount;
    }

    void OnDestroy()
    {
        // TowerSpawner.OnPlaceTower -= OnUpdateTowersCount;
        // TowerController.OnDestroyTower -= OnUpdateTowersCount;
    }


    void Start()
    {
        OnUpdateTowersCount();
            
        for (int i = 0; i < Tiles.Length; i++)
        {
            if (PlayerTowerInventory.Instance.TowerDeck[i] != null)
            {
                Tiles[i].UpdateSprite(PlayerTowerInventory.Instance.TowerDeck[i].TowerSprite);
                Tiles[i].UpdatePrice(true, PlayerTowerInventory.Instance.TowerDeck[i].GetPrice());
            }
            else
            {
                Tiles[i].UpdateSprite(null);
                Tiles[i].UpdatePrice(false, 0);
            }
        }
    }



    void OnUpdateTowersCount()
    {
        Invoke(nameof(DelayedUpdateTowersCount), 0.1f);

    }

    void DelayedUpdateTowersCount()
    {

        TowersCount.text = $"{GameObject.FindGameObjectsWithTag("Tower").Length}/{GameSettingsManager.GetGameSettings().MaxTowersCount} Towers";
    }
}
