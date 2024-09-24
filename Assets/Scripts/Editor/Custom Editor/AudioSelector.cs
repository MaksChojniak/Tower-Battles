#if UNITY_EDITOR

using System;
using System.IO;
using System.Linq;
using System.Threading.Tasks;
using System.Collections.Generic;
using Editor.Custom_Editor;
using UnityEditor;
using UnityEditor.SceneManagement;

using UnityEngine;
using UnityEngine.UIElements;
using UnityEngine.SceneManagement;

using TMPro;
using Unity.VisualScripting;
using UnityEditor.UIElements;
using UnityEngine.Audio;
using UnityEngine.EventSystems;



namespace Editor.Custom_Editor
{
    class SceneInfo
    {
        public int Index { get; set; }
        public string Path { get; set; }
        public string Name { get; set; }
        // public bool Selected { get; private set; }
    }

    class ScenesData
    {
        public delegate void UpdateComponentSceneDelegate(SceneInfo scene, bool state);
        public UpdateComponentSceneDelegate UpdateSceneSelection;
        
        public readonly List<SceneInfo> scenes;
        public Dictionary<SceneInfo, bool> selectedScenes { get; private set; }

        
        public ScenesData()
        {
            scenes = GetScenesSorted();
            
            selectedScenes = new Dictionary<SceneInfo, bool>();
            scenes.ForEach( _scene => selectedScenes.Add(_scene, false) );
            
            UpdateSceneSelection += OnUpdateSceneSelection;
        }
        
        void OnUpdateSceneSelection(SceneInfo scene, bool state)
        {
            selectedScenes[scene] = state;
        }


#region Static

        static List<SceneInfo> GetScenesSorted()
        {
            var sceneList = new List<SceneInfo>();
            var sceneCount = SceneManager.sceneCountInBuildSettings;

            for (int i = 0; i < sceneCount; i++)
            {
                string scenePath = SceneUtility.GetScenePathByBuildIndex(i);
                string sceneName = Path.GetFileNameWithoutExtension(scenePath);
                sceneList.Add(new SceneInfo
                {
                    Index = i,
                    Path = scenePath,
                    Name = sceneName,
                    // Selected = false
                });
            }

            return sceneList;
        }
        
#endregion

        
    }
    

       
        
    }



public class AudioSelector : EditorWindow
{
    public AudioClip selectedAudioClip;

    public AudioMixerGroup selectedAudioMixer;
    

    ScenesData scenesData;
    List<SceneInfo> selectedScenes => scenesData.selectedScenes.Where(pair => pair.Value).Select(pair => pair.Key).ToList();



    bool isAnySceneSelected => scenesData.selectedScenes.Values.Any(selected => selected);


    // Visual Elements
    ListView scenesListView;
    List<Toggle> scenesToggles = new List<Toggle>();

    ListView selectedComponentsListView;
    List<GameObject> selectedCmponentsButtons = new List<GameObject>();

    Button addAudioButton;
    
    Button selectAllButton;
    Button deselectAllButton;

    ObjectField audioClipObjectField;
    ObjectField audioMixerObjectField;




    [MenuItem("Tools/AudioSelector")]
    public static void ShowWindow()
    {
        AudioSelector wnd = GetWindow<AudioSelector>();
        wnd.titleContent = new GUIContent("Select and Add Audio Component");
        wnd.Show();

    }



    public void CreateGUI()
    {
        // Load scenes
        scenesData = new ScenesData();


        // Load UXML
        var visualTree = AssetDatabase.LoadAssetAtPath<VisualTreeAsset>("Assets/Scripts/Editor/Custom Editor/AudioSelectorWindow.uxml");
        visualTree.CloneTree(rootVisualElement);


#region Bind UI Elements

        // Bind UI elements
        VisualElement headerElement = rootVisualElement.Q<VisualElement>("Header");
        VisualElement bodyElement = rootVisualElement.Q<VisualElement>("Body");

        VisualElement scenesElement = bodyElement.Q<VisualElement>("Panel_Scenes");
        VisualElement componentsElement = bodyElement.Q<VisualElement>("Panel_Components");

        scenesListView = scenesElement.Q<ListView>("ViewList_Scenes");

        selectedComponentsListView = componentsElement.Q<ListView>("ViewList_SelectedComponents");

        VisualElement scenesButtonsElement = scenesElement.Q<VisualElement>("Panel_ScenesButtons");
        VisualElement addAudioButtonsElement = componentsElement.Q<VisualElement>("Panel_AddAudioButton");

        selectAllButton = scenesButtonsElement.Q<Button>("Btn_SelectAll");
        deselectAllButton = scenesButtonsElement.Q<Button>("Btn_DeselectAll");
        
        addAudioButton = addAudioButtonsElement.Q<Button>("Btn_AddAudio");

        audioClipObjectField = scenesElement.Q<ObjectField>("ObjectField_AudioClip");
        audioMixerObjectField = scenesElement.Q<ObjectField>("ObjectField_AudioMixer");
        
        //
        // selectAllScenesToggle = rootVisualElement.Q<Toggle>("selectAllScenes");

  #endregion




        audioClipObjectField.RegisterValueChangedCallback(evt =>
        {
            selectedAudioClip = evt.newValue as AudioClip;                // Cast the selected object to AudioClip
            Debug.Log("Selected Audio Clip: " + selectedAudioClip?.name); // Log the selected clip (or null if none)
        });


        audioMixerObjectField.RegisterValueChangedCallback(evt =>
        {
            selectedAudioMixer = evt.newValue as AudioMixerGroup;          // Cast the selected object to AudioMixerGroup
            Debug.Log("Selected Audio Clip: " + selectedAudioMixer?.name); // Log the selected clip (or null if none)
        });
        
        

        // View List Scenes
        List<string> scenesNames = scenesData.scenes.Select(scene => scene.Name).ToList();
        CreateToggle(scenesListView, scenesNames, (i, state) =>
        {
            scenesData.UpdateSceneSelection(scenesData.scenes[i], state);
        }, out scenesToggles);

        
        selectedComponentsListView.makeItem = () => new ObjectField();
        selectedComponentsListView.itemsSource = selectedCmponentsButtons;
        selectedComponentsListView.bindItem = (element, i) =>
        {
            var objectField = element as ObjectField;
        
            objectField.objectType = typeof(GameObject);
        
            objectField.value = selectedCmponentsButtons[i];
            objectField.RegisterValueChangedCallback(evt =>
            {
                selectedCmponentsButtons[i] = evt.newValue as GameObject;
            });
        };
        // Set up toggle and button
        selectAllButton.clicked += () =>
        {
            scenesToggles.ForEach( sceneToggle => sceneToggle.value = true );
        };

        deselectAllButton.clicked += () =>
        {
            scenesToggles.ForEach( sceneToggle => sceneToggle.value = false );
        };

        
        // // View list Components
        // List<string> componentsNames = componentData.components.Select(scene => scene.FullName).ToList();
        // CreateToggle(componentsListView, componentsNames, (i, state) =>
        // {
        //     componentData.UpdateComponentSelection(componentData.components[i], state);
        //     
        //     translateButton.SetEnabled(isAnyComponentSelected);
        // }, out componentsToggles);
        // componentsListView.SetEnabled(isAnySceneSelected);
        



        // Translate Button
        addAudioButton.clicked += () =>
        {
            AddAudio();
            Debug.Log("Add Audio");
        };
        
        Debug.Log($"Selected Scenes: {selectedScenes.Count}");
    }


    
    
    

    void CreateToggle(ListView listView, List<string> names, Action<int, bool> callback, out List<Toggle> toggles)
    {
        toggles = new List<Toggle>();
        List<Toggle> _toggles = toggles;

        listView.itemsSource = names;
        listView.makeItem = () => new Toggle();
        listView.bindItem = (element, i) =>
        {
            var toggle = element as Toggle;

            // Apply Style
            toggle.text = names[i];
            toggle.style.backgroundColor = new StyleColor(new Color(0, 0, 0, 0.1f));
            toggle.style.marginTop = new StyleLength(new Length(1, LengthUnit.Percent));
            toggle.style.paddingLeft = new StyleLength(new Length(2, LengthUnit.Percent));

            // Apply Event
            toggle.RegisterValueChangedCallback(evt => callback(i, evt.newValue));

            _toggles.Add(toggle);
        };
        listView.selectionType = SelectionType.Multiple;

        toggles = _toggles;
    }


    async void AddAudio()
    {

        foreach (var selectedScene in selectedScenes)
        {
            Scene scene = OpenScene(selectedScene);

            await AddAudioComponents(typeof(UnityEngine.UI.Button));
            await AddAudioComponents(typeof(EventTrigger));

            // await RemoveAudioComponents();

            SaveScene(scene);
            
        }
        
    }


    async Task AddAudioComponents(Type type)
    {
        var components = GameObject.FindObjectsOfType(type, true);

        foreach (var component in components)
        {
            GameObject componentObject = ((MonoBehaviour)component).gameObject;
            
            if(componentObject.scene.rootCount == 0)
                continue;
            
            Audio.Audio audio;
            if (!componentObject.TryGetComponent<Audio.Audio>(out audio))
                audio = componentObject.AddComponent<Audio.Audio>();

            if (audio.IsCustom)
                continue;
            
            audio.Clip = selectedAudioClip;
            audio.AudioMixer = selectedAudioMixer;


            await Task.Yield();
        }

        
    }
    
    
    async Task RemoveAudioComponents()
    {
        Audio.Audio[] buttons = FindObjectsOfType<Audio.Audio>(true);

        for (int i = 0; i < buttons.Length; i++)
        {
            DestroyImmediate(buttons[i]);

            await Task.Yield();
        }
        
    }



#region Static

    
    static Scene OpenScene(SceneInfo sceneInfo)
    {
        Scene scene = EditorSceneManager.OpenScene(sceneInfo.Path, OpenSceneMode.Additive);
        return scene;
    }
    
    static void SaveScene(Scene scene)
    {
        EditorSceneManager.MarkSceneDirty(scene);
        EditorSceneManager.SaveScene(scene);
        EditorSceneManager.CloseScene(scene, true);
    }


#endregion




}


#endif
