using System;
using System.Linq;
using System.Collections.Generic;
using DefaultNamespace;
using MMK.ScriptableObjects;
using Unity.Collections;
using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using Player;


public class TowerInventory : MonoBehaviour
{
    // public static event Action<int, GameObject, bool> OnSelectTile;
    public delegate void OnSelectTileDelegate(int index, GameObject selectedTile, bool isUnlocked, Tower tower);
    public static event OnSelectTileDelegate OnSelectTile;
    
    public Action UpdateTiles;


    public int selectedTower;
    
    [ReadOnly] public AllTowerInventoryData BaseTowerData;
    public AllTowerInventoryData TowerData;
    
    
    
    
    void Awake()
    {
        TowerData = new AllTowerInventoryData(BaseTowerData);
        
        NextTowerPageButton.OnChangePage += UpdateTileSprite;
        OnSelectTile += OnOnSelectTile;
        UpdateTiles += OnUpdateTiles;

        // selectedTower = 0;
        selectedTower = -1;
    }

    void OnDestroy()
    {
        NextTowerPageButton.OnChangePage -= UpdateTileSprite;
        OnSelectTile -= OnOnSelectTile;
        UpdateTiles -= OnUpdateTiles;
    }

    
    
    void OnDisable()
    {
        TowerDeck.OnSelectSlot -= OnSelectDeckSlot;
    }

    void OnEnable()
    {
        StartCoroutine(AfterOnEnable());

    }



    [Space(28)]
    [SerializeField] Tower[] _inventoryTowers;
    [SerializeField] Transform _tilesContainer;
    [HideInInspector] [SerializeField] bool UpdateTilesButton;
    void OnValidate()
    {
        return;
        
        if (!UpdateTilesButton)
            return;
                
        UpdateTilesButton = false;
        
        AllTowerInventoryData _baseTowerData = new AllTowerInventoryData();
        for (int i = 0; i < _inventoryTowers.Length; i++)
        {
            Tower tower = _inventoryTowers[i];
            TowerTileUI tileUI = _tilesContainer.GetChild(1).GetChild(0).GetComponent<TowerTileUI>();
            
            List<TowerInventoryData> towersByRarity = new List<TowerInventoryData>();
            switch (tower.Rarity)
            {
                case TowerRarity.Common:
                    towersByRarity = _baseTowerData.commonTowers.ToList();

                    tileUI = _tilesContainer.GetChild(1).GetChild(towersByRarity.Count).GetComponent<TowerTileUI>();

                    break;
                case TowerRarity.Rare:
                    towersByRarity = _baseTowerData.rareTowers.ToList();

                    tileUI = _tilesContainer.GetChild(3).GetChild(towersByRarity.Count).GetComponent<TowerTileUI>();

                    break;
                case TowerRarity.Exclusive:
                    towersByRarity = _baseTowerData.exclusiveTowers.ToList();

                    tileUI = _tilesContainer.GetChild(5).GetChild(towersByRarity.Count).GetComponent<TowerTileUI>();

                    break;
            }
            

            TowerInventoryData towerData = new TowerInventoryData(tower, tileUI);

            towersByRarity.Add(towerData);
            switch (tower.Rarity)
            {
                case TowerRarity.Common:
                    _baseTowerData.commonTowers = towersByRarity.ToArray();
                    break;
                case TowerRarity.Rare:
                    _baseTowerData.rareTowers = towersByRarity.ToArray();
                    break;
                case TowerRarity.Exclusive:
                    _baseTowerData.exclusiveTowers = towersByRarity.ToArray();
                    break;
            }
        }

        
        // switch (tower.Rarity)
        //     {
        //         case TowerRarity.Common:
        //             towersByRarity = _baseTowerData.commonTowers.ToList();
        //             tilesContainer = _tilesContainer.GetChild(1);
        //             
        //             tileUI = tilesContainer.GetChild(towersByRarity.Count).GetComponent<TowerTileUI>();
        //             for (int j = 0; j < tilesContainer.childCount; j++)
        //             {
        //                 tilesContainer.GetChild(j).GetComponent<Button>().enabled = j <= tilesContainer.childCount;
        //                 tilesContainer.GetChild(j).GetChild(0).gameObject.SetActive(j <= tilesContainer.childCount);
        //             }
        //             break;
        //         case TowerRarity.Rare:
        //             towersByRarity = _baseTowerData.rareTowers.ToList();
        //             tilesContainer = _tilesContainer.GetChild(3);
        //             
        //             tileUI = tilesContainer.GetChild(towersByRarity.Count).GetComponent<TowerTileUI>();
        //             for (int j = 0; j < tilesContainer.childCount; j++)
        //             {
        //                 tilesContainer.GetChild(j).GetComponent<Button>().enabled = j <= tilesContainer.childCount;
        //                 tilesContainer.GetChild(j).GetChild(0).gameObject.SetActive(j <= tilesContainer.childCount);
        //             }
        //             break;
        //         case TowerRarity.Exclusive:
        //             towersByRarity = _baseTowerData.exclusiveTowers.ToList();
        //             tilesContainer = _tilesContainer.GetChild(5);
        //             
        //             tileUI = tilesContainer.GetChild(towersByRarity.Count).GetComponent<TowerTileUI>();
        //             for (int j = 0; j < tilesContainer.childCount; j++)
        //             {
        //                 tilesContainer.GetChild(j).GetComponent<Button>().enabled = j <= tilesContainer.childCount;
        //                 tilesContainer.GetChild(j).GetChild(0).gameObject.SetActive(j <= tilesContainer.childCount);
        //             }
        //             break;
        //     }


        Transform tilesContainer = null;
        tilesContainer = _tilesContainer.GetChild(1);
        for (int j = 0; j < tilesContainer.childCount; j++)
        {
            tilesContainer.GetChild(j).GetComponent<Button>().enabled = j < _baseTowerData.commonTowers.Length;
            tilesContainer.GetChild(j).GetChild(0).gameObject.SetActive(j < _baseTowerData.commonTowers.Length);
        }
        tilesContainer = _tilesContainer.GetChild(3);
        for (int j = 0; j < tilesContainer.childCount; j++)
        {
            tilesContainer.GetChild(j).GetComponent<Button>().enabled = j < _baseTowerData.rareTowers.Length;
            tilesContainer.GetChild(j).GetChild(0).gameObject.SetActive(j < _baseTowerData.rareTowers.Length);
        }
        tilesContainer = _tilesContainer.GetChild(5);
        for (int j = 0; j < tilesContainer.childCount; j++)
        {
            tilesContainer.GetChild(j).GetComponent<Button>().enabled = j < _baseTowerData.exclusiveTowers.Length;
            tilesContainer.GetChild(j).GetChild(0).gameObject.SetActive(j < _baseTowerData.exclusiveTowers.Length);
        }


        for (int i = 0; i < _baseTowerData.commonTowers.Length; i++)
        {
            GameObject tileUI = _baseTowerData.commonTowers[i].towerTileUI.gameObject;

            Button button = tileUI.GetComponent<Button>();
            
            int index = i;
            button.onClick.AddListener(() => SelectTower(index));
        }
        for (int i = 0; i < _baseTowerData.rareTowers.Length; i++)
        {
            GameObject tileUI = _baseTowerData.rareTowers[i].towerTileUI.gameObject;

            Button button = tileUI.GetComponent<Button>();
            
            int index = i + _baseTowerData.commonTowers.Length;
            button.onClick.AddListener(() => SelectTower(index));
        }
        for (int i = 0; i < _baseTowerData.exclusiveTowers.Length; i++)
        {
            GameObject tileUI = _baseTowerData.exclusiveTowers[i].towerTileUI.gameObject;

            Button button = tileUI.GetComponent<Button>();
            
            int index = i + _baseTowerData.commonTowers.Length + _baseTowerData.rareTowers.Length;
            button.onClick.AddListener(() => SelectTower(index));
        }




        BaseTowerData = _baseTowerData;
    }



    IEnumerator AfterOnEnable()
    {
        UpdateTiles();
    
        yield return new WaitForEndOfFrame();
        
        // SelectTower(0);
        // if(selectedTower >= 0)
            // SelectTower(selectedTower);
        SelectTower(selectedTower);

        yield return null;
    }

    
    
    bool selectedTowersIsOwned;

    public void SelectTower(int i)
    {
        TowerDeck.OnSelectSlot -= OnSelectDeckSlot;
        
        TowerDeck.OnSelectSlot -= RemoveFromDeck;
        TowerDeck.OnSelectSlot += RemoveFromDeck;
        
        // if ( i < 0 || (selectedTower == i && selectedTowersIsOwned && TowerData.GetAllTowerInventoryData()[i].towerSO.IsUnlocked() ) )
        if ( i < 0 || selectedTower == i)
        {
            selectedTower = -1;
            selectedTowersIsOwned = false;
            OnSelectTile?.Invoke(selectedTower, null, false, null);
            
            ChangeDeckTilesColor(false);
            
            return;
        }
        
        
        //Debug.Log($"{i}");

        selectedTower = i;

        GameObject tile = TowerData.GetAllTowerInventoryData()[i].towerTileUI.gameObject;
        Tower tower = TowerData.GetAllTowerInventoryData()[i].towerSO;

        OnSelectTile?.Invoke(i, tile, tower.IsUnlocked(), tower);

        // Added
        selectedTowersIsOwned = tower.IsUnlocked();
        if (tower.IsUnlocked())
        {
            TowerDeck.OnSelectSlot -= OnEquipLockedTower;

            TowerDeck.OnSelectSlot -= RemoveFromDeck;
            // TowerDeck.OnSelectSlot += RemoveFromDeck;

            TowerDeck.OnSelectSlot += OnSelectDeckSlot;
            OnEquipping(); 
        }
        else
        {
            ChangeDeckTilesColor(false);

            // TowerDeck.OnSelectSlot -= RemoveFromDeck;

            TowerDeck.OnSelectSlot -= OnEquipLockedTower;
            TowerDeck.OnSelectSlot += OnEquipLockedTower;
        }
    }
    
    

    void RemoveFromDeck(int index)
    {
        // if (PlayerTowerInventory.Instance.TowerDeck[index] != null)
        if (PlayerController.GetLocalPlayerData().Deck[index].Value != null)
        {
            // PlayerTowerInventory.Instance.TowerDeck[index] = null;
            PlayerController.GetLocalPlayerData().Deck[index].Value = null;
            TowerDeck.Instance.deckTiles[index].UpdateSprite(null);
            TowerDeck.Instance.deckTiles[index].ChangeColor(false);
            TowerDeck.Instance.deckTiles[index].UpdatePrice(false, 0);
        }
        
        // SelectTower(-1);
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
        if(selectedTower < 0)
            return;
        
        //Debug.Log($"selected slot - {index}, seletced tower - {selectedTower}");

        // if (PlayerTowerInventory.Instance.TowerDeck.Contains(TowerData.GetAllTowerInventoryData()[selectedTower].towerSO))
        if (PlayerController.GetLocalPlayerData().Deck.Select(element => element.Value).ToArray().Contains(TowerData.GetAllTowerInventoryData()[selectedTower].towerSO))
        {
            // for (int i = 0; i < PlayerTowerInventory.Instance.TowerDeck.Length; i++)
            for (int i = 0; i < PlayerController.GetLocalPlayerData().Deck.Length; i++)
            {
                // if (PlayerTowerInventory.Instance.TowerDeck[i] == TowerData.GetAllTowerInventoryData()[selectedTower].towerSO)
                if (PlayerController.GetLocalPlayerData().Deck[i].Value == TowerData.GetAllTowerInventoryData()[selectedTower].towerSO)
                {
                    RemoveFromDeck(i);
                    break;
                }
            }
        }

        // PlayerTowerInventory.Instance.TowerDeck[index] = TowerData.GetAllTowerInventoryData()[selectedTower].towerSO;
        PlayerController.GetLocalPlayerData().Deck[index].Value = TowerData.GetAllTowerInventoryData()[selectedTower].towerSO;
        TowerDeck.Instance.deckTiles[index].UpdateSprite(TowerData.GetAllTowerInventoryData()[selectedTower].towerSO.CurrentSkin.TowerSprite);
        // TowerDeck.Instance.deckTiles[index].UpdatePrice(true, PlayerTowerInventory.Instance.TowerDeck[index].GetPrice());
        TowerDeck.Instance.deckTiles[index].UpdatePrice(true, PlayerController.GetLocalPlayerData().Deck[index].Value.GetPrice());

        TowerDeck.OnSelectSlot -= OnSelectDeckSlot;

        ChangeDeckTilesColor(false);
        
        
        SelectTower(-1);
    }



    void UpdateTileSprite()
    {
        if (TowerData == null)
            return;

        foreach (var buildingData in TowerData.GetAllTowerInventoryData())
        {
            try
            {
                buildingData.towerTileUI.UpdateSprite(buildingData.towerSO.CurrentSkin.TowerSprite);
                buildingData.towerTileUI.UpdateName(buildingData.towerSO.TowerName);
                buildingData.towerTileUI.UpdateLockedState(buildingData.towerSO.IsUnlocked());
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


    void OnOnSelectTile(int index, GameObject selectedTile, bool isUnlocked, Tower tower)
    {
        UpdateTiles();
    }

    void OnUpdateTiles()
    {
        TowerData.SortAllTowersInventoryData(BaseTowerData);
        UpdateTileSprite();
    }
    
    
}

[Serializable]
public class AllTowerInventoryData
{
    public TowerInventoryData[] commonTowers;
    public TowerInventoryData[] rareTowers;
    public TowerInventoryData[] exclusiveTowers;
    // public TowerInventoryData[] trophyTowers;

    public AllTowerInventoryData(AllTowerInventoryData baseData)
    {
        commonTowers = new TowerInventoryData[baseData.commonTowers.Length];
        baseData.commonTowers.CopyTo(commonTowers, 0);

        rareTowers = new TowerInventoryData[baseData.rareTowers.Length];
        baseData.rareTowers.CopyTo(rareTowers, 0);

        exclusiveTowers = new TowerInventoryData[baseData.exclusiveTowers.Length];
        baseData.exclusiveTowers.CopyTo(exclusiveTowers, 0);

        // trophyTowers = new TowerInventoryData[baseData.trophyTowers.Length];
        // baseData.trophyTowers.CopyTo(trophyTowers, 0);
    }

    public AllTowerInventoryData()
    {
        commonTowers = Array.Empty<TowerInventoryData>();
        rareTowers = Array.Empty<TowerInventoryData>();
        exclusiveTowers = Array.Empty<TowerInventoryData>();
    }

    
    
    public TowerInventoryData[] GetAllTowerInventoryData()
    {
        TowerInventoryData[] allData = new TowerInventoryData[commonTowers.Length + rareTowers.Length + exclusiveTowers.Length];// + trophyTowers.Length];

        for (int i = 0; i < allData.Length; i++)
        {
            if (i < commonTowers.Length)
            {
                allData[i] = commonTowers[i];
            }
            else if (i < commonTowers.Length + rareTowers.Length)
            {
                allData[i] = rareTowers[i - commonTowers.Length];
            }
            // else if (i < rareTowers.Length + commonTowers.Length + exclusiveTowers.Length)
            else
            {
                allData[i] = exclusiveTowers[i - rareTowers.Length - commonTowers.Length];
            }
            // else
            // {
            //     allData[i] = trophyTowers[i - (commonTowers.Length + rareTowers.Length + exclusiveTowers.Length)];
            // }
        }

        return allData;
    }

    public void SortAllTowersInventoryData(AllTowerInventoryData baseAllTowerInventoryData)
    {
        AllTowerInventoryData baseData = new AllTowerInventoryData(baseAllTowerInventoryData);
        
        SortTowersInventoryData(baseData.commonTowers, ref commonTowers);
        SortTowersInventoryData(baseData.rareTowers, ref rareTowers);
        SortTowersInventoryData(baseData.exclusiveTowers, ref exclusiveTowers);
        // SortTowersInventoryData(baseData.trophyTowers, ref trophyTowers);
    }

    public void SortTowersInventoryData(TowerInventoryData[] baseTowersData, ref TowerInventoryData[] actuallyTowersData)
    {
        TowerInventoryData[] sortedTowers = new TowerInventoryData[baseTowersData.Length];
        List<TowerInventoryData> unlockedTowers = new List<TowerInventoryData>();
        List<TowerInventoryData> lockedTowers = new List<TowerInventoryData>();

        for (int i = 0; i < baseTowersData.Length; i++)
        {
            // if(baseTowersData[i].towerSO.IsUnlocked() && baseTowersData[i].towerSO.IsRequiredWinsCount(PlayerTowerInventory.Instance.GetWinsCount()))
            if(baseTowersData[i].towerSO.IsUnlocked() && baseTowersData[i].towerSO.IsRequiredLevel(PlayerController.GetLocalPlayerData().Level))
                unlockedTowers.Add(baseTowersData[i]);
            else
                lockedTowers.Add(baseTowersData[i]);
        }

        for (int i = 0; i < unlockedTowers.Count; i++)
        {
            sortedTowers[i] = new TowerInventoryData(unlockedTowers[i].towerSO, baseTowersData[i].towerTileUI) ;
        }

        for (int i = 0; i < lockedTowers.Count; i++)
        {
            int index = i + unlockedTowers.Count;
            sortedTowers[index] = new TowerInventoryData(lockedTowers[i].towerSO, baseTowersData[index].towerTileUI);
        }

        actuallyTowersData = sortedTowers;
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


