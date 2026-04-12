using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GridWrapper : MonoBehaviour
{
    [SerializeField] private Grid grid;
    public static Grid Instance;
    // Start is called before the first frame update
    void Awake()
    {
        if(Instance != null)
            Destroy(this.gameObject);

        Instance = grid;
    }
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    void OnDestroy()
    {
        if(Instance == grid)
        Instance = null;        
    }
}
