using System.Collections;
using System.Threading.Tasks;
using UnityEngine;

public static class TaskUtility
{

    public static async Task WaitUntil(System.Func<bool> condition, int checkIntervalMilliseconds = 100)
    {
        while (!condition())
            await Task.Delay(checkIntervalMilliseconds);
    }

}