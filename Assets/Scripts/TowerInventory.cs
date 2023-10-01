using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.UI;

public class TowerInventory : MonoBehaviour
{
    public static event Action<GameObject, int> OnSelectTile;


    [SerializeField] int selectedTower;

    public TowerInventoryData[] buildingsData;

    [SerializeField] GameObject lockedWarningMessage;


    private void OnValidate()
    {

    }

    private void Awake()
    {
        NextTowerPageButton.OnChangePage += UpdateTileSprite;
    }

    private void OnDestroy()
    {
        NextTowerPageButton.OnChangePage -= UpdateTileSprite;
    }

    private void OnDisable()
    {
        TowerDeck.OnSelectSlot -= OnSelectDeckSlot;
    }


    private void Start()
    {
        SelectTower(0);

        UpdateTileSprite();

        ChangeDeckTilesColor(false);
    }
    
    public void SelectTower(int i)
    {
        TowerDeck.OnSelectSlot -= OnSelectDeckSlot;

        Debug.Log($"{i}");

        selectedTower = i;

        GameObject tile = buildingsData[i].buildingTileUI.gameObject;
        Building building = buildingsData[i].buildingSO;

        OnSelectTile?.Invoke(tile, i);

        // Added
        if (building.unlocked)
        {
            TowerDeck.OnSelectSlot -= OnEquipLockedTower;

            TowerDeck.OnSelectSlot -= testXDXDXD;
            TowerDeck.OnSelectSlot += testXDXDXD;

            TowerDeck.OnSelectSlot += OnSelectDeckSlot;
            OnEquipping(); 
        }
        else
        {
            ChangeDeckTilesColor(false);

            TowerDeck.OnSelectSlot -= testXDXDXD;

            TowerDeck.OnSelectSlot -= OnEquipLockedTower;
            TowerDeck.OnSelectSlot += OnEquipLockedTower;
        }
    }


    void testXDXDXD(int index)
    {
        if (PlayerTowerInventory.Instance.towerDeck[index] != null)
        {
            PlayerTowerInventory.Instance.towerDeck[index] = null;
            TowerDeck.Instance.deckTiles[index].UpdateSprite(null);
            TowerDeck.Instance.deckTiles[index].ChangeColor(false);
        }
    }


    public void EquipTower()
    {
        //TowerDeck.OnSelectSlot += OnSelectDeckSlot;
        //OnEquipping();
    }

    void OnEquipLockedTower(int deckSlotIndex)
    {
        Debug.Log("Locked Tower");

        StopAllCoroutines();
        StartCoroutine(LockedWarningMessage());

        //TowerDeck.OnSelectSlot -= OnEquipLockedTower;
    }

    IEnumerator LockedWarningMessage()
    {
        lockedWarningMessage.SetActive(true);

        yield return new WaitForSeconds(1.25f);

        lockedWarningMessage.SetActive(false);
    }



    void OnSelectDeckSlot(int index)
    {

        Debug.Log($"selected slot - {index}, seletced tower - {selectedTower}");

        if (PlayerTowerInventory.Instance.towerDeck.Contains(buildingsData[selectedTower].buildingSO))
        {
            for (int i = 0; i < PlayerTowerInventory.Instance.towerDeck.Length; i++)
            {
                if (PlayerTowerInventory.Instance.towerDeck[i] == buildingsData[selectedTower].buildingSO)
                {
                    PlayerTowerInventory.Instance.towerDeck[i] = null;
                    TowerDeck.Instance.deckTiles[i].UpdateSprite(null);
                }
            }
        }

        PlayerTowerInventory.Instance.towerDeck[index] = buildingsData[selectedTower].buildingSO;
        TowerDeck.Instance.deckTiles[index].UpdateSprite(buildingsData[selectedTower].buildingSO.buildingImage);

        TowerDeck.OnSelectSlot -= OnSelectDeckSlot;

        ChangeDeckTilesColor(false);
    }



    void UpdateTileSprite()
    {
        foreach (var buildingData in buildingsData)
        {
            try
            {
                buildingData.buildingTileUI.UpdateSprite(buildingData.buildingSO.buildingImage);
                buildingData.buildingTileUI.UpdateName(buildingData.buildingSO.buildingName);
            }
            catch
            {
          
            }
        }
    }


    //Change the deck color to Green while equipping towers
    private void OnEquipping()
    {
        ChangeDeckTilesColor(true);
    }

    void ChangeDeckTilesColor(bool isEquipped)
    {
        foreach (var deckTower in TowerDeck.Instance.deckTiles)
        {
            deckTower.ChangeColor(isEquipped);
        }
    }
}


[Serializable]
public class TowerInventoryData
{
    public Building buildingSO;
    public TowerTileUI buildingTileUI;

    public TowerInventoryData(Building buildingSO, TowerTileUI buildingTileUI)
    {
        this.buildingSO = buildingSO;
        this.buildingTileUI = buildingTileUI;
    }
}


