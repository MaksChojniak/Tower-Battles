using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class BuildingsBarUI : MonoBehaviour
{
    [SerializeField] BuildingsBarTile[] tiles;

    void Start()
    {
        for (int i = 0; i < tiles.Length; i++)
        {
            if (PlayerTowerInventory.Instance.towerDeck[i] != null)
                tiles[i].UpdateSprite(PlayerTowerInventory.Instance.towerDeck[i].buildingImage);
            else
                tiles[i].UpdateSprite(null);
        }
    }
}
