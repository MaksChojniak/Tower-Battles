using JetBrains.Annotations;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NextTowerPageButton : MonoBehaviour
{
    public static event Action OnChangePage;

    [SerializeField] GameObject[] pages;
    [SerializeField] int currentPageIndex;

    [SerializeField] GameObject nextPageButton;
    [SerializeField] GameObject previousPageButton;

    void Start()
    {
        currentPageIndex = 0;
        UpdateButtonVisible();
    }


    public void NextPage(int direction)
    {
        pages[currentPageIndex].SetActive(false);

        currentPageIndex += direction;

        pages[currentPageIndex].SetActive(true);

        UpdateButtonVisible();

        OnChangePage?.Invoke();

    }

    void UpdateButtonVisible()
    {
        previousPageButton.SetActive(true);
        nextPageButton.SetActive(true);

        if (currentPageIndex == 0)
            previousPageButton.SetActive(false);

        if (currentPageIndex + 1 == pages.Length)
            nextPageButton.SetActive(false);
    }
}

