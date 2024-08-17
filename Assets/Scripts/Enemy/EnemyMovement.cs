using System;
using System.Collections;
using System.Collections.Generic;
using PathCreation;
using UnityEngine;

// namespace Enemy
// {
public class EnemyMovement : MonoBehaviour
{
    public delegate void SetSpeedMultiplierDelegate(bool isBurning);
    public SetSpeedMultiplierDelegate SetSpeedMultiplier;
    
    public delegate void SetSpeedDelegate(float Value);
    public SetSpeedDelegate SetSpeed;

    public delegate void OnMoveDelegate(float Speed);
    public event OnMoveDelegate OnMove;

    
    public float CurrentSpeed => SpeedMultiplier * Speed;
    public float Speed;
    public float DistanceTravelled;
    
    float SpeedMultiplier = 1;

    
    public EnemyController EnemyController {private set; get; }
    
    
    PathCreator pathCreator;

    
    void Awake()
    {
        pathCreator = GameObject.FindGameObjectWithTag("Path").GetComponent<PathCreator>();
        
        EnemyController = this.GetComponent<EnemyController>();
        
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
        Move();
        
    }

    void FixedUpdate()
    {
        
    }



#region Register & Unregister Handlers

    void RegisterHandlers()
    {
        SetSpeed += OnSetSpeed;
        SetSpeedMultiplier += OnSetSpeedMultiplier;

    }

    void UnregisterHandlers()
    {
        SetSpeedMultiplier -= OnSetSpeedMultiplier;
        SetSpeed -= OnSetSpeed;

    }
    
#endregion


    void OnSetSpeedMultiplier(bool isBurning)
    {
        SpeedMultiplier = isBurning ? 0.6f : 1f;
    }

    void OnSetSpeed(float Value)
    {
        Speed = Value;
        
    }
    
    
    
#region Movement
        
    void Move()
    {
        DistanceTravelled += CurrentSpeed * 2.5f * Time.deltaTime;
        transform.position = pathCreator.path.GetPointAtDistance(DistanceTravelled);
        transform.rotation = pathCreator.path.GetRotationAtDistance(DistanceTravelled);

        Debug.Log($"Distance Travelled: {pathCreator.path.length}");

        OnMove?.Invoke(CurrentSpeed);
    }

    public float GetDistanceTravelled() => DistanceTravelled;
        
#endregion    
    

}

// }
