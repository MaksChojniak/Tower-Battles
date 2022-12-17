using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class GameManager : MonoBehaviour
{
    [SerializeField] Transform capsule;

    [SerializeField] bool click = false;


    void Update()
    {
        if(click == false)
            StartCoroutine(Click());

    }

    IEnumerator Click()
    {
        if (Input.touchCount > 0)
        {
            click = true;

            Vector3 pos = Input.GetTouch(0).position;

            Ray ray = Camera.main.ScreenPointToRay(pos);
            RaycastHit hit;

            if (Physics.Raycast(ray, out hit, 1000, 1 << 6))
            {
                capsule.position = new Vector3(hit.point.x, 1f, hit.point.z);

            }

            yield return new WaitForSeconds(0.1f);

            click = false;

        }
    }


}
