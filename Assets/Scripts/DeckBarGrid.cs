using System;
using System.Collections;
using System.Collections.Generic;
using System.Text;
using UnityEngine;
using UnityEngine.UI;

public class DeckBarGrid : MonoBehaviour
{
    [SerializeField] RectTransform[] cells;
    [SerializeField] VerticalLayoutGroup verticalLayoutGroup;

    // [Header("Upload base data")]
    // [SerializeField] bool getbaseData;
    
    [Header("Base Data (Do not change)")]
    [SerializeField] Vector2 cellBaseSize;
    [SerializeField] Vector2 rootSize;
    [SerializeField] RectOffset baseLayoutOffset;

    
    [Header("Actually Data (Do not change)")]
    [SerializeField] Vector2 cellActuallySize;
    [SerializeField] float sizeMultiplier;
    [SerializeField] Vector2 actuallyRootSize;
    [SerializeField] RectOffset actuallyLayoutOffset;


    // [Space(28)]
    // [Header("Setup UI")]
    // [SerializeField] bool setupUI;
    //
    // void OnValidate()
    // {
    //     if (getbaseData)
    //     {
    //         getbaseData = false;
    //
    //         if (cells.Length <= 0)
    //         {
    //             Debug.Log("Cells are empty");
    //             return;
    //         }
    //
    //         GetBaseData();
    //     }
    //     
    //     if (setupUI)
    //     {
    //         setupUI = false;
    //         
    //         StartCoroutine(EditorUpdate());
    //     }
    // }

    void GetBaseData()
    {
        cellBaseSize = cells[0].rect.size;
        
        rootSize = this.GetComponent<RectTransform>().rect.size;
        
        baseLayoutOffset = verticalLayoutGroup.padding;
    }

    // IEnumerator EditorUpdate()
    // {
    //     while (setupUI)
    //     {
    //         UpdateCellSize();
    //
    //         yield return new WaitForSeconds(Time.fixedDeltaTime);
    //     }
    // }

    void Start()
    {
        // GetBaseData();
        
    }

    void LateUpdate()
    {
        UpdateCellSize();
        
    }

    void UpdateCellSize()
    {
        CalculateCellSize();

        ApplyCellSize();
    }

    void CalculateCellSize()
    {
        actuallyRootSize = this.GetComponent<RectTransform>().rect.size;
        
        sizeMultiplier = actuallyRootSize.y / rootSize.y;
        
        cellActuallySize = cellBaseSize * sizeMultiplier;

        actuallyLayoutOffset.left = Mathf.RoundToInt((float)baseLayoutOffset.left * sizeMultiplier);
        actuallyLayoutOffset.right = Mathf.RoundToInt((float)baseLayoutOffset.right * sizeMultiplier);
        actuallyLayoutOffset.top = Mathf.RoundToInt((float)baseLayoutOffset.top * sizeMultiplier);
        actuallyLayoutOffset.bottom = Mathf.RoundToInt((float)baseLayoutOffset.bottom * sizeMultiplier);

    }

    void ApplyCellSize()
    {
        verticalLayoutGroup.padding = actuallyLayoutOffset;

        foreach (var cell in cells)
        {
            cell.sizeDelta = cellActuallySize;
        }
    }
}
