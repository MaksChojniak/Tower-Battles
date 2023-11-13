using DefaultNamespace;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using Unity.VisualScripting;
using UnityEngine;

public class FPS : MonoBehaviour
{
    public static FPS Instance;

    [SerializeField] TMP_Text FPSText;
    [SerializeField] int frames;

    private void Awake()
    {
        if(Instance != null)
        {
            Destroy(this.gameObject);
            return;
        }
        else
        {
            Instance = this;
        }

        DontDestroyOnLoad(this.gameObject);

        StopAllCoroutines();
        StartCoroutine(ShowFPS());
    }

    private void OnDestroy()
    {
        if(Instance == this)
        {
            StopAllCoroutines();
        }
    }

    private void Update()
    {
        frames += 1;
    }

    IEnumerator ShowFPS()
    {

        while (true)
        {
            yield return new WaitForSeconds(1);

            FPSText.text = $"{frames} FPS / {Application.targetFrameRate}";

            frames = 0;
        }
    }
}
