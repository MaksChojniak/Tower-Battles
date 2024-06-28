using System;
using System.Collections;
using System.Collections.Generic;
using PathCreation;
using UnityEngine;

// namespace Enemy
// {
public class EnemyMovement : MonoBehaviour
{
    public delegate void SetSpeedDelegate(float Value);
    public SetSpeedDelegate SetSpeed;

    public delegate void OnMoveDelegate();
    public event OnMoveDelegate OnMove;


    public float Speed;
    public float DistanceTravelled;
    

    
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

    }

    void UnregisterHandlers()
    {
        SetSpeed -= OnSetSpeed;

    }
    
#endregion



    void OnSetSpeed(float Value)
    {
        Speed = Value;
        
    }
    
    
    
#region Movement
        
    void Move()
    {
        DistanceTravelled += Speed * 2.5f * Time.deltaTime;
        transform.position = pathCreator.path.GetPointAtDistance(DistanceTravelled);
        transform.rotation = pathCreator.path.GetRotationAtDistance(DistanceTravelled);

        OnMove?.Invoke();
    }

    public float GetDistanceTravelled() => DistanceTravelled;
        
#endregion    
    

}

// }
