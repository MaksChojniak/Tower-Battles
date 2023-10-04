using System;
using System.Linq;
using System.Collections.Generic;
using DefaultNamespace;
using DefaultNamespace.ScriptableObjects;
using Unity.VisualScripting;
using UnityEngine;

public class TowerInventory : MonoBehaviour
{
    public static event Action<int, GameObject> OnSelectTile;


    [SerializeField] int selectedTower;

    public TowerInventoryData[] TowerData;

    [SerializeField] Transform tileContainer;
    
    private void OnValidate()
    {
        List<Transform> childs = GetAllChilds(tileContainer);
        List<TowerTileUI> tiles = new List<TowerTileUI>();

        foreach (var child in childs)
        {
            if (child.TryGetComponent(typeof(TowerTileUI), out var tile))
            {
                tiles.Add(tile.GetComponent<TowerTileUI>());
            }
        }

        for (int i = 0; i < TowerData.Length; i++)
        {
            TowerData[i].towerTileUI = tiles[i];
        }
    }
    
    List<Transform> GetAllChilds(Transform root)
    {
        List<Transform> childs = new List<Transform>();

        foreach (Transform child in root)
        {
            childs.Add(child);
            if (child.childCount > 0)
                childs.AddRange(GetAllChilds(child));
        }

        return childs;
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

        // ChangeDeckTilesColor(false);
    }
    
    public void SelectTower(int i)
    {
        TowerDeck.OnSelectSlot -= OnSelectDeckSlot;

        //Debug.Log($"{i}");

        selectedTower = i;

        GameObject tile = TowerData[i].towerTileUI.gameObject;
        Tower tower = TowerData[i].towerSO;

        OnSelectTile?.Invoke(i, tile);

        // Added
        if (tower.IsUnlocked())
        {
            TowerDeck.OnSelectSlot -= OnEquipLockedTower;

            TowerDeck.OnSelectSlot -= RemoveFromDeck;
            TowerDeck.OnSelectSlot += RemoveFromDeck;

            TowerDeck.OnSelectSlot += OnSelectDeckSlot;
            OnEquipping(); 
        }
        else
        {
            ChangeDeckTilesColor(false);

            TowerDeck.OnSelectSlot -= RemoveFromDeck;

            TowerDeck.OnSelectSlot -= OnEquipLockedTower;
            TowerDeck.OnSelectSlot += OnEquipLockedTower;
        }
    }


    void RemoveFromDeck(int index)
    {
        if (PlayerTowerInventory.Instance.TowerDeck[index] != null)
        {
            PlayerTowerInventory.Instance.TowerDeck[index] = null;
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
        WarningSystem.ShowWarning(WarningSystem.WarningType.LockedTower);

        //TowerDeck.OnSelectSlot -= OnEquipLockedTower;
    }
    


    void OnSelectDeckSlot(int index)
    {

        //Debug.Log($"selected slot - {index}, seletced tower - {selectedTower}");

        if (PlayerTowerInventory.Instance.TowerDeck.Contains(TowerData[selectedTower].towerSO))
        {
            for (int i = 0; i < PlayerTowerInventory.Instance.TowerDeck.Length; i++)
            {
                if (PlayerTowerInventory.Instance.TowerDeck[i] == TowerData[selectedTower].towerSO)
                {
                    PlayerTowerInventory.Instance.TowerDeck[i] = null;
                    TowerDeck.Instance.deckTiles[i].UpdateSprite(null);
                }
            }
        }

        PlayerTowerInventory.Instance.TowerDeck[index] = TowerData[selectedTower].towerSO;
        TowerDeck.Instance.deckTiles[index].UpdateSprite(TowerData[selectedTower].towerSO.TowerSprite);

        TowerDeck.OnSelectSlot -= OnSelectDeckSlot;

        ChangeDeckTilesColor(false);
    }



    void UpdateTileSprite()
    {
        foreach (var buildingData in TowerData)
        {
            try
            {
                buildingData.towerTileUI.UpdateSprite(buildingData.towerSO.TowerSprite);
                buildingData.towerTileUI.UpdateName(buildingData.towerSO.TowerName);
            }
            catch(Exception exception)
            {
                Debug.Log(exception);
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
    public Tower towerSO;
    public TowerTileUI towerTileUI;

    public TowerInventoryData(Tower towerSO, TowerTileUI towerTileUI)
    {
        this.towerSO = towerSO;
        this.towerTileUI = towerTileUI;
    }
}


