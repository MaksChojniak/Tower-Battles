using System;
using MMK.ScriptableObjects;
using UnityEngine;
using UnityEngine.AddressableAssets;
using UnityEngine.ResourceManagement.AsyncOperations;

namespace DefaultNamespace
{
    public class Ground : MonoBehaviour
    {
        public static Action<PlacementType> UpdateGround;
        public static Action OnStopPlacingTower;

        public PlacementType groundType;
        [SerializeField] bool highlighted;


        [SerializeField] Material outlineMaterial;
        [SerializeField] Material placementMaterial;

        const string OUTLINE_MATERIAL_ADDRESS = "Outline.mat";
        const string PLACEMENT_MATERIAL_ADDRESS = "Placement.mat";


       
        void Awake()
        {
            OnStopPlacingTower += OnPlaceTower;
            UpdateGround += OnUpdateGround;
        }

        void OnDestroy()
        {
            OnStopPlacingTower -= OnPlaceTower;
            UpdateGround -= OnUpdateGround; 
        }


        void Start()
        {
            LoadMaterialAssets();
        }


        void LoadMaterialAssets()
        {
            List<Material> newMaterials = new List<Material>();

            bool haveRenderer = this.TryGetComponent<MeshRenderer>(out var renderer);
            if (!haveRenderer)
                return;



            var placementHandle = Addressables.LoadAssetAsync<Material>(PLACEMENT_MATERIAL_ADDRESS);
            placementMaterial = new Material(placementHandle.WaitForCompletion());
            Material oldPlacementMaterial = renderer.materials.FirstOrDefault(material => material.name.Contains("Placement"));
            if (oldPlacementMaterial != null)
                placementMaterial = oldPlacementMaterial;
            else
                newMaterials.Add(placementMaterial);
            Addressables.Release(placementHandle);




            var outlineHandle = Addressables.LoadAssetAsync<Material>(OUTLINE_MATERIAL_ADDRESS);
            outlineMaterial = new Material(outlineHandle.WaitForCompletion());
            Material oldOutlineMaterial = renderer.materials.FirstOrDefault(material => material.name.Contains("Outline"));
            if (oldOutlineMaterial != null)
                outlineMaterial = oldOutlineMaterial;
            else
                newMaterials.Add(outlineMaterial);
            Addressables.Release(outlineHandle);




            Material[] materials = new Material[renderer.materials.Length + newMaterials.Count];
            for (int i = 0; i < renderer.materials.Length; i++)
                materials[i] = renderer.materials[i];

            for (int i = 0; i < newMaterials.Count; i++)
                materials[materials.Length - 1 - i] = newMaterials[i];

            renderer.materials = materials;


        }



        void OnUpdateGround(PlacementType towerPlacementType)
        {
            SetGroundHighlightedState(towerPlacementType == groundType);

        }

        void OnPlaceTower()
        {
            SetGroundHighlightedState(false);
        }

        void SetGroundHighlightedState(bool state)
        {
            highlighted = state;

            float scaleValue = highlighted ? 1.04f : 0f;
            float emissionPowerValue = highlighted ? 0.4f : 0f;

            if (this.TryGetComponent<MeshRenderer>(out var renderer))
            {
                if (outlineMaterial != null && groundType == PlacementType.Cliff)
                    outlineMaterial.SetFloat("_Outline_Thickness", scaleValue);

                if (placementMaterial != null)
                    placementMaterial.SetFloat("_EmissionPower", emissionPowerValue);

            }

        }


    }
}
