using System;
using UnityEngine;
using UnityEngine.SceneManagement;


public class Particle : MonoBehaviour
{
    void OnDestroy()
    {
        StopAllCoroutines();
    }
    
    
}