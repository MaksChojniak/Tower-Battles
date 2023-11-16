using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class PauseMenu : MonoBehaviour
{

    [SerializeField] GameObject PauseMenuUI;
    [SerializeField] GameObject OptionsPanelUI;
    [SerializeField] GameObject ExitPanelUI;

    
    void Update()
    {
        
    }

    public void PauseStateChange()
    {
        if(!PauseMenuUI.activeSelf)
            OnOpenPauseMenu();
        else 
            OnClosePauseMenu();
    }

   

    public void ResumeGame()
    {
        PauseStateChange();
    }

    public void SettingsPanelStateChange()
    {
        if (ExitPanelUI.activeSelf)
            ExitConfirmationPanelStateChange();


        OptionsPanelUI.SetActive(!OptionsPanelUI.activeSelf);
    }

    public void ExitConfirmationPanelStateChange()
    {
        if (OptionsPanelUI.activeSelf)
            SettingsPanelStateChange();

        ExitPanelUI.SetActive(!ExitPanelUI.activeSelf);
    }

    public void ExitGame(bool stay)
    {
        ExitPanelUI.SetActive(false);

        if (stay)
            return;

        PauseStateChange();

        SceneManager.LoadSceneAsync(Scenes.mainMenuScene);
    }



    void CloseAllPanels()
    {
        PauseMenuUI.SetActive(false);
        OptionsPanelUI.SetActive(false);
        ExitPanelUI.SetActive(false);
    }


    void OnOpenPauseMenu()
    {
        CloseAllPanels();

        PauseMenuUI.SetActive(!PauseMenuUI.activeSelf);

        Time.timeScale = 0f;
    }

    void OnClosePauseMenu()
    {
        CloseAllPanels();

        Time.timeScale = 1f;
    }

}
