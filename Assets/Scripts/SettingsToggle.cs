using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SettingsToggle : MonoBehaviour
{
    public bool IsOn
    {
        get
        {
            return isOn;
        }
        set
        {
            isOn = value;

            OnvalueChanged();
        }
    }

    private void Awake()
    {
        OnvalueChanged();
    }

    [SerializeField] bool isOn;

    [Space(18)]
    [SerializeField] GameObject CheckImage;
    [SerializeField] GameObject CrossImage;


    public void ValueChange()
    {
        IsOn = !IsOn;
    }

    void OnvalueChanged()
    {
        CheckImage.SetActive(isOn);
        CrossImage.SetActive(!isOn);
    }
}
