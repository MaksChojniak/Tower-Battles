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

    static RaycastHit[] hittedObjects = new RaycastHit[50];


    public bool HittedAnyObject { get; private set; }
    public bool HittedObjectUI { get; private set; }


    public TouchData(Vector3 touchPosition)
    {
        this.HittedAnyObject = false;
        this.HittedObjectUI = EventSystem.current != null && EventSystem.current.IsPointerOverGameObject();

        if (HittedObjectUI)
            return;


        Ray ray = Camera.main.ScreenPointToRay(touchPosition);
        ray.origin += -Camera.main.transform.forward * 5;

        int hittedObjectsCount = Physics.RaycastNonAlloc(ray, hittedObjects, maxDistance);
        this.HittedAnyObject = hittedObjectsCount > 0;
    }


    public bool IsObjectHitted(out RaycastHit hit)
    {
        hit = new RaycastHit();

        if (!this.HittedAnyObject)
            return false;

        hit = hittedObjects[0];

        return true;
    }


    //public bool IsObjectHitted(out Ray rayFromScreen)
    //{
    //    rayFromScreen = new Ray();

    //    if (this.TouchedObjectUI != null && this.TouchedObjectUI.layer == GameSceneInputHandler.UILayer)
    //        return false;

    //    rayFromScreen = Camera.main.ScreenPointToRay(this.ScreeTouchPosition);

    //    return true;
    //}



    //public static GameObject UIRaycast(PointerEventData pointerData)
    //{
    //    var results = new List<RaycastResult>();
    //    //EventSystem.current.RaycastAll(pointerData, results);
    //    EventSystem.current.RaycastAll(pointerData, results);

    //    return results.Count < 1 ? null : results[0].gameObject;
    //}

    //public static PointerEventData ScreenPosToPointerData(Vector2 screenPos) => new(EventSystem.current) { position = screenPos };

}


public class GameSceneInputHandler : MonoBehaviour
{
    public static int HitboxLayer => LayerMask.NameToLayer("Hitbox");
    public static int IgnoreLayer => LayerMask.NameToLayer("Ignore Raycast");
    public static int UILayer => LayerMask.NameToLayer("UI");
    public static int RagdollLayer => LayerMask.NameToLayer("Ragdoll");


    public delegate void OnInputClickedDelegate(TouchData data);
    public static event OnInputClickedDelegate OnInputClicked;



    private void Update()
    {
        if (Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Began)
            CheckClickedObject();

        


    }


    void CheckClickedObject()
    {
        Vector3 screenPosition = Input.GetTouch(0).position;
        TouchData touch = new TouchData(screenPosition);

        if (!touch.HittedAnyObject)
            return;

        OnInputClicked?.Invoke(touch);
    }



}
