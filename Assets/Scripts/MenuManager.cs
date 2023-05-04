using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class MenuManager : MonoBehaviour
{
    public void StartGame()
    {
        SceneManager.LoadSceneAsync( Random.Range(Scenes.gameScenes[0], Scenes.gameScenes[Scenes.gameScenes.Count - 1]) );
    }
}
