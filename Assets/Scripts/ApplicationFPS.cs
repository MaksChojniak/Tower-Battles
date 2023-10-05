using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ApplicationFPS : MonoBehaviour
{
    void Awake()
    {
        Application.targetFrameRate = 75;
    }
}
