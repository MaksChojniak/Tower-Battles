using System;
using System.Collections;
using System.Collections.Generic;
using System.Threading.Tasks;
using MMK;
using UI;
using UI.Animations;
using UnityEngine;
using UnityEngine.SceneManagement;

public class PauseMenu : MonoBehaviour
{
    delegate void OnPauseDelegate(bool pauseState);
    event OnPauseDelegate OnPause;


    // [Header("Properties UI")]
    [Header("Animations UI")]
    [SerializeField] Animator Animator;
    [Space]
    [SerializeField] AnimationClip PauseAnimationUI;
    string openPauseAnimationName => PauseAnimationUI.name;
    string closePauseAnimationName => PauseAnimationUI.name + reversedAnimation;
    [Space]
    [SerializeField] AnimationClip SettingsAnimationUI;
    string openSettingsAnimationName => SettingsAnimationUI.name;
    string closeSettingsAnimationName => SettingsAnimationUI.name + reversedAnimation;
    [Space]
    [SerializeField] AnimationClip ExitConfirmationAnimationUI;
    string openExitConfirmationAnimationName => ExitConfirmationAnimationUI.name;
    string closeExitConfirmationAnimationName => ExitConfirmationAnimationUI.name + reversedAnimation;

    const string reversedAnimation = "_Reversed"; 


    bool lastSettingsState;
    bool lastExitConfirmationState;


    void Awake()
    {
        lastSettingsState = false;
        lastExitConfirmationState = false;

        RegisterHandlers();
        
    }

    void OnDestroy()
    {
        UnregisterRegister();
        
    }
    


    void OnApplicationPause(bool pauseStatus)
    {
        // if(!pauseStatus)
        //     Pause();
    }

    void OnApplicationFocus(bool hasFocus)
    {
        if(!hasFocus)
            Pause();
    }



#region Register & Unregister Handlers

    
    void RegisterHandlers()
    {
        OnPause += OnPauseStateChanged;

        GameResult.OnEndGame += OnEndGame;
    }

    void UnregisterRegister()
    {
        GameResult.OnEndGame -= OnEndGame;

        OnPause -= OnPauseStateChanged;

    }
    
    
#endregion
    
    void OnEndGame() => Destroy(this.gameObject);
    
    
#region Pause & Unpause

    
    public async void Pause()
    {
        Animator.Play(openPauseAnimationName);
        
        OnPause?.Invoke(true);
    }

    public void UnPause()
    {
        OnPause?.Invoke(false);
        
        Animator.Play(closePauseAnimationName);
    }


    void OnPauseStateChanged(bool pauseState)
    {
        Time.timeScale = pauseState ? 0f : 1f;
        
        if(!pauseState)
            Settings(false);
    }

    
#endregion


    public void ChangeSettingsPanelState() => Settings(!lastSettingsState);
    
    void Settings(bool state)
    {
        if(lastSettingsState == state)
            return;

        if(state)
            Animator.Play(openSettingsAnimationName);
        else
            Animator.Play(closeSettingsAnimationName);
        
        lastSettingsState = state;
    }

    
    
    
    public void Exit()
    {
        Animator.Play(openExitConfirmationAnimationName);
        
        Settings(false);
    }

    public void OnConfirmExiting()
    {
        OnPause?.Invoke(false);
        
        GameResult.ExitFromGame?.Invoke();
        // SceneManager.LoadSceneAsync(GlobalSettingsManager.GetGlobalSettings.Invoke().mainMenuScene);

    }
    
    public void OnCloseExiting() => Animator.Play(closeExitConfirmationAnimationName);
    
    



    // public void PauseStateChange()
    // {
    //     if(!PauseMenuUI.activeSelf)
    //         OnOpenPauseMenu();
    //     else 
    //         OnClosePauseMenu();
    // }
    //
    //
    //
    // public void ResumeGame()
    // {
    //     PauseStateChange();
    // }
    //
    // public void SettingsPanelStateChange()
    // {
    //     if (ExitPanelUI.activeSelf)
    //         ExitConfirmationPanelStateChange();
    //
    //
    //     OptionsPanelUI.SetActive(!OptionsPanelUI.activeSelf);
    // }
    //
    // public void ExitConfirmationPanelStateChange()
    // {
    //     if (OptionsPanelUI.activeSelf)
    //         SettingsPanelStateChange();
    //
    //     ExitPanelUI.SetActive(!ExitPanelUI.activeSelf);
    // }
    //
    // public void ExitGame(bool stay)
    // {
    //     ExitPanelUI.SetActive(false);
    //
    //     if (stay)
    //         return;
    //
    //     PauseStateChange();
    //
    //     SceneManager.LoadSceneAsync(GlobalSettingsManager.GetGlobalSettings().mainMenuScene);
    // }
    //
    //
    //
    // void CloseAllPanels()
    // {
    //     PauseMenuUI.SetActive(false);
    //     OptionsPanelUI.SetActive(false);
    //     ExitPanelUI.SetActive(false);
    // }
    //
    //
    // void OnOpenPauseMenu()
    // {
    //     CloseAllPanels();
    //
    //     PauseMenuUI.SetActive(!PauseMenuUI.activeSelf);
    //
    //     Time.timeScale = 0f;
    // }
    //
    // void OnClosePauseMenu()
    // {
    //     CloseAllPanels();
    //
    //     Time.timeScale = 1f;
    // }

}
