using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NextTowerPageButton : MonoBehaviour
{
    [SerializeField] GameObject towerPage1;
    [SerializeField] GameObject towerPage2;

    void Start()
    {

        towerPage1.SetActive(true);
        towerPage2.SetActive(false);
    }

    public void ChangeToNextPage()
    {

        towerPage1.SetActive(!towerPage1.activeSelf);
        towerPage2.SetActive(!towerPage2.activeSelf);
        
    }
}

