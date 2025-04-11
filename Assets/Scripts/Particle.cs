using System;
using System.Collections;
using UnityEngine;
using UnityEngine.SceneManagement;


public class Particle : MonoBehaviour
{
    void OnDestroy()
    {
        StopAllCoroutines();
    }
    
   
}