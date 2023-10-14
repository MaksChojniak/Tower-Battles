using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ApplicationFPS : MonoBehaviour
{
    void Awake()
    {
        Application.targetFrameRate = 140;
        QualitySettings.vSyncCount = 0;
    }
}
