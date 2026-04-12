using UnityEngine;
using UnityEditor;
using UnityEngine.UI;
using System.Collections.Generic;
using System.IO;

public class MaterialReplacerWindow : EditorWindow
{
    public Material materialToReplace;
    public Material newMaterial;

    [MenuItem("Tools/Material Replacer Pro")]
    public static void ShowWindow()
    {
        GetWindow<MaterialReplacerWindow>("Material Replacer");
    }

    private void OnGUI()
    {
        GUILayout.Label("Podmień materiały w komponentach Image", EditorStyles.boldLabel);
        
        EditorGUILayout.Space();
        materialToReplace = (Material)EditorGUILayout.ObjectField("Materiał do zmiany:", materialToReplace, typeof(Material), false);
        newMaterial = (Material)EditorGUILayout.ObjectField("Nowy materiał:", newMaterial, typeof(Material), false);
        EditorGUILayout.Space();

        if (GUILayout.Button("Podmień tylko na SCENIE"))
        {
            ReplaceInScene();
        }

        EditorGUILayout.Space();

        GUI.backgroundColor = Color.yellow;
        if (GUILayout.Button("Podmień w PREFABACH (Cały Projekt)"))
        {
            if (EditorUtility.DisplayDialog("Potwierdzenie", "Czy na pewno chcesz przeszukać wszystkie prefaby w projekcie i podmienić materiały? Operacja może chwilę potrwać.", "Tak", "Anuluj"))
            {
                ReplaceInPrefabs();
            }
        }
        GUI.backgroundColor = Color.white;
    }

    private void ReplaceInScene()
    {
        if (!ValidateMaterials()) return;

        Image[] allImages = GameObject.FindObjectsByType<Image>(FindObjectsInactive.Include, FindObjectsSortMode.None);
        int count = 0;

        Undo.RecordObjects(allImages, "Replace UI Materials Scene");

        foreach (Image img in allImages)
        {
            if (img.material == materialToReplace)
            {
                img.material = newMaterial;
                EditorUtility.SetDirty(img);
                count++;
            }
        }

        UnityEditor.SceneManagement.EditorSceneManager.MarkAllScenesDirty();
        Debug.Log($"<color=cyan>Sukces:</color> Podmieniono materiał w {count} obiektach na scenie.");
    }

    private void ReplaceInPrefabs()
    {
        if (!ValidateMaterials()) return;

        // 1. Znajdź wszystkie pliki .prefab w folderze Assets
        string[] allPrefabGuids = AssetDatabase.FindAssets("t:Prefab");
        int totalChanged = 0;

        foreach (string guid in allPrefabGuids)
        {
            string path = AssetDatabase.GUIDToAssetPath(guid);
            
            // 2. Wczytaj prefab jako GameObject (AssetEditing pozwala na bezpieczne zmiany)
            GameObject prefabRoot = AssetDatabase.LoadAssetAtPath<GameObject>(path);
            if (prefabRoot == null) continue;

            // 3. Sprawdź wszystkie Image wewnątrz prefaba (łącznie z dziećmi)
            Image[] imagesInPrefab = prefabRoot.GetComponentsInChildren<Image>(true);
            bool prefabChanged = false;

            foreach (Image img in imagesInPrefab)
            {
                if (img.material == materialToReplace)
                {
                    // Używamy Undo dla prefabów, aby móc cofnąć zmiany
                    Undo.RecordObject(img, "Replace UI Materials Prefab");
                    img.material = newMaterial;
                    prefabChanged = true;
                    totalChanged++;
                }
            }

            // 4. Jeśli coś zmieniliśmy, zapisz prefab
            if (prefabChanged)
            {
                EditorUtility.SetDirty(prefabRoot);
                PrefabUtility.SavePrefabAsset(prefabRoot);
                Debug.Log($"Zaktualizowano prefab: {path}");
            }
        }

        AssetDatabase.SaveAssets();
        AssetDatabase.Refresh();
        Debug.Log($"<color=green>FINAŁ:</color> Podmieniono materiał w {totalChanged} komponentach wewnątrz prefabów.");
    }

    private bool ValidateMaterials()
    {
        if (materialToReplace == null || newMaterial == null)
        {
            EditorUtility.DisplayDialog("Błąd", "Musisz przypisać oba materiały w polach powyżej!", "OK");
            return false;
        }
        return true;
    }
}