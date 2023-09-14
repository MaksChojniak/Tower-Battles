using System;
using System.Data.SqlTypes;
using UnityEngine;
public class GamePlayerInformation : MonoBehaviour
{
    public static GamePlayerInformation instance;

    public static Action<long> changeBalance;
    public static Action<int> changeHP;

    public long balance;
    public int health;


    void Awake()
    {
        instance = this;
        
        changeBalance += ChangeBalance;
        
        changeHP += ChangeHealth;

        health = 100;
        balance = 16500;
    }

    void OnDestroy()
    {
        changeBalance -= ChangeBalance;

        changeHP -= ChangeHealth;
    }

    void ChangeBalance(long value) => balance += value;
    
    void ChangeHealth(int value) => health += value;
}
