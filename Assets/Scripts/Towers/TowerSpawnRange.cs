using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class TowerSpawnRange : MonoBehaviour
{
    public Action<bool> SetState;
    public Action<bool> SetActive;
    public Action Place;

    [SerializeField] Material SpawnRangeAbleMaterial;
    [SerializeField] Material SpawnRangeUnableMaterial;

    [SerializeField] GameObject SpawnRange;

    [SerializeField] bool IsPlaced;

    void Awake()
    {
        SetState += OnSetState;
        SetActive += OnSetActive;
        Place += OnPlace;

    }

    IEnumerator Start()
    {
        //SpawnRange.gameObject.layer = LayerMask.NameToLayer("Ground");

        yield return new WaitUntil(new Func<bool>( () => IsPlaced));

        SpawnRange.gameObject.layer = LayerMask.NameToLayer("SpawnRange");
    }

    void OnDestroy()
    {
        SetState -= OnSetState;
        SetActive -= OnSetActive;
        Place -= OnPlace;
    }


    void OnPlace()
    {
        IsPlaced = true;
    }

    void OnSetState(bool state)
    {
        SpawnRange.GetComponent<MeshRenderer>().material = state ? SpawnRangeAbleMaterial : SpawnRangeUnableMaterial;
    }

    void OnSetActive(bool state) => SpawnRange.SetActive(state);


    public bool IsAble()
    {
        if (!SpawnPointCheck())
            return false;

        bool isAble = true;

        Collider[] colliders = new Collider[20];
        int collidersCount = Physics.OverlapBoxNonAlloc(SpawnRange.transform.position, SpawnRange.transform.lossyScale / 2,
            colliders, Quaternion.identity);

        if(collidersCount > 1)
        {
            Debug.Log("collidersCount > 1");
            return false;
        }

        for(int i = 0; i < collidersCount; i++)
        { 
            if (colliders[i].gameObject.layer == LayerMask.NameToLayer("SpawnRange"))
            {
                Debug.Log(colliders[i].gameObject.name);
                isAble = false;
                break;
            }
        }

        //Physics.CheckBox(SpawnRange.transform.position, SpawnRange.transform.localScale, Quaternion.identity );
        Debug.Log($"is able - {isAble}");

        return isAble;
    }
    
    bool SpawnPointCheck()
    {
        Vector3 SpawnRangePosition = SpawnRange.transform.position;

        Vector3 localScale = SpawnRange.transform.localScale;

        Vector3 pointA = SpawnRangePosition + new Vector3(-0.5f * localScale.x, 0, -0.5f * localScale.z);
        Vector3 pointB = SpawnRangePosition + new Vector3(0.5f * localScale.x, 0, -0.5f * localScale.z);
        Vector3 pointC = SpawnRangePosition + new Vector3(0.5f * localScale.x, 0, 0.5f * localScale.z);
        Vector3 pointD = SpawnRangePosition + new Vector3(-0.5f * localScale.x, 0, 0.5f * localScale.z);

        Vector3[] points = { pointA, pointB, pointC, pointD };

        for(int i = 0; i < points.Length; i++)
        {
            RaycastHit hit;
            Ray ray = new Ray(points[i], Vector3.down);
            if (!Physics.Raycast(ray, out hit, 0.5f))
            {
                return false;
            }
        }

        return true;
    }


}
