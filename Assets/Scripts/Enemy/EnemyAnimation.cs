using System;
using System.Collections;
using System.Collections.Generic;
using System.Data;
using System.Linq;
using System.Threading.Tasks;
using System.Xml.Schema;
using MMK.Towers;
using Pooling;
using TMPro;
using UnityEngine;
using UnityEngine.AddressableAssets;
using UnityEngine.ResourceManagement.AsyncOperations;
using Random = UnityEngine.Random;

// namespace Enemy
// {
public class EnemyAnimation : MonoBehaviour
{
    static ParticlePoolManager BloodPoolManager;
    Particle CreateBloodParticle() => Instantiate(BloodParticlePrefab, BloodPoolManager.transform).GetComponent<Particle>();
    void DestroyBloodParticle(Particle particle) => Destroy(particle);
    void ResetBloodParticle(Particle particle)
    {
        particle.gameObject.SetActive(false);
        particle.transform.position = Vector3.zero;
    }
    void BeforeSpawnBloodParticle(Particle particle)
    {
        particle.transform.position = this.transform.position;
        particle.gameObject.SetActive(true);
    }





    public delegate void SetSelectedAnimationDelegate(bool state);
    public SetSelectedAnimationDelegate SetSelectedAnimation;

    public delegate void SetBurningAnimationDelegate(bool state, int level);
    public SetBurningAnimationDelegate SetBurningAnimation;



    public GameObject BloodParticlePrefab;
    public GameObject[] BurningParticlePrefabs;

    // public AnimationClip MoveClip;

    public Transform Body;

    [SerializeField] GameObject healthObject;
    GameObject healthPanel => healthObject.transform.GetChild(0).gameObject;
    TMP_Text healthText => healthPanel.transform.GetChild(0).GetComponent<TMP_Text>();


    public EnemyController EnemyController { private set; get; }
    public Animator Animator { private set; get; }


    public const string MOVE_CLIP_NAME = "Move";

    const string SELECTED_MATERIAL_ADDRESS = "Zombie Selected.mat";
    const string OUTLINE_MATERIAL_ADDRESS = "Zombie Outline.mat";



    void Awake()
    {
        if (BloodPoolManager == null)
        {
            BloodPoolManager = ParticlePoolManager.InitParticlePool("Blood Pool");
            BloodPoolManager.Pool = new Pool<Particle>(CreateBloodParticle, DestroyBloodParticle, ResetBloodParticle, 40);
        }


        EnemyController = this.GetComponent<EnemyController>();

        if (this.TryGetComponent<Animator>(out var animator))
            Animator = animator;
        else
            Debug.LogException(new Exception("Enemy doesn't have Animator"));

        InitializeAnimationClips();

        RegisterHandlers();



    }

    void OnDestroy()
    {
        UnregisterHandlers();

        if (outlineMaterialHandle.IsValid())
            Addressables.Release(outlineMaterialHandle);
        if (selectedMaterialHandle.IsValid())
            Addressables.Release(selectedMaterialHandle);
    }

    void Start()
    {
        StartCoroutine(SpawnMaterials());

    }

    void Update()
    {
        if (healthPanel.activeSelf)
            healthText.text = $"{EnemyController.HealthComponent.GetHealth()} HP";
    }

    void FixedUpdate()
    {

    }

    void LateUpdate()
    {
        if (healthPanel.activeSelf)
            UpdateTextRotation();
    }




    #region Register & Unregister Handlers

    void RegisterHandlers()
    {
        EnemyController.HealthComponent.OnTakeDamage += PlayTakeDamageAnimation;
        EnemyController.HealthComponent.OnDie += PlayDieAnimation;
        EnemyController.MovementComponent.OnMove += PlayMoveAnimation;

        SetSelectedAnimation += OnSetSelectedAnimation;

        SetBurningAnimation += OnSetBurningAnimation;
        EnemyController.HealthComponent.OnDie += () => OnSetBurningAnimation(false, 0);

    }

    void UnregisterHandlers()
    {
        SetBurningAnimation -= OnSetBurningAnimation;

        SetSelectedAnimation -= OnSetSelectedAnimation;

        EnemyController.MovementComponent.OnMove -= PlayMoveAnimation;
        EnemyController.HealthComponent.OnDie -= PlayDieAnimation;
        EnemyController.HealthComponent.OnTakeDamage -= PlayTakeDamageAnimation;
    }

    #endregion



    void InitializeAnimationClips()
    {
        // if (MoveClip == null)
        //     throw new NullReferenceException("RagdollClip doesn't exist  [value = null]");

        //Animator.AddClip(MovementClip, MOVEMENT_CLIP_NAME);

    }


    void PlayMoveAnimation(float speed)
    {
        Animator.speed = speed / 2f;
    }



    #region Select Animation

    void UpdateTextRotation()
    {
        Vector3 direction = (Camera.main.transform.position - this.transform.position);
        Quaternion rotation = Quaternion.Euler(healthObject.transform.rotation.x, Quaternion.LookRotation(direction, Vector3.up).y, healthObject.transform.rotation.z);
        healthObject.transform.rotation = rotation;


        float scale = this.GetGameScaleUI();
        healthObject.transform.localScale = Vector3.one * scale;

    }



    void OnSetSelectedAnimation(bool state)
    {
        foreach (var meshRenderer in Body.GetComponentsInChildren<MeshRenderer>())
        {
            SetMaterials(meshRenderer, state);
        }

        healthPanel.SetActive(state);

    }


    static Material SelectedMaterial;
    static Material OutlineMaterial;

    void SetMaterials(MeshRenderer meshRenderer, bool state)
    {
        List<Material> materials = new List<Material>(meshRenderer.materials);// { meshRenderer.materials[0] };


        Material selectedMaterial = materials.FirstOrDefault(mat => mat.name.Contains(SelectedMaterial.name) || SelectedMaterial.name.Contains(mat.name));
        if (selectedMaterial != null)
            materials.Remove(selectedMaterial);

        Material outlineMaterial = materials.FirstOrDefault(mat => mat.name.Contains(OutlineMaterial.name) || OutlineMaterial.name.Contains(mat.name));
        if (outlineMaterial != null)
            materials.Remove(outlineMaterial);


        if (state)
        {
            materials.Add(SelectedMaterial);
            materials.Add(OutlineMaterial);
        }


        meshRenderer.materials = materials.ToArray();

    }


    static AsyncOperationHandle<Material> selectedMaterialHandle;
    static AsyncOperationHandle<Material> outlineMaterialHandle;
    IEnumerator SpawnMaterials()
    {

        if (!selectedMaterialHandle.IsValid())
        {
            selectedMaterialHandle = Addressables.LoadAssetAsync<Material>(SELECTED_MATERIAL_ADDRESS);
            yield return selectedMaterialHandle;

            if (selectedMaterialHandle.Status != AsyncOperationStatus.Succeeded)
                yield break;

            SelectedMaterial = new Material(selectedMaterialHandle.Result);

        }


        if (!outlineMaterialHandle.IsValid())
        {
            outlineMaterialHandle = Addressables.LoadAssetAsync<Material>(OUTLINE_MATERIAL_ADDRESS);
            yield return outlineMaterialHandle;

            if (outlineMaterialHandle.Status != AsyncOperationStatus.Succeeded)
                yield break;

            OutlineMaterial = new Material(outlineMaterialHandle.Result);

        }


    }


    #endregion



    #region Take Damage Animation

    void PlayTakeDamageAnimation(bool IsBurning)
    {
        if (!IsBurning)
        {
            //Particle bloodParticle = Instantiate(BloodParticlePrefab, this.transform.position, this.transform.rotation).GetComponent<Particle>();
            //bloodParticle.StartCoroutine(PlayBloodAnimation(bloodParticle.gameObject));
            Particle bloodParticle = BloodPoolManager.Pool.Get(BeforeSpawnBloodParticle);
            
            if (bloodParticle == null)
                return;

            PlayBloodAnimation(bloodParticle);

        }
    }


    async void PlayBloodAnimation(Particle bloodParticle)
    {
        ParticleSystem bloodParticleSystem = bloodParticle.transform.GetChild(0).GetComponent<ParticleSystem>();

        bloodParticleSystem.Play();

        while (bloodParticleSystem != null && bloodParticleSystem.isPlaying)
            await Task.Yield();

        BloodPoolManager.Pool.Release(bloodParticle);
    }
    

    #endregion



    #region Die Animation

    [ContextMenu(nameof(PlayDieAnimation))]
    void PlayDieAnimation()
    {
        SetSelectedAnimation(false);

        PlayRagdoll();

    }

    void PlayRagdoll()
    {
        Destroy(Animator);

        if (Body == null)
        {
            Debug.LogException(new Exception("Body is null"));
            return;
        }

        Rigidbody[] rigidbodies = Body.transform.GetChild(0).GetComponentsInChildren<Rigidbody>();
        foreach (var rb in rigidbodies)
        {
            rb.gameObject.layer = LayerMask.NameToLayer("Ragdoll");

            rb.isKinematic = false;

            Vector3 direction = (rb.transform.right * Random.Range(10f, 25f) * (Random.Range(0, 100) % 2 == 0 ? 1 : -1)) +
                                (rb.transform.forward * Random.Range(10f, 25f) * (Random.Range(0, 100) % 2 == 0 ? 1 : -1));
            rb.AddForce(direction, ForceMode.Impulse);

        }
    }

    #endregion



    #region Burning Animation

    GameObject lastSpawnedBurningFlames;
    void OnSetBurningAnimation(bool state, int level)
    {

        if (state)
        {
            lastSpawnedBurningFlames = Instantiate(BurningParticlePrefabs[level], this.transform.position, this.transform.rotation, this.transform);

            ParticleSystem particle = lastSpawnedBurningFlames.GetComponent<ParticleSystem>();
            particle.Play();
        }
        else if (lastSpawnedBurningFlames != null)
        {
            Destroy(lastSpawnedBurningFlames);
            lastSpawnedBurningFlames = null;
        }


    }

    #endregion


}


// }
