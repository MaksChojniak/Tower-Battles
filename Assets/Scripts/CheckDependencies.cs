using System;
using System.Collections;
using System.Collections.Generic;
using System.Threading.Tasks;
using UnityEngine;
using Firebase;
using Firebase.Analytics;

public class CheckDependencies : MonoBehaviour
{
	public static bool IsCheckedOrFixed;

	void Awake()
	{
		IsCheckedOrFixed = false;
	}



	public async static Task CheckAndFixDependencies()
	{
		while (!IsCheckedOrFixed)
		{
			var task = FirebaseApp.CheckAndFixDependenciesAsync();
			await Task.WhenAll(task);

			if (!task.IsFaulted && !task.IsCanceled)
			{
				FirebaseAnalytics.SetAnalyticsCollectionEnabled(true);
				IsCheckedOrFixed = true;
			}

			await Task.Yield();
			
		}

	}
	
    
}
