using MMK.Towers;
using MMK;
using System.Collections;
using Towers;
using UnityEngine;
using System.Collections.Generic;
using UnityEngine.EventSystems;
using MMK.Settings;
using Unity.Burst.CompilerServices;
using System;


public struct TouchData
{
    const int maxDistance = 1000;

    RaycastHit hittedObjects;


    public bool HittedAnyObject { get; private set; }
    public bool HittedObjectUI { get; private set; }


    public void Init(Vector3 touchPosition)
    {
        this.HittedAnyObject = false;
       

        var results = new List<RaycastResult>();
        PointerEventData pointerEventData = new PointerEventData(EventSystem.current) { position = touchPosition };
        EventSystem.current.RaycastAll(pointerEventData, results);

        this.HittedObjectUI = results.Count > 0 && results[0].gameObject != null && results[0].gameObject.layer == GameSceneInputHandler.UILayer;

        if (this.HittedObjectUI)
            return;

        Ray ray = Camera.main.ScreenPointToRay(touchPosition);
        this.HittedAnyObject = Physics.Raycast(ray,out this.hittedObjects, maxDistance);
        
    }


    public bool IsObjectHitted(out RaycastHit hit)
    {
        hit = new RaycastHit();

        if (!this.HittedAnyObject)
            return false;

        hit = this.hittedObjects;

        return true;
    }

}


public class GameSceneInputHandler : MonoBehaviour
{
    public static int HitboxLayer => LayerMask.NameToLayer("Hitbox");
    public static int IgnoreLayer => LayerMask.NameToLayer("Ignore Raycast");
    public static int UILayer => LayerMask.NameToLayer("UI");
    public static int RagdollLayer => LayerMask.NameToLayer("Ragdoll");


    public delegate void OnInputClickedDelegate(TouchData data);
    public static event OnInputClickedDelegate OnInputClicked;

    TouchData touchData = new TouchData();


    private void Update()
    {
        if (Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Began)
            CheckClickedObject();

    }


    void CheckClickedObject()
    {
        Vector3 screenPosition = Input.GetTouch(0).position;
        touchData.Init(screenPosition);

        if (!touchData.HittedAnyObject)
            return;

        OnInputClicked?.Invoke(touchData);
    }



}
