using System;
using DefaultNamespace.ScriptableObjects;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace DefaultNamespace
{
    public class GameTowerInformations : MonoBehaviour
    {


        [SerializeField] GameObject InforamtionPanel;

        [Space(18)]
        [SerializeField] TMP_Text TowerNameText;
        [SerializeField] Image TowerImage;

        [SerializeField] TowerController LastCheckedTower;

        void Awake()
        {
            TowerController.OnShowTowerInformation += OnShowTowerInformation;
        }
        
        void OnDestroy()
        {
            TowerController.OnShowTowerInformation -= OnShowTowerInformation;
        }

        void Start()
        {
            InforamtionPanel.SetActive(false);
        }


        void OnShowTowerInformation(object data, TypeOfBuildng towerType, bool state, TowerController towerController)
        {
            if (!state && LastCheckedTower != towerController)
                return;
            
            InforamtionPanel.SetActive(state);
            
            if(!InforamtionPanel.activeSelf)
                return;

            LastCheckedTower = towerController;
            
            switch (towerType)
            {
                case TypeOfBuildng.Soldier:
                    ShowSoldierInfo();
                    break;
                case TypeOfBuildng.Farm:
                    ShowFarmInfo();
                    break;
                case TypeOfBuildng.Booster:
                    ShowBoosterInfo();
                    break;
                case TypeOfBuildng.Spawner:
                    ShowSpawnerInfo();
                    break;
            }
            
            Debug.Log(nameof(OnShowTowerInformation));
        }

        void ShowSoldierInfo()
        {
            
        }

        void ShowFarmInfo()
        {
            
        }

        void ShowBoosterInfo()
        {
            
        }

        void ShowSpawnerInfo()
        {
            
        }
        
        
    }
}
