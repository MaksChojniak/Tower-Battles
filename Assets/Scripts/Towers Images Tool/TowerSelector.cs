#if UNITY_EDITOR

namespace Editor
{
    using UnityEditor;
    using UnityEngine;
    using UnityEngine.UIElements;
    using UnityEditor.UIElements;
    using System.IO;
    using System;
    using UnityEditor.SceneManagement;
    using System.Threading.Tasks;
    using UnityEngine.Rendering;
    using MMK.Extensions;
    using Unity.VisualScripting;
    using System.Collections.Generic;
    using System.Linq;

    public class TowerSelector : EditorWindow
    {

        [MenuItem("Tools/Tower Photos")]
        public static void ShowWindow()
        {
            TowerSelector wnd = GetWindow<TowerSelector>();
            wnd.titleContent = new GUIContent("Tower Selector");
        }




        public VisualElement root;


        string basePath => Application.dataPath;
        string storagePath = "";
        string fullPath => Path.Combine(basePath, storagePath);

        GameObject prefab;
        Quaternion prefab_rotation;

        Vector2Int photoSize;
        bool removeGreenScreen;

        SceneAsset greenScreenScene;

        bool readyToTakePhoto => prefab != null &&
            photoSize.x > 0 && photoSize.y > 0 &&
            greenScreenScene != null;


        event Action OnChangeAnyValue;

        public void CreateGUI()
        {
            root = rootVisualElement;

            // Import UXML
            var visualTree = AssetDatabase.LoadAssetAtPath<VisualTreeAsset>("Assets/Scripts/Towers Images Tool/TowerSelectorWindow.uxml");
            //VisualElement labelFromUXML = visualTree.Instantiate();
            //root.Add(labelFromUXML);

            visualTree.CloneTree(root);

            BindVisualElements(out TextField pathName_TextField, out TextElement fullPath_Text, out ObjectField prefab_ObjectField, out Vector3Field prefabRotation_Vector3Field,
            out ObjectField sceneAsset_ObjectField, out Vector2IntField photoSize_Vector2IntField, out Toggle removeGreenScreen_Toggle, out Button start_Button);

            OnChangeAnyValue += UpdateStartButton;



            pathName_TextField.RegisterValueChangedCallback(OnStoragePathChanged);

            prefab_ObjectField.RegisterValueChangedCallback(OnPrefabChanged);
            prefabRotation_Vector3Field.RegisterValueChangedCallback(OnPrefabRotationChanged);

            sceneAsset_ObjectField.RegisterValueChangedCallback(OnSceneChanged);

            photoSize_Vector2IntField.RegisterValueChangedCallback(OnPhotoSizeChanged);
            removeGreenScreen_Toggle.RegisterValueChangedCallback(OnRemoveGreenScreenStateChanged);

            start_Button.clicked += TakePhoto;



            storagePath = Path.Combine("Scripts", "Towers Images Tool", "Photos");
            pathName_TextField.value = storagePath;

            fullPath_Text.text = fullPath;

            prefab_rotation = Quaternion.Euler(prefabRotation_Vector3Field.value);
            prefabRotation_Vector3Field.value = prefab_rotation.eulerAngles;

            photoSize = photoSize_Vector2IntField.value;
            photoSize_Vector2IntField.value = photoSize;




            #region UIElements event

            void OnStoragePathChanged(ChangeEvent<string> callback)
            {
                storagePath = callback.newValue;
                fullPath_Text.text = fullPath;//SetFullPathText();
                OnChangeAnyValue?.Invoke();
            }

            //void SetFullPathText() => fullPath_Text.text = Path.Combine(basePath, "Assets", "Scripts", storagePath);

            void OnPrefabChanged(ChangeEvent<UnityEngine.Object> callback)
            {
                prefab = (GameObject)callback.newValue;
                OnChangeAnyValue?.Invoke();
            }
            void OnPrefabRotationChanged(ChangeEvent<Vector3> callback)
            {
                prefab_rotation = Quaternion.Euler(callback.newValue);
                OnChangeAnyValue?.Invoke();
            }

            void OnSceneChanged(ChangeEvent<UnityEngine.Object> callback)
            {
                greenScreenScene = ((SceneAsset)callback.newValue);
                OnChangeAnyValue?.Invoke();
            }

            void OnPhotoSizeChanged(ChangeEvent<Vector2Int> callback)
            {
                photoSize = callback.newValue;
                OnChangeAnyValue?.Invoke();
            }
            void OnRemoveGreenScreenStateChanged(ChangeEvent<bool> callback)
            {
                removeGreenScreen = callback.newValue;
                OnChangeAnyValue?.Invoke();
            }


            void UpdateStartButton() => start_Button.SetEnabled(readyToTakePhoto);

            #endregion

        }

        void BindVisualElements(out TextField pathName_TextField, out TextElement fullPath_Text, out ObjectField prefab_ObjectField, out Vector3Field prefabRotation_Vector3Field,
            out ObjectField sceneAsset_ObjectField, out Vector2IntField photoSize_Vector2IntField, out Toggle removeGreenScreen_Toggle, out Button start_Button)
        {
            // Define names for all elements from root
            const string BODY_VISUALELEMENT_NAME = "Body";
            const string BODY_L_VISUALELEMENT_NAME = "Body_L";

            const string PATH_NAME_TEXTFIELD_NAME = "TEXTFIELD_Path";
            const string FULL_PATH_NAME_TEXT_NAME = "TEXT_FullPath";

            const string PREFAB_OBJECTFIELD_NAME = "OBJECTFIELD_Prefab";
            const string PREFAB_ROTATION_VECTOR3FIELD_NAME = "VECTOR3FIELD_PrefabRotation";

            const string SCENE_OBJECTFIELD_NAME = "OBJECTFIELD_GeenScreenScene";
            const string PHOTO_SIZE_VECTOR2FIELD_NAME = "VECTOR2FIELD_PhotoSize";
            const string REMOVE_GREENSCREEN_TOGGLE_NAME = "TOGGLE_RemoveGreenScreen";

            const string START_BUTTON_NAME = "BUTTON_Start";


            // Get all element from root by name
            VisualElement body_VisualElement = this.root.Q<VisualElement>(BODY_VISUALELEMENT_NAME);
            VisualElement body_L_VisualElement = body_VisualElement.Q<VisualElement>(BODY_L_VISUALELEMENT_NAME);

            pathName_TextField = body_L_VisualElement.Q<TextField>(PATH_NAME_TEXTFIELD_NAME);
            fullPath_Text = body_L_VisualElement.Q<TextElement>(FULL_PATH_NAME_TEXT_NAME);

            prefab_ObjectField = body_L_VisualElement.Q<ObjectField>(PREFAB_OBJECTFIELD_NAME);
            prefabRotation_Vector3Field = body_L_VisualElement.Q<Vector3Field>(PREFAB_ROTATION_VECTOR3FIELD_NAME);

            sceneAsset_ObjectField = body_L_VisualElement.Q<ObjectField>(SCENE_OBJECTFIELD_NAME);
            photoSize_Vector2IntField = body_L_VisualElement.Q<Vector2IntField>(PHOTO_SIZE_VECTOR2FIELD_NAME);
            removeGreenScreen_Toggle = body_L_VisualElement.Q<Toggle>(REMOVE_GREENSCREEN_TOGGLE_NAME);

            start_Button = body_L_VisualElement.Q<Button>(START_BUTTON_NAME);
        }




        async void TakePhoto()
        {
            string path = Path.Combine("Assets", "Prefabs", "Towers", "Soldiers");
            string[] guids = AssetDatabase.FindAssets("t:Prefab", new[] { path });
            Debug.Log("Total Prefabs Found: " + guids.Length);
            foreach (string guid in guids)
            {
                string assetPath = AssetDatabase.GUIDToAssetPath(guid);

                if (!assetPath.Contains("Prefabs/Towers/Soldiers") && !assetPath.Contains("Prefabs\\Towers\\Soldiers"))
                {
                    Debug.Log($"wrong path\t {assetPath}");
                    continue;
                }

                // Load the prefab at the given path
                GameObject prefab = AssetDatabase.LoadAssetAtPath<GameObject>(assetPath);

                if (prefab == null)
                {
                    // Log the prefab's name to the console
                    Debug.Log("Found Prefab: " + prefab.name + " at path: " + assetPath);
                    continue;
                }


                await TakePhotosForAllPrefab(prefab, assetPath, prefab.name);

                await Task.Yield();
            }



        }

        async Task TakePhotosForAllPrefab(GameObject prefab, string assetPath, string assetName)
        {
            Debug.Log("Start Take Photo");

            string currentScenePath = EditorSceneManager.GetActiveScene().path;


            await OpenScene(AssetDatabase.GetAssetPath(greenScreenScene));

            GameObject prefab_root = Instantiate(prefab, Vector3.zero, prefab_rotation);
            GameObject[] prefabs = new GameObject[5];
            for (int i = 0; i < 5; i++)
            {
                prefabs[i] = prefab_root.transform.GetChild(0).gameObject;
                prefabs[i].transform.parent = null;
                prefabs[i].SetActive(false);
            }
            DestroyImmediate(prefab_root);

            for (int i = 0; i < 5; i++)
            {
                prefabs[i].transform.rotation = Quaternion.Euler(prefab_rotation.eulerAngles + new Vector3(0, 180, 0));

                prefabs[i].SetActive(true);

                await TakePhotoForPrefabElement(i, assetPath, assetName);

                //prefabs[i].SetActive(false);

                DestroyImmediate(prefabs[i]);

                await Task.Yield();
            }


            await OpenScene(currentScenePath);


            Debug.Log("End Take Photo");
        }



        async Task TakePhotoForPrefabElement(int index, string assetPath, string assetName)
        {
            Texture2D screenshoot = await GetGameSceneScreenshoot();

            if (removeGreenScreen)
            {
                Debug.Log("remove green screen");
                RemoveGreenScreen(ref screenshoot);
            }

            if (screenshoot != null)
            {
                assetPath = assetPath.Replace(".prefab", "").Replace("Prefabs\\", "").Replace("Assets\\", "");

                if (!Directory.Exists(Path.Combine(fullPath, assetPath)))
                    Directory.CreateDirectory(Path.Combine(fullPath, assetPath));

                byte[] bytes = screenshoot.EncodeToPNG();
                await File.WriteAllBytesAsync(Path.Combine(fullPath, assetPath, assetName) + $"{index + 1}" + ".png", bytes);

                AssetDatabase.Refresh();
            }
            else
            {
                Debug.LogError("sccreenshoot is null");
            }
        }



        async Task OpenScene(string path)
        {
            EditorSceneManager.OpenScene(path);

            while (EditorSceneManager.GetActiveScene().path != path)
                await Task.Yield();

        }

        async Task<Texture2D> GetGameSceneScreenshoot()
        {
            Camera mainCamera = Camera.main;

            if (mainCamera == null)
            {
                Debug.LogError("No Main Camera found in the scene.");
                return null;
            }

            RenderTexture renderTexture = new RenderTexture(photoSize.x, photoSize.y, 32);
            mainCamera.targetTexture = renderTexture;

            mainCamera.Render();

            await Task.Yield();

            Texture2D screenshot = new Texture2D(photoSize.x, photoSize.y, TextureFormat.ARGB32, false);

            RenderTexture.active = renderTexture;
            screenshot.ReadPixels(new Rect(0, 0, photoSize.x, photoSize.y), 0, 0);
            screenshot.Apply();

            await Task.Yield();

            mainCamera.targetTexture = null;
            RenderTexture.active = null;

            await Task.Yield();

            return screenshot;
        }

        void RemoveGreenScreen(ref Texture2D source)
        {
            Color[] pixels = source.GetPixels();

            for (int i = 0; i < pixels.Length; i++)
            {
                if (pixels[i] == Color.green)
                    pixels[i] = new Color(0, 0, 0, 0);

            }

            source.SetPixels(pixels);
            source.Apply();

            return;
        }


        void GetPrefabFolderName(out string prefabName, out string prefabFolder)
        {
            prefabName = "";
            prefabFolder = "";

            string assetPath = AssetDatabase.GetAssetPath(prefab);

            if (string.IsNullOrEmpty(assetPath))
            {
                Debug.LogError("Selected object is not part of the Assets folder.");
                return;
            }

            // Get the folder path
            prefabName = System.IO.Path.GetFileNameWithoutExtension(assetPath);
            string folderPath = System.IO.Path.GetDirectoryName(assetPath).Replace(prefabName, "");

            prefabFolder = folderPath.Replace('\\', '/').Replace("Assets/Prefabs/", "");
            Debug.Log(prefabFolder);
            prefabName = prefabName.Replace(".prefab", "");

            //prefabFolder = folderPath.Replace("/", "\\").Replace(Path.Combine(basePath, "Prefabs"), "").Replace(prefabName, "");
        }

    }
}
#endif