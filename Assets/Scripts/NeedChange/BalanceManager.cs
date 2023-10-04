using System;
using System.Data.SqlTypes;
using UnityEngine;
public class BalanceManager : MonoBehaviour
{

    public static BalanceManager instance;

    public static Action<long> changeBalance;

    [SerializeField] long balance;


    void Awake()
    {
        changeBalance += ChangeBalance;
    }

    void OnDestroy()
    {
        changeBalance -= ChangeBalance;
    }

    void ChangeBalance(long value) => balance += value;
}

