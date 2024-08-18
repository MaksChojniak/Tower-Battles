using System;
using System.Collections;
using System.Collections.Generic;
using MMK.ScriptableObjects;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class TowerTileUI : MonoBehaviour
{
    public Action<Sprite> UpdateSprite;
    public Action<bool> UpdateLockedState;
    public Action<string> UpdateName;

    [SerializeField] GameObject spriteObject;
    [SerializeField] TMP_Text buildingNameText;
    
    [SerializeField] GameObject lockedMaskPanel;

    [SerializeField] bool isUnlocked;

    [SerializeField] Color lockedColor;
    [SerializeField] Color unlockedColor;

    private void Awake()
    {
        TowerInventory.OnSelectTile += OnSelectTile;
        UpdateSprite += OnUpdateSprite;
        UpdateName += OnUpdateName;
        UpdateLockedState += OnUpdateLockedState;
    }

    private void OnDestroy()
    {
        TowerInventory.OnSelectTile -= OnSelectTile;
        UpdateSprite -= OnUpdateSprite;
        UpdateName -= OnUpdateName;
        UpdateLockedState -= OnUpdateLockedState;
    }

    void OnUpdateLockedState(bool state)
    {
        isUnlocked = state;

        UpdateLockedUI();
    }
    
    void OnUpdateSprite(Sprite sprite)
    {
        spriteObject.GetComponent<Image>().sprite = sprite;
    }

    void OnUpdateName(string _name)
    {
        buildingNameText.text = _name;
    }

    void OnSelectTile(int index, GameObject selectedTile, bool _isUnlocked, Tower tower)
    {
        Image border = this.GetComponent<Image>();
        
        border.enabled = selectedTile == this.gameObject;

        if (selectedTile == this.gameObject)
            UpdateLockedState(_isUnlocked);

        UpdateLockedUI();
    }

    void UpdateLockedUI()
    {
        Image border = this.GetComponent<Image>();
        
        lockedMaskPanel.SetActive(!isUnlocked);
        
        border.color = isUnlocked ? unlockedColor : lockedColor;
    }


}
