using System;
using System.Collections;
using System.Collections.Generic;
using Unity.Mathematics;
using UnityEngine;

public class LightManager : MonoBehaviour
{
    [SerializeField] GameObject directionalLight;
    [SerializeField] float nightTime = 0.1f;
    [SerializeField] float dayTime = 1.5f;
    [SerializeField] float transitionTime = 120f;
    private float currentIntensity;
    public float startingIntensity = 1.0f;
    private Color currentColor;
    public Color startingColor = new Color(1, 0.9568627f, 0.8392157f, 1); // Default color for day light
    private bool wasDayTime = true;
    private float timePassed = 0.0f;
    private int cycles = 0;

    [Space(10)]
    [Header("Color Settings")]
    [SerializeField] Color dayColor;
    [SerializeField] Color nightColor;


    // Start is called before the first frame update
    void Start()
    {
        SetLightColor(currentColor);
        SetLightIntensity(currentIntensity);
    }
    void Update()
    {
        if (timePassed > transitionTime)
        {
            wasDayTime = !wasDayTime;
            timePassed = 0.0f;
            cycles += 1;
        }
        if (wasDayTime && (timePassed < transitionTime))
        {
            timePassed += Time.deltaTime;

            currentIntensity = Mathf.Lerp(cycles>0 ? dayTime:startingIntensity, nightTime, timePassed / transitionTime);
            currentColor = Color.Lerp(cycles>0 ? dayColor:startingColor, nightColor, timePassed / transitionTime);
        }
        else if (!wasDayTime && (timePassed < transitionTime))
        {
            timePassed += Time.deltaTime;

            currentIntensity = Mathf.Lerp(nightTime, dayTime, timePassed / transitionTime);
            currentColor = Color.Lerp(nightColor, dayColor, timePassed / transitionTime);
        }
        SetLightIntensity(currentIntensity);
        SetLightColor(currentColor);
    }
    void SetLightIntensity(float intensityLevel)
    {
        float intensity = intensityLevel;
        if (directionalLight != null)
        {
            Light lightComponent = directionalLight.GetComponent<Light>();
            lightComponent.intensity = intensity;
        }
        else
        {
            Debug.LogError("Directional light is not assigned.");
        }
    }
    void SetLightColor(Color lightColor)
    {
        if (directionalLight != null)
        {
            Light lightComponent = directionalLight.GetComponent<Light>();
            lightComponent.color = lightColor;
        }
        else
        {
            Debug.LogError("Directional light is not assigned.");
        }
    }
}
