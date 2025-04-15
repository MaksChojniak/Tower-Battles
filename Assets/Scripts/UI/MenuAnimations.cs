using System.Collections;
using System.Collections.Generic;
using UI.Animations;
using UnityEngine;
using UnityEngine.UI;

public class MenuAnimations : MonoBehaviour
{

    [SerializeField] UIAnimation openBattlepass;

    private void Start()
    {
        
    }

    void FixedUpdate()
    {
       
    }


    public void OpenBattlepass() => openBattlepass.PlayAnimation();
}
