using System;
using UnityEngine;
using PathCreation;
using UnityEngine.UI;

public class EnemyController : MonoBehaviour
{
    public static event Action OnDestroyEnemy;
    public event Action OnMove;
    public Action<float> TakeDamage;
    
    public float DistanceTravelled;

    [Space(18)]
    [SerializeField] Enemy EnemyData;
    [SerializeField] RectTransform HealthBar;

    [Space(18)]
    [SerializeField] float Health;

    PathCreator pathCreator;
    

    void Awake()
    {
        TakeDamage += Damage;
        
        pathCreator = GameObject.FindGameObjectWithTag("Path").GetComponent<PathCreator>();

        Health = EnemyData.GetBaseHealth();
    }

    void OnDestroy()
    {
        TakeDamage -= Damage;
    }

    void Update()
    {
        Move();
        
    }

    void Move()
    {
        DistanceTravelled += EnemyData.Speed * 2.5f * Time.deltaTime;
        transform.position = pathCreator.path.GetPointAtDistance(DistanceTravelled);
        transform.rotation = pathCreator.path.GetRotationAtDistance(DistanceTravelled);
        
        OnMove?.Invoke();
    }

    public float GetDistanceTravelled() => DistanceTravelled;

    public void Damage(float value)
    {
        Health -= value;

        OnTakeDamage();
    }

    void OnTakeDamage()
    {
        UpdateHealthBar();

        if (Health <= 0)
        {
            OnDestroyEnemy?.Invoke();
            Destroy(this.gameObject);
        }
    }

    void UpdateHealthBar()
    {
        HealthBar.GetComponent<Image>().fillAmount = Health <= 0 ? 0 : (float)Health / (float)EnemyData.GetBaseHealth();
    }
    

    
}