using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TESTMovementCapsule : MonoBehaviour
{
    private void Update()
    {
        this.transform.Translate(-this.transform.right * Time.deltaTime);
    }
}
