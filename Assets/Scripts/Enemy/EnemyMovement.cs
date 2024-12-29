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
    VertexPath path;



    void Awake()
    {
        pathCreator = GameObject.FindGameObjectWithTag("Path").GetComponent<PathCreator>();
        path = pathCreator.path;
        
        EnemyController = this.GetComponent<EnemyController>();
        
        RegisterHandlers();
        
    }

    void OnDestroy()
    {
        UnregisterHandlers();
        
    }

    void Start()
    {
        //transform.position = path.GetPointAtDistance(DistanceTravelled);
        //transform.rotation = path.GetRotationAtDistance(DistanceTravelled);
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
        transform.position = path.GetPointAtDistance(DistanceTravelled);
        transform.rotation = path.GetRotationAtDistance(DistanceTravelled);

        //transform.SetPositionAndRotation(path.GetPointAtDistance(DistanceTravelled), path.GetRotationAtDistance(DistanceTravelled));
        //Vector3 dir = path.GetDirectionAtDistance(DistanceTravelled);
        //transform.LookAt(dir);
        //transform.rotation = Quaternion.Euler(0, transform.eulerAngles.y, 0);
        //transform.position += dir;


        //Debug.Log($"Distance Travelled: {pathCreator.path.length}");

        OnMove?.Invoke(CurrentSpeed);
    }

    public float GetDistanceTravelled() => DistanceTravelled;
        
#endregion    
    

}

// }
