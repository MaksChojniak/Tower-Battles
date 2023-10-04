using System;
using System.Collections;
using System.Collections.Generic;
using DefaultNamespace;
using DefaultNamespace.ScriptableObjects;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.Rendering;
using UnityEngine.UI;
using TMPro;

public class TowerSpawner : MonoBehaviour
{
    public static event Action OnPlaceTower;
    
    [SerializeField] Tower[] towers;
 
    [SerializeField] GameObject selectedBuilidng;
    [SerializeField] bool posibilityOfPlace;
    
    public const int MaxTowersCount = 10;

    void Awake()
    {
        towers = PlayerTowerInventory.Instance.TowerDeck;   
    }

    public void SpawnBuilding(int index)
    {
        if (towers[index] == null) return;

        foreach (var tower in GameObject.FindObjectsOfType<TowerController>())
        {
            tower.ShowTowerViewRange(false);
            tower.ShowTowerInformation(false);
        }

        if (towers[index].GetPrice() > GamePlayerInformation.Instance.GetBalance())
        {
            // ShowBuildingInformations.showNotEnoughMoneyMessage();
            WarningSystem.ShowWarning(WarningSystem.WarningType.NotEnoughtMoney);
            return;
        }

        if (GameObject.FindObjectsOfType<TowerController>().Length >= MaxTowersCount)
        {
            WarningSystem.ShowWarning(WarningSystem.WarningType.MaxTowersCountPlaced);
            return;
        }

        if (towers[index].Type == TypeOfBuildng.Booster)
        {
            bool boosterBuildingIsPlaced = GameObject.FindObjectsOfType<BoosterController>().Length > 0;
            
            if (boosterBuildingIsPlaced)
            {
                WarningSystem.ShowWarning(WarningSystem.WarningType.SecondBooster);
                return;
            }
        }

        selectedBuilidng = Instantiate(towers[index].TowerPrefab, Input.GetTouch(0).position, Quaternion.identity, transform);
        selectedBuilidng.GetComponent<TowerController>().ShowTowerViewRange(true);

        TowerController.ShowTowerSpawnRange(selectedBuilidng, true);
    }

    public void MoveBuilding(int index)
    {
        if (towers[index] == null) return;

        if (towers[index].GetPrice() > GamePlayerInformation.Instance.GetBalance())
            return;

        if (selectedBuilidng == null) return;

        if (Input.touchCount > 0)
        {
            Vector3 pos = Input.GetTouch(0).position;

            Ray ray = Camera.main.ScreenPointToRay(pos);
            RaycastHit hit;

            if (Physics.Raycast(ray, out hit, 1000)) //, 1 << 6))
            {
                posibilityOfPlace = hit.transform.gameObject.layer == 6;
                selectedBuilidng.transform.position = new Vector3(hit.point.x, 1f, hit.point.z);
            }
        }
    }

    public void PlaceBuilding(int index)
    {
        if (towers[index] == null) return;

        if (towers[index].GetPrice() > GamePlayerInformation.Instance.GetBalance())
            return;

        if (selectedBuilidng == null) return;

        TowerController.ShowTowerSpawnRange(selectedBuilidng, false);
        

        if (posibilityOfPlace)
        {
            GamePlayerInformation.ChangeBalance(-towers[index].GetPrice());
            
            selectedBuilidng.GetComponent<TowerController>().ShowTowerViewRange(false);
            selectedBuilidng.GetComponent<TowerController>().PlaceTower();
            // StartCoroutine(SetBuildingValues(selectedBuilidng));
            
            posibilityOfPlace = false;
            selectedBuilidng = null;
            
            OnPlaceTower?.Invoke();
        }
        else
        {
            Destroy(selectedBuilidng);
            selectedBuilidng = null;
        }
            
    }


}
