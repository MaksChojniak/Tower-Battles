using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;


public class CameraVideo : MonoBehaviour
{
    [SerializeField] Camera _camera;

    [SerializeField] Quaternion startRotation;
    [SerializeField] Quaternion endRotation;
    [SerializeField] float lerpRatio;

    [Space(18)]
    bool startAnimation = true;

    private void Start()
    {
        Cursor.lockState = CursorLockMode.Locked;
        Cursor.visible = false;
    }

    private void Update()
    {
        if (startAnimation)
        {
            StopAllCoroutines();

            StartCoroutine(AnimateCamera());

            startAnimation = false;
        }
    }

    IEnumerator AnimateCamera()
    {
        _camera.transform.rotation = startRotation;

        while (_camera.transform.rotation != endRotation)
        {
            _camera.transform.rotation = Quaternion.Slerp(_camera.transform.rotation, endRotation, lerpRatio);

            yield return new WaitForSeconds(0.01f);
        }
    }
}
