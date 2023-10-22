using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UI;

public class CustomToggle : MonoBehaviour
{
    [Serializable]
    public struct ToggleImages
    {
       
        public Image ToggleImage;
        [Space(3)]
        public Sprite ToggledOnSprite;
        public Sprite ToggledOffSprite;

        [Space(8)]
        public Image BackgroundImage;
        public Sprite BackgroundSprite;
        [Space(3)]
        public Color ToggleOnColor;
        public Color ToggleOffColor;
    }

    public bool IsOn {
        set 
        {
            isOn = value;
            OnToggleValueChanged?.Invoke(isOn);
        } 
        get 
        {
            return isOn;
        } 
    }
    [SerializeField] bool isOn;

    [Space(10)]
    [Header("Properties")]
    public ToggleImages toggleImages;

    [Space(10)]
    [Header("Events")]
    public UnityEvent<bool> OnToggleValueChanged;

    private void OnValidate()
    {
        IsOn = isOn;
    }


    private void Awake()
    { 
        OnToggleValueChanged.AddListener(SetupToggleImages);

        IsOn = false;
    }

    private void OnDestroy()
    {
        OnToggleValueChanged.RemoveListener(SetupToggleImages);
    }


    void SetupToggleImages(bool value)
    {
        toggleImages.ToggleImage.sprite = value ? toggleImages.ToggledOnSprite : toggleImages.ToggledOffSprite;

        toggleImages.BackgroundImage.sprite = toggleImages.BackgroundSprite;
        toggleImages.BackgroundImage.color = value ? toggleImages.ToggleOnColor : toggleImages.ToggleOffColor;
    }
}
