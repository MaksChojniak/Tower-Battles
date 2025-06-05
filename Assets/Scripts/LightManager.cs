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
    float startingIntensity = 1.0f;
    private Color currentColor;
    Color startingColor = new Color(1, 0.9568627f, 0.8392157f, 1); // Default color for day light
    private bool wasDayTime = true;
    private float timePassed = 0.0f;

    [Space(10)]
    [Header("Color Settings")]
    [SerializeField] Color dayColor;
    [SerializeField] Color nightColor;


    // Start is called before the first frame update
    void Start()
    {
        // startingIntensity = UnityEngine.Random.Range(nightTime, dayTime);
        // startingColor = nightColor + (startingIntensity / (dayTime - nightTime) * (dayColor - nightColor));
        timePassed = UnityEngine.Random.Range(0f, 1f) * transitionTime;
    }
    void Update()
    {
        if (timePassed > transitionTime)
        {
            wasDayTime = !wasDayTime;
            timePassed = 0.0f;
        }
        if (wasDayTime && (timePassed < transitionTime))
        {
            timePassed += Time.deltaTime;

            currentIntensity = Mathf.Lerp(dayTime, nightTime, timePassed / transitionTime);
            currentColor = Color.Lerp(dayColor, nightColor, timePassed / transitionTime);
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
