using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.UI;
using Random = System.Random;
using TMPro;
using Assets.Scripts;
using UnityEngine.SceneManagement;
using DefaultNamespace;
using static DefaultNamespace.WarningSystem;

#if UNITY_EDITOR
using UnityEditor;
#endif

[Serializable]
public class SceneData
{
    public string Scene;
    public Sprite Image;
    public string Name;
    public int Lenght;


#if UNITY_EDITOR
    [Space(20)]
    public SceneAsset SceneAsset;

    public void UpdateData()
    {
        Scene = SceneAsset.name;

        
        Name = Scene.Replace('_', ' ');
    }
    #endif  
}


public class VetoController : MonoBehaviour
{
    [Header("Base Data")]
    public SceneData[] Scenes;
    public bool UpdateScenesData;

    [Space(18)]
    [Header("UI")]
    [SerializeField] Button[] mapButtons;
    [SerializeField] TMP_Text timerText;
    [SerializeField] GameObject vetoButton;
    [SerializeField] GameObject readyButton;
    [SerializeField] Animator animator;

    [Header("Actually Values")]
    public SceneData[] scenesRange;
    [SerializeField] int selectedButton;
    [SerializeField] bool haveVeto;
    [SerializeField] float time;

    const float timeToSelect = 15f;

    Random random;

    int vetoCounter = 0;
    int vetoLimit = 3;

    
#if UNITY_EDITOR
    void OnValidate()
    {
        if (UpdateScenesData)
        {
            UpdateScenesData = !UpdateScenesData;

            foreach(var scene in Scenes)
            {
                scene.UpdateData();
            }
        }    
    }
#endif

    void Awake()
    {
        random = new Random(UnityEngine.Random.Range(0, 100));

        haveVeto = true;
        time = timeToSelect;

        selectedButton = -1;


        GenerateScenesList();
    }

    Coroutine StartGameCoroutine;
    void Update()
    {
        if (time > 0)
        { 
            time -= Time.deltaTime;
        }
        else
        {
            time = 0;

            foreach (Button mapButton in mapButtons)
            {
                mapButton.interactable = false;
            }
            
            if (StartGameCoroutine == null)
                StartGameCoroutine = StartCoroutine(StartGameScene());

        }

        vetoButton.SetActive(haveVeto);
        vetoButton.transform.GetChild(0).GetComponent<TMP_Text>().text = $"Veto: {vetoLimit-vetoCounter}/{vetoLimit}";

        UpdateTimerUI();

    }

    IEnumerator StartGameScene()
    {
        readyButton.SetActive(false);
        haveVeto = false;

        if (selectedButton < 0)
        {
            selectedButton = random.Next(scenesRange.Length);

            int stepsCount = 20;

            int lastSlectedScene = 0;
            for (int i = 0; i < stepsCount; i++)
            {
                List<int> avaiableScenes = Enumerable.Range(0, scenesRange.Length).ToList();
                avaiableScenes.Remove(lastSlectedScene);

                int selectedScene = avaiableScenes[random.Next(avaiableScenes.Count)];

                PlaySelectAnimation(selectedScene);

                lastSlectedScene = selectedScene;

                yield return new WaitForSeconds(0.15f);
            }
        }

        PlaySelectAnimation(selectedButton);


        yield return new WaitForSeconds(1f);


        SceneManager.LoadSceneAsync(scenesRange[selectedButton].Scene);
    }

    void UpdateTimerUI()
    {
        int timeFixed = Mathf.RoundToInt(time * 100);

        timeFixed /= 100;

        if (timeFixed < 0) 
        {
            timeFixed = 0;
        }

        timerText.text = $"time: {timeFixed}";
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
            Transform buttons = mapButtons[i].transform;
            GameObject outline = buttons.GetChild(2).gameObject;
            
            buttons.GetComponent<Image>().sprite = scenesRange[i].Image;

            Transform nameButton = buttons.transform.GetChild(0);
            TMP_Text nameText = nameButton.GetChild(0).GetComponent<TMP_Text>();
            nameText.text = $"{scenesRange[i].Name}";

            Transform lenghtButton = buttons.transform.GetChild(1);
            TMP_Text lenghtText = lenghtButton.GetChild(0).GetComponent<TMP_Text>();
            //lenghtText.text = $"Lenght: {scenesRange[i].Lenght}";

            string difficulty;
            Color color;
            Image outlineColor = outline.GetComponent<Image>();
            

            if(scenesRange[i].Lenght <= 130)
            {
                difficulty = "Hard";
                ColorUtility.TryParseHtmlString("#F50F0F", out color);
            }
            else if (scenesRange[i].Lenght >= 216)
            {
                difficulty = "Easy";
                ColorUtility.TryParseHtmlString("#189500", out color);
            }
            else
            {
                difficulty = "Medium";
                ColorUtility.TryParseHtmlString("#FF9B00", out color);
            }
            lenghtText.text = $"{difficulty}";
            lenghtText.color = color;
            outlineColor.color = color;
            





        }
    }
    
    
    public void SelectScene(int index)
    {
        selectedButton = index;

        PlaySelectAnimation(selectedButton);

    }

    public void Veto(bool repetitions)
    {
        if (!haveVeto)
            return;

        GenerateScenesList(repetitions);

        time = timeToSelect;

        vetoCounter += 1;
        if (vetoCounter >= vetoLimit)
            haveVeto = false;

        PlaySelectAnimation(selectedButton);
    }

    public void SetRead()
    {
        if (selectedButton < 0)
        {
            WarningSystem.ShowWarning(WarningType.MapNotSelected);
            return;
        }

        // if (StartGameCoroutine == null)
        //     StartGameCoroutine = StartCoroutine(StartGameScene());
        time = 0;
    }



    void PlaySelectAnimation(int _selectedButton)
    {
        int layer = 0;
        string clipName = "";// "Base Layer.";

        switch (_selectedButton)
        {
            case 0:
                clipName = "SelectFirstMap";
                break;
            case 1:
                clipName = "SelectSecondMap";
                break;
            case 2:
                clipName = "SelectThirdMap";
                break;
            default:
                clipName = "DeselectAll";
                break;
        }

        animator.Play(clipName, layer);
    }

}
