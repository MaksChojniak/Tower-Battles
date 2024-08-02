#if UNITY_EDITOR

using System;
using System.IO;
using System.Linq;
using System.Threading.Tasks;
using System.Collections.Generic;

using UnityEditor;
using UnityEditor.SceneManagement;

using UnityEngine;
using UnityEngine.UIElements;
using UnityEngine.SceneManagement;

using TMPro;



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
            selectedScenes = scenes.ToDictionary(scene => scene, scene => false);

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
    
    class ComponentData
    {
        public delegate void UpdateComponentSelectionDelegate(Type type, bool state);
        public UpdateComponentSelectionDelegate UpdateComponentSelection;

        public readonly List<Type> components;
        public Dictionary<Type, bool> selectedComponents { get; private set; }

        
        public ComponentData()
        {
            components = GetComponents();
            selectedComponents = components.ToDictionary(type => type, type => false);

            UpdateComponentSelection += OnUpdateComponentSelection;
        }

        void OnUpdateComponentSelection(Type type, bool state)
        {
            selectedComponents[type] = state;
        }

        
#region Static

        static List<Type> GetComponents()
        {
            return new List<Type>
            {
                typeof(TMP_Text),
                // Add other text components if needed
            };
        }
        
#endregion
        
        
    }

    
    
    public class Translator : EditorWindow
    {
        
        // Data
        ScenesData scenesData;
        ComponentData componentData;

        bool isAnySceneSelected => scenesData.selectedScenes.Values.Any(selected => selected);
        bool isAnyComponentSelected => componentData.selectedComponents.Values.Any(selected => selected);


        
        // Visual Elements
        ListView scenesListView;
        List<Toggle> scenesToggles = new List<Toggle>();
            
        ListView componentsListView;
        List<Toggle> componentsToggles = new List<Toggle>();
        // Toggle selectAllScenesToggle;
        Button translateButton;
        Button selectAllButton;
        Button deselectAllButton;
        
        
        

        [MenuItem("Tools/Translators")]
        public static void ShowWindow()
        {
            Translator wnd = GetWindow<Translator>();
            wnd.titleContent = new GUIContent("Add Translating Component");
            wnd.Show();

        }



        public void CreateGUI()
        {
            // Load scenes
            scenesData = new ScenesData();
            
            // Load components
            componentData = new ComponentData();
            
            
            
            // Load UXML
            var visualTree = AssetDatabase.LoadAssetAtPath<VisualTreeAsset>("Assets/Scripts/Editor/Custom Editor/TranslatorWindow.uxml");
            visualTree.CloneTree(rootVisualElement);

            
#region Bind UI Elements

            // Bind UI elements
            VisualElement headerElement = rootVisualElement.Q<VisualElement>("Header");
            VisualElement bodyElement = rootVisualElement.Q<VisualElement>("Body");

            VisualElement scenesElement = bodyElement.Q<VisualElement>("Panel_Scenes");
            VisualElement translateElement = bodyElement.Q<VisualElement>("Panel_Translate");
            
            scenesListView = scenesElement.Q<ListView>("ViewList_Scenes");
            componentsListView = translateElement.Q<ListView>("ViewList_Components");
            
            VisualElement scenesButtonsElement = scenesElement.Q<VisualElement>("Panel_ScenesButtons");
            VisualElement translateButtonsElement = translateElement.Q<VisualElement>("Panel_TranslateButton");
            
            selectAllButton = scenesButtonsElement.Q<Button>("Btn_SelectAll");
            deselectAllButton = scenesButtonsElement.Q<Button>("Btn_DeselectAll");
            translateButton = translateButtonsElement.Q<Button>("Btn_Translate");
            //
            // selectAllScenesToggle = rootVisualElement.Q<Toggle>("selectAllScenes");
            
  #endregion

            
            
            // View List Scenes
            List<string> scenesNames = scenesData.scenes.Select(scene => scene.Name).ToList();
            CreateToggle(scenesListView, scenesNames, (i, state) =>
            {
                scenesData.UpdateSceneSelection(scenesData.scenes[i], state);
                
                componentsListView.SetEnabled(isAnySceneSelected);
                if(!isAnySceneSelected)
                    SetAllTogglesActive(componentsToggles, false);
            }, out scenesToggles);



            // View list Components
            List<string> componentsNames = componentData.components.Select(scene => scene.FullName).ToList();
            CreateToggle(componentsListView, componentsNames, (i, state) =>
            {
                componentData.UpdateComponentSelection(componentData.components[i], state);
                
                translateButton.SetEnabled(isAnyComponentSelected);
            }, out componentsToggles);
            componentsListView.SetEnabled(isAnySceneSelected);



            // Set up toggle and button
            // selectAllScenesToggle.RegisterValueChangedCallback(evt => OnSelectAllScenes(evt.newValue));


            selectAllButton.clicked += () =>
            {
                SetAllTogglesActive(scenesToggles, true);
            };
            deselectAllButton.clicked += () =>
            {
                SetAllTogglesActive(scenesToggles, false);
            };


            // Translate Button
            translateButton.clicked += () =>
            {
                Translate();
                SetAllTogglesActive(componentsToggles, false);
                SetAllTogglesActive(scenesToggles, false);
            };
            translateButton.SetEnabled(isAnyComponentSelected);

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
                // toggle.RegisterValueChangedCallback(evt =>
                // {
                //     scenesData.UpdateSceneSelection(scene, evt.newValue);
                //
                //     componentListView.SetEnabled(isAnySceneSelected);
                // });
                // scenesToggles.Add(toggle);
            };
            listView.selectionType = SelectionType.Multiple;

            toggles = _toggles;
        }



        void SetAllTogglesActive(List<Toggle> toggles, bool state)
        {
            foreach (var toggle in toggles)
            {
                toggle.value = state;
            }
        }
        
        


        // void OnSceneSelectionChange(IEnumerable<object> selectedScenes)
        // {
        //     foreach (var scene in scenes)
        //     {
        //         scene.Selected = selectedScenes.Contains(scene);
        //     }
        // }

        
        
        // componentListView.SetEnabled(isAnySceneSelected);
        //
        // componentListView.itemsSource = componentData.components;
        // componentListView.makeItem = () => new Toggle();
        // componentListView.bindItem = (element, i) =>
        // {
        //     Type component = componentData.components[i];
        //     var toggle = element as Toggle;
        //
        //     // Apply Style
        //     toggle.text = component.FullName;
        //     toggle.style.backgroundColor = new StyleColor(new Color(0, 0, 0, 0.1f));
        //     toggle.style.marginTop = new StyleLength(new Length(1, LengthUnit.Percent));
        //     toggle.style.paddingLeft = new StyleLength(new Length(2, LengthUnit.Percent));
        //
        //     // Apply Event
        //     toggle.RegisterValueChangedCallback(evt =>
        //     {
        //         componentData.UpdateComponentSelection(component, evt.newValue);
        //
        //         translateButton.SetEnabled(isAnyComponentSelected);
        //     });
        //     componentsToggles.Add(toggle);
        // };
        // componentListView.selectionType = SelectionType.Multiple;
        


        // void OnSelectAllScenes(bool isSelected)
        // {
        //     foreach (var scene in scenes)
        //     {
        //         scene.Selected = isSelected;
        //     }
        //     scenesListView.Rebuild();
        // }

        
        
        
        async void Translate()
        {
            List<SceneInfo> selectedScenes = scenesData.selectedScenes.Where(pair => pair.Value).Select(pair => pair.Key).ToList();
            List<Type> selectedComponentNames = componentData.selectedComponents.Where(pair => pair.Value).Select(pair => pair.Key).ToList();

            foreach (var sceneInfo in selectedScenes)
            {
                await OpenScene(sceneInfo, selectedComponentNames);
            }

            Debug.Log("Translation components added successfully.");
            
        }


        
        
#region Static
        
        async static Task OpenScene(SceneInfo sceneInfo, List<Type> selectedComponentNames)
        {
            Scene scene = EditorSceneManager.OpenScene(sceneInfo.Path, OpenSceneMode.Additive);
            
            foreach (var componentType in selectedComponentNames)
            {
                await FindCopmonents(componentType);
                
                await Task.Yield();
            }
            
            EditorSceneManager.MarkSceneDirty(scene);
            EditorSceneManager.SaveScene(scene);
            EditorSceneManager.CloseScene(scene, true);
            
        }


        async static Task FindCopmonents(Type componentType)
        {
            var components = GameObject.FindObjectsOfType(componentType);

            foreach (var component in components)
            {
                GameObject componentObject = ((MonoBehaviour)component).gameObject;

                // if (!componentObject.TryGetComponent<TMP_TextTranslator>(out var TMP_translator))
                    // TMP_translator = componentObject.AddComponent<TMP_TextTranslator>();
                
                    
                await Task.Yield();
            }


            // var translatedArray = await TranslateStringArrayAsync(texts, "en", "pl");
            // for (int i = 0; i < translatedArray.Count; i++)
            // {
            //     Debug.Log($"src lang: {"en"}, src {texts[i]} | out lang: {"pl"}, out: {translatedArray[i]}");
            // }


        }


        // static string[] TextTranslate(string input, string languagePair, Encoding encoding)
        // {
        //
        // }
        

#endregion

        

    }
}

#endif
