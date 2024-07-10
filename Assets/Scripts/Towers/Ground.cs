using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using MMK.ScriptableObjects;
using UnityEngine;
using UnityEngine.AddressableAssets;
using UnityEngine.ResourceManagement.AsyncOperations;

namespace MMK
{
    public class Ground : MonoBehaviour
    {
        public static float GroundPosY;
        
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
            // LoadMaterialAssets();
            StartCoroutine(LoadMaterialAssets());
            
            CheckGroundPosition();
        }


        void CheckGroundPosition()
        {
            if(groundType == PlacementType.Cliff)
                return;

            GroundPosY = this.transform.position.y + 0.1f;
            // Ray ray = new Ray(this.transform.position + new Vector3(0, 250, 0), Vector3.down);
            // RaycastHit[] hits = new RaycastHit[100];
            // int size = Physics.RaycastNonAlloc(ray, hits);
            //
            // for (int i = 0; i < size; i++)
            // {
            //     RaycastHit hit = hits[i];
            //
            //     if (hit.collider.gameObject.TryGetComponent<Ground>(out var ground) && ground.groundType == PlacementType.Ground)
            //     {
            //         GroundPosY = hit.point.y;
            //         Debug.Log($"Ground Position Y : {GroundPosY}");
            //         return;
            //     }
            // }
            
        }


        // void LoadMaterialAssets()
        // {
        //     List<Material> newMaterials = new List<Material>();
        //
        //     bool haveRenderer = this.TryGetComponent<MeshRenderer>(out var renderer);
        //     if (!haveRenderer)
        //         return;
        //
        //
        //     var placementHandle = Addressables.LoadAssetAsync<Material>(PLACEMENT_MATERIAL_ADDRESS);
        //     placementMaterial = new Material(placementHandle.WaitForCompletion());
        //     Material oldPlacementMaterial = renderer.materials.FirstOrDefault(material => material.name.Contains("Placement"));
        //     if (oldPlacementMaterial != null)
        //         placementMaterial = oldPlacementMaterial;
        //     else
        //         newMaterials.Add(placementMaterial);
        //     Addressables.Release(placementHandle);
        //     
        //     
        //     
        //     
        //     var outlineHandle = Addressables.LoadAssetAsync<Material>(OUTLINE_MATERIAL_ADDRESS);
        //     outlineMaterial = new Material(outlineHandle.WaitForCompletion());
        //     Material oldOutlineMaterial = renderer.materials.FirstOrDefault(material => material.name.Contains("Outline"));
        //     if (oldOutlineMaterial != null)
        //         outlineMaterial = oldOutlineMaterial;
        //     else
        //         newMaterials.Add(outlineMaterial);
        //     Addressables.Release(outlineHandle);
        //
        //     // placementMaterial = newMaterials[0];
        //     // outlineMaterial = newMaterials[1];
        //
        //
        //     Material[] materials = new Material[renderer.materials.Length + newMaterials.Count];
        //     for (int i = 0; i < renderer.materials.Length; i++)
        //         materials[i] = renderer.materials[i];
        //
        //     for (int i = 0; i < newMaterials.Count; i++)
        //         materials[materials.Length - 1 - i] = newMaterials[i];
        //
        //     renderer.materials = materials;
        //
        //
        // }

        IEnumerator LoadMaterialAssets()
        {
            List<Material> newMaterials = new List<Material>();
            
            bool haveRenderer = this.TryGetComponent<MeshRenderer>(out var renderer);
            if (!haveRenderer)
                yield break;
            

            
            // Load Placement Material
            var placementHandle = Addressables.LoadAssetAsync<Material>(PLACEMENT_MATERIAL_ADDRESS);
            yield return placementHandle;
            
            if(placementHandle.Status != AsyncOperationStatus.Succeeded)
                yield break;
            
            placementMaterial = new Material(placementHandle.Result);
            placementMaterial.shader = Shader.Find("Shader Graphs/Placement");
            Material oldPlacementMaterial = renderer.materials.FirstOrDefault(material => material.name.Contains("Placement"));
            if (oldPlacementMaterial != null)
                placementMaterial = oldPlacementMaterial;
            else
                newMaterials.Add(placementMaterial);
            
            Addressables.Release(placementHandle);


            yield return new WaitForEndOfFrame();
            
            
            // Load Outline Material
            var outlineHandle = Addressables.LoadAssetAsync<Material>(OUTLINE_MATERIAL_ADDRESS);
            yield return outlineHandle;
            
            if(outlineHandle.Status != AsyncOperationStatus.Succeeded)
                yield break;
            
            outlineMaterial = new Material(outlineHandle.Result);
            outlineMaterial.shader = Shader.Find("Shader Graphs/Outline");
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
