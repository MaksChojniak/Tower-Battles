using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpawnPlayerManager : MonoBehaviour
{

    public GameObject playerManager;

    void Awake()
    {
        if (GameObject.FindGameObjectWithTag("PlayerManager") == null)
        {
            var manager = Instantiate(playerManager, Vector3.zero, Quaternion.identity);
            manager.tag = "PlayerManager";

            DontDestroyOnLoad(manager);
        }
    }
}
