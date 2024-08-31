using System;
using UnityEngine;


public class Particle : MonoBehaviour
{
    
    
    void OnDestroy()
    {
        StopAllCoroutines();
    }
    
    
}