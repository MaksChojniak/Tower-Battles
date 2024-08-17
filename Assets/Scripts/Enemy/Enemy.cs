using System;
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

    public bool CanSpawnAfterDead;
    public EnemyToSpawn[] EnemiesToSpawn;

    public int GetBaseHealth() => Health;
}


[Serializable]
public class EnemyToSpawn
{
    public Enemy Enemy;
    public int Count;
}