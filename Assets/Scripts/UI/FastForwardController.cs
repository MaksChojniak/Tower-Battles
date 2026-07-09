using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

[System.Serializable]
struct SpeedButton
{
    public float speed;
    public GameObject button;
}

public class FastForwardController : MonoBehaviour
{
    [SerializeField] float gameSpeed = 1.0f;
    [SerializeField] GameObject speedControlPanel;
    [SerializeField] GameObject currentSpeedPanel;
    [SerializeField] List<SpeedButton> currentSpeedButtons;
    // Start is called once before the first execution of Update after the MonoBehaviour is created
    void Start()
    {
        ToggleCurrentSpeedPanel(gameSpeed);
    }
    void Update()
    {
        currentSpeedPanel.SetActive(!speedControlPanel.activeSelf);
    }
    public void SetGameSpeed(float speed)
    {
        Time.timeScale = speed;
    }
    
    public void ToggleSpeedControlPanel()
    {
        currentSpeedPanel.SetActive(false);
        speedControlPanel.SetActive(true);
    }
    public void ToggleCurrentSpeedPanel(float speed)
    {
        SetGameSpeed(speed);
        speedControlPanel.SetActive(false);
        currentSpeedPanel.SetActive(true);
        
        foreach (var btn in currentSpeedButtons)
        {
            btn.button.SetActive(btn.speed == speed);
        }

    }
    
    void OnDestroy()
    {
        SetGameSpeed(1.0f);
    }
}
