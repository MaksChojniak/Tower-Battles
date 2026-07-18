using System;
using DefaultNamespace;
using UnityEngine;

/// <summary>
/// Manages active global buffs from abilities. Applies multipliers to tower stats.
/// </summary>
public class ActiveBuffManager : MonoBehaviour
{
    public static ActiveBuffManager Instance { get; private set; }

    // Current buff multipliers from active ability (default 1 = no effect)
    public BoosterData CurrentBuff; // { get; private set; }

    [SerializeField] private float DamageMultiplier = 2.0f;
    [SerializeField] private float FirerateMultiplier = 1.5f;
    [SerializeField] private float SpeedMultiplier = 0.5f;
    [SerializeField] private float IncomeMultiplier = 2.0f;

    private void Awake()
    {
        // Singleton pattern
        if (Instance != null && Instance != this)
        {
            Destroy(gameObject);
            return;
        }
        Instance = this;
        DontDestroyOnLoad(gameObject);
        ResetBuff();
    }

    // private void InitializeBuff()
    // {
    //     CurrentBuff = new BoosterData
    //     {
    //         UpgradeDiscount = 1f,
    //         FirerateBoost = 1f,
    //         SpwnIntervalBoost = 1f,
    //         IncomeBoost = 1f,
    //         DamageBoost = 1f,
    //         FrostSlowMultiplier = 1f,
    //     };
    // }

    /// <summary>
    /// Activates a global buff based on the ability type.
    /// </summary>
    public void EnableGlobalBuff(AbilityType abilityType)
    {
        ResetBuff(); // Reset to 1 before applying new buff (assuming only one active at a time)
        switch (abilityType)
        {
            case AbilityType.WrathSurge:
                CurrentBuff.DamageBoost = DamageMultiplier; // 100% more damage
                break;
            case AbilityType.RapidFire:
                CurrentBuff.FirerateBoost = FirerateMultiplier; // 50% faster firing
                break;
            case AbilityType.FrostNova:
                CurrentBuff.FrostSlowMultiplier = SpeedMultiplier; // Enemies move at half speed
                break;
            case AbilityType.GoldRush:
                CurrentBuff.IncomeBoost = IncomeMultiplier; // Double income
                break;
            case AbilityType.IronFortress:
                // Example: damage resistance? Could add a damage reduction factor.
                // Not implemented yet.
                // TODO: damage resistance — needs enemy-side logic (e.g. a DamageResistance field
                // on BoosterData read by EnemyController when taking damage). Not implemented yet.
                break;
            default:
                break;
        }
    }

    /// <summary>
    /// Deactivates the current buff, resetting multipliers to 1.
    /// </summary>
    public void DisableGlobalBuff()
    {
        ResetBuff();
    }

    /// <summary>
    /// Resets the buff to neutral (multipliers = 1).
    /// </summary>
    private void ResetBuff()
    {
        CurrentBuff = new BoosterData
        {
            UpgradeDiscount = 1f,
            FirerateBoost = 1f,
            SpwnIntervalBoost = 1f,
            IncomeBoost = 1f,
            DamageBoost = 1f,
            FrostSlowMultiplier = 1f,
        };
    }
}