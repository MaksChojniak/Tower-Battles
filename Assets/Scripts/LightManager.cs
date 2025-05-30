using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LightManager : MonoBehaviour
{
    [SerializeField] GameObject directionalLight;
    public float[] lightIntensityLevels;
    // Start is called before the first frame update
    void Start()
    {
        int i = Random.Range(0, lightIntensityLevels.Length);
        SetLightIntensity(i);
    }
    void SetLightIntensity(int i)
    {
        float intensity = lightIntensityLevels[i];
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
}
