using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "Enemy", menuName = "Enemy")]
public class Enemy : ScriptableObject
{
    public string EnemyName;
    public Sprite EnemySprite;
    public GameObject EnemyPrefab;
    
    public int Health;
    public float Speed;
    public bool IsGhost;

    public int GetBaseHealth() => Health;
}
