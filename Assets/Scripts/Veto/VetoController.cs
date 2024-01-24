using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.UI;
using Random = System.Random;


using UnityEditor;


[Serializable]
public class SceneData
{
    public string Scene;
    public Sprite Image;
    
    [Space(20)]
    public SceneAsset SceneAsset;

    public void UpdateData()
    {
        Scene = SceneAsset.name;
    }
}


public class VetoController : MonoBehaviour
{
    [Header("Base Data")]
    public SceneData[] Scenes;
    public bool UpdateScenesData;

    [Space(18)]
    [Header("UI")]
    [SerializeField] Button[] mapButtons;

    [Header("Actually Values")]
    public SceneData[] scenesRange;
    [SerializeField] int selectedButton;

    Random random;
    
    void OnValidate()
    {
        if (UpdateScenesData)
        {
            UpdateScenesData = false;
            
            for (int i = 0; i < Scenes.Length; i++)
            {
                Scenes[i].UpdateData();
            }
            
        }
        
    }

    void Awake()
    {
        random = new Random(UnityEngine.Random.Range(0, 100));
    
        GenerateScenesList();
    }

    void GenerateScenesList(bool repetitions = true)
    {
        selectedButton = -1;
        RandomChooseScenes(repetitions);

        UpdateButtonSprites();
    }
    
    void RandomChooseScenes(bool repetitions = true)
    {
        int scenesCount = 3;
        
        List<int> ableIndexes = Enumerable.Range(0, Scenes.Length).ToList();

        if (!repetitions)
        {
            for (int i = 0; i < scenesRange.Length; i++)
            {
                ableIndexes.Remove(Array.IndexOf(Scenes, scenesRange[i]));
            }
        }
        
        scenesRange = new SceneData[scenesCount];

        for (int i = 0; i < scenesCount; i++)
        {
            int index = ableIndexes[random.Next(0, ableIndexes.Count)];
            ableIndexes.Remove(index);
            
            SceneData scene = Scenes[index];
            
            scenesRange[i] = scene;
        }
    }

    void UpdateButtonSprites()
    {
        for (int i = 0; i < scenesRange.Length; i++)
        {
            mapButtons[i].GetComponent<Image>().sprite = scenesRange[i].Image;
        }
    }
    
    
    public void SelectScene(int index)
    {
        selectedButton = index;
    }

    public void Veto()
    {
        GenerateScenesList(false);
    }


}
