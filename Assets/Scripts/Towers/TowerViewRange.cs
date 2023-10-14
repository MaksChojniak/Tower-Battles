using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SocialPlatforms;
using UnityEngine.UI;

public class TowerViewRange : MonoBehaviour
{
    public Action<bool> SetActive;
    public Action<bool> SetState;

    [SerializeField] Color ViewRangeAble;
    [SerializeField] Color ViewRangeUnable;

    [SerializeField] GameObject ViewRangeObject;
    [SerializeField] Image ViewRangeImage;


    public float ViewRange {
        set 
        {
            _viewRange = value;

            Debug.Log(_viewRange);
            ViewRangeObject.GetComponent<RectTransform>().sizeDelta = new Vector2(_viewRange * 2, _viewRange * 2);
        }
        get
        {
            return _viewRange;
        }
    }
    float _viewRange;

    private void Awake()
    {
        SetState += OnSetState;
        SetActive += OnSetActive;

    }

    private void OnDestroy()
    {
        SetState -= OnSetState;
        SetActive -= OnSetActive;
    }

    public bool IsActive()
    {
        return ViewRangeObject.activeSelf;
    }

    void OnSetState(bool state)
    {
        ViewRangeImage.color = state ? ViewRangeAble : ViewRangeUnable;
    }

    void OnSetActive(bool state)
    {
        ViewRangeObject.SetActive(state);
    }
}
