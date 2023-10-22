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
        Debug.Log("OnTriggerEnter xd");

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
            int healthValue = enemy.GetHealth();

            GamePlayerInformation.ChangeHP(-healthValue);
            enemy.TakeDamage(healthValue);
        }
    }

    void OnTowerTriggerEnter(Collider other)
    { 

    }
}
