using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UI;

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

    public static FastForwardController Instance { get; private set; }
    public float GetGameSpeed() => gameSpeed;

    void Awake()
    {
        if (Instance == null) Instance = this;
        else Destroy(gameObject);

        //Return to normal speed when the game is finished
        GameResult.OnEndGame += HandleEndGame;
    }
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
        gameSpeed = speed;
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

    void HandleEndGame()
    {
        SetGameSpeed(1.0f);
    }
    
    void OnDestroy()
    {
        SetGameSpeed(1.0f);

        if (Instance == this) Instance = null;

        GameResult.OnEndGame -= HandleEndGame;
    }
}
