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
        SpawnRange.gameObject.layer = LayerMask.NameToLayer("Ground");

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
        bool isAble = true;

        Collider[] colliders = new Collider[20];
        int collidersCount = Physics.OverlapBoxNonAlloc(SpawnRange.transform.position, SpawnRange.transform.lossyScale / 2,
            colliders, Quaternion.identity);

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

}
