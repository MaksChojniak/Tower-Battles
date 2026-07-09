using UnityEngine;
using UnityEngine.EventSystems;
using System.Collections.Generic;

public class PanelCloser : MonoBehaviour
{
    [SerializeField] GameObject panelToClose;
    // Start is called once before the first execution of Update after the MonoBehaviour is created
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetMouseButtonDown(0))
        {
            // Sprawdzamy, czy kursor znajduje się nad jakimś obiektem UI
            if (!IsPointerOverUIElement())
            {
                panelToClose.SetActive(false);
            }
        }
    }

    private bool IsPointerOverUIElement()
    {
        // Tworzymy nowy PointerEventData i ustawiamy jego pozycję na aktualną pozycję kursora
        PointerEventData eventData = new PointerEventData(EventSystem.current)
        {
            position = Input.mousePosition
        };

        // Tworzymy listę wyników raycasta
        var results = new List<RaycastResult>();

        // Wykonujemy raycast, aby sprawdzić, czy kursor znajduje się nad jakimś obiektem UI
        EventSystem.current.RaycastAll(eventData, results);


        // Sprawdzamy czy którykolwiek z trafionych obiektów jest naszym panelem
        foreach (var result in results)
        {
            if (result.gameObject == panelToClose || result.gameObject.transform.IsChildOf(panelToClose.transform))
            {
                return true; // Kliknięto w panel lub jego zawartość
            }
        }
        return false; // Kliknięto w "wolne miejsce"
    }
}
