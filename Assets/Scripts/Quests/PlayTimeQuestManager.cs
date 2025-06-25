using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayTimeQuestManager : MonoBehaviour
{
    void Awake()
    {
        DontDestroyOnLoad(gameObject);
    }

    // Update is called once per frame
    void Update()
    {
        DailyQuests.OnUpdate?.Invoke(Time.deltaTime);
    }
}
