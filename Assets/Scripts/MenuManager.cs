using System.Collections;
using System.Collections.Generic;
using DefaultNamespace;
using MMK;
using Player;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class MenuManager : MonoBehaviour
{
    public void StartGame()
    {
        int towersCount = 0;
        // foreach (var towerSlot in PlayerTowerInventory.Instance.TowerDeck)
        foreach (var towerSlot in PlayerController.GetLocalPlayerData().Deck)
        {
            if (towerSlot.Value != null)
                towersCount += 1;
        }
        if (towersCount <= 0)
        {
            WarningSystem.ShowWarning(WarningSystem.WarningType.DeckIsEmpty);
            return;
        }

        SceneManager.LoadSceneAsync(GlobalSettingsManager.GetGlobalSettings().vetoScene);// Random.Range(Scenes.gameScenes[0], Scenes.gameScenes[Scenes.gameScenes.Count - 1]) );
    }
}
