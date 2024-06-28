using MMK;
using UnityEngine;

// namespace Enemy
// {
public class EnemyAudio : MonoBehaviour
{

    
    public AudioData DieAudio;

    
    public EnemyController EnemyController { private set; get; }
    
    
    public const string AudioParentName = "Audio";



    void Awake()
    {
        EnemyController = this.GetComponent<EnemyController>();
        
        SetupAudioData();
        
        RegisterHandlers();

    }

    void OnDestroy()
    {
        UnregisterHandlers();

    }

    void Start()
    {
        
    }

    void Update()
    {
        
    }

    void FixedUpdate()
    {
        
    }




#region Register& Unregister Handlers

    void RegisterHandlers()
    {
        EnemyController.HealthComponent.OnDie += PlayDieAudio;

    }

    void UnregisterHandlers()
    {
        EnemyController.HealthComponent.OnDie -= PlayDieAudio;
        
    }

#endregion




    void PlayDieAudio()
    {
        DieAudio.AudioSource.Play();
        
    }
    
    

    

#region Setup Prefab

    [ContextMenu(nameof(SetupAudioData))]
    protected virtual void SetupAudioData()
    {
        Transform audioParent = GetAudioParent().transform;

        DieAudio.SetupAudio(audioParent.transform);

    }


    protected GameObject GetAudioParent()
    {
        bool hasAudioParent = false;
        GameObject audioParent = null;

        for (int i = 0; i < this.transform.childCount; i++)
        {
            if (this.transform.GetChild(i).gameObject.name.Contains(AudioParentName))
            {
                hasAudioParent = true;
                audioParent = this.transform.GetChild(i).gameObject;
            }
        }

        if (!hasAudioParent)
            audioParent = new GameObject(AudioParentName);

        audioParent.transform.SetParent(this.transform);

        return audioParent;
    }

#endregion


    
}
// }
