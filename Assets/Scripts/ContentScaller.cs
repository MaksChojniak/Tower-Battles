using System;
using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.UI;

public class ContentScaller : MonoBehaviour
{
    [SerializeField] VerticalLayoutGroup verticalLayoutGroup;


    [SerializeField] bool updateUI;


    private void OnValidate()
    {
        if (updateUI)
        {
            updateUI = false;

            UpdateUI();
        }
    }


    public void UpdateUI()
    {
        float bottomPadding = verticalLayoutGroup.padding.bottom;
        float topPadding = verticalLayoutGroup.padding.top;

        float allHeight = bottomPadding + topPadding;
        float spacing = verticalLayoutGroup.spacing;

        for (int i = 0; i < this.transform.childCount; i++)
        {
            allHeight += this.transform.GetChild(i).GetComponent<RectTransform>().sizeDelta.y;
        }

        if(spacing > 0)
            allHeight += spacing * (this.transform.childCount - 1);

        Vector2 sizeDelta = this.transform.GetComponent<RectTransform>().sizeDelta;
        this.transform.GetComponent<RectTransform>().sizeDelta = new Vector2(sizeDelta.x, allHeight);

        UpdateUIOnParent(this.transform);
    }

    void UpdateUIOnParent(Transform root)
    {
        if (root.parent == null)
            return;

        if (root.parent.TryGetComponent<ContentScaller>(out var parent))
            parent.UpdateUI();
        else
            UpdateUIOnParent(root.parent);
    }
}
