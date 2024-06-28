using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EndPath : MonoBehaviour
{
    public enum EndPathType
    {
        Enemy,
        Tower
    }

    public EndPathType type;


    private void OnTriggerEnter(Collider other)
    {
        if(type == EndPathType.Enemy)
        {
            OnEnemyTriggerEnter(other);
        }
        else if (type == EndPathType.Tower)
        {
            OnTowerTriggerEnter(other);
        }
    }


    void OnEnemyTriggerEnter(Collider other)
    {
        if (other.transform.gameObject.TryGetComponent<EnemyController>(out var enemy))
        {
            int healthValue = enemy.HealthComponent.GetHealth();

            GamePlayerInformation.ChangeHealth(-healthValue);
            enemy.HealthComponent.ChangeHealth(-healthValue);
        }
    }

    void OnTowerTriggerEnter(Collider other)
    { 

    }
}
