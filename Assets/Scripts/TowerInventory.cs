using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.UI;

public class TowerInventory : MonoBehaviour
{
    public static event Action<GameObject> OnSelectTile;


    [SerializeField] int selectedTower;

    public TowerInventoryData[] buildingsData;

    [SerializeField] Transform tile1Container;
    [SerializeField] Transform tile2Container;

    [SerializeField] Image noEmptySlotsTXT;


    private void OnValidate()
    {
        for(int i = 0; i < buildingsData.Length; i++)
        {
            if (i < tile1Container.childCount)
                buildingsData[i].buildingTileUI = tile1Container.GetChild(i).gameObject.GetComponent<TowerTileUI>();
            else
                buildingsData[i].buildingTileUI = tile2Container.GetChild(i - tile1Container.childCount).gameObject.GetComponent<TowerTileUI>();
        }
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

        noEmptySlotsTXT.gameObject.SetActive(false);
    }
    
    public void SelectTower(int i)
    {
        TowerDeck.OnSelectSlot -= OnSelectDeckSlot;

        Debug.Log($"{i}");

        selectedTower = i;

        GameObject tile = buildingsData[i].buildingTileUI.gameObject;
        Building building = buildingsData[i].buildingSO;

        OnSelectTile?.Invoke(tile);

        UpdateTowerInformation(building);

        // Added
        TowerDeck.OnSelectSlot += OnSelectDeckSlot;
        OnEquipping();
    }



    void UpdateTowerInformation(Building building)
    {
        Debug.Log($"Update Tower Info [Tower name - {building.buildingName}]");

    }

    public void EquipTower()
    {
        //TowerDeck.OnSelectSlot += OnSelectDeckSlot;
        //OnEquipping();
    }

    void OnSelectDeckSlot(int index)
    {

        int emptyDeckSlots = PlayerTowerInventory.Instance.towerDeck.Length;
        foreach (var deckTower in PlayerTowerInventory.Instance.towerDeck)
        {
            if (deckTower != null) emptyDeckSlots -= 1;
        }

        if (emptyDeckSlots == 0)
        {
            StartCoroutine(noEmptySlots());
        }

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
            }
            catch
            {
          
            }
        }
    }

    IEnumerator noEmptySlots()
    {
        noEmptySlotsTXT.gameObject.SetActive(true);
        yield return new WaitForSeconds(1.25f);
        noEmptySlotsTXT.gameObject.SetActive(false);
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


