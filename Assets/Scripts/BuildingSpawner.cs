using System;
using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.Rendering;
using UnityEngine.UI;
using TMPro;

public class BuildingSpawner : MonoBehaviour
{
    [SerializeField] Building[] buildings;

    [SerializeField] GameObject selectedBuilidng;
    [SerializeField] bool posibilityOfPlace;
    [SerializeField] TMP_Text max1BoosterText;

    void Awake()
    {
        buildings = PlayerTowerInventory.Instance.towerDeck;   
    }

    public void SpawnBuilding(int index)
    {
        if (buildings[index] == null) return;

        if (buildings[index].price > GamePlayerInformation.instance.balance)
        {
            ShowBuildingInformations.showNotEnoughMoneyMessage();
            return;
        }

        if (buildings[index].type == TypeOfBuildng.booster)
        {
            bool boosterBuildingIsPlaced = false;
            foreach (var building in GameObject.FindObjectsOfType<BuildingController>())
            {
                if (building.component.type == TypeOfBuildng.booster)
                    boosterBuildingIsPlaced = true;
            }
            if (boosterBuildingIsPlaced)
            {
                StartCoroutine(Max1Booster());
                return;
            }
        }

        selectedBuilidng = Instantiate(buildings[index].buildingPrefab, Input.GetTouch(0).position, Quaternion.identity, transform);
        selectedBuilidng.AddComponent<BuildingController>().component = buildings[index];
        selectedBuilidng.GetComponent<BuildingController>().SetRangeImageActive(true);

        BuildingController.ShowSpawnRange(selectedBuilidng, true);
    }

    public void MoveBuilding(int index)
    {
        if (buildings[index] == null) return;

        if (buildings[index].price > GamePlayerInformation.instance.balance)
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
        if (buildings[index] == null) return;

        if (buildings[index].price > GamePlayerInformation.instance.balance)
            return;

        if (selectedBuilidng == null) return;

        BuildingController.ShowSpawnRange(selectedBuilidng, false);

        
        if (GameManager.instance.isBuildingsCountMax)
        {
            Destroy(selectedBuilidng);
            selectedBuilidng = null;
            return;
        }


        if (posibilityOfPlace)
        {
            GamePlayerInformation.changeBalance(-buildings[index].price);
            
            selectedBuilidng.GetComponent<BuildingController>().SetRangeImageActive(false);
            StartCoroutine(SetBuildingValues(selectedBuilidng));
            
            posibilityOfPlace = false;
            selectedBuilidng = null;
        }
        else
        {
            Destroy(selectedBuilidng);
            selectedBuilidng = null;
        }
            
    }

    IEnumerator SetBuildingValues(GameObject building)
    {
        yield return new WaitForSeconds(1f);

        building.layer = LayerMask.NameToLayer("Building");
        building.GetComponent<BuildingController>().isPlaced = true;
    }
    IEnumerator Max1Booster()
    {
        max1BoosterText.gameObject.SetActive(true);
        yield return new WaitForSeconds(1.25f);
        max1BoosterText.gameObject.SetActive(false);
    }
}
