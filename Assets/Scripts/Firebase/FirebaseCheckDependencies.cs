using System;
using System.Collections;
using System.Collections.Generic;
using System.Threading.Tasks;
using UnityEngine;
using Firebase;
using Firebase.Analytics;
using Firebase.Auth;
using UnityEditor;
using Firebase.Extensions;

public class FirebaseCheckDependencies : MonoBehaviour
{
	public static bool IsCheckedOrFixed;

	void Awake()
	{
		IsCheckedOrFixed = false;
	}



	public static IEnumerator CheckAndFixDependencies()
	{
		while (!IsCheckedOrFixed)
		{
			FirebaseApp.CheckAndFixDependenciesAsync().ContinueWithOnMainThread(AnalizeResult);


			while(!IsCheckedOrFixed)
				yield return null;


			yield return null;

			void AnalizeResult(Task<DependencyStatus> task)
			{

				var dependencyStatus = task.Result;
				if (dependencyStatus == DependencyStatus.Available)
				{
					Debug.Log("Dependency fixed and checked");
				}
				else
				{
					Debug.LogError($"Could not resolve all Firebase dependencies: {dependencyStatus}");

				}

                IsCheckedOrFixed = true;
			}

			//var task = FirebaseApp.CheckAndFixDependenciesAsync();
			//yield return new WaitUntil( () => task.IsCompleted || task.IsCanceled || task.IsFaulted );

   //         //if (!task.IsFaulted && !task.IsCanceled)
   //         //{
   //         //	//FirebaseAnalytics.SetAnalyticsCollectionEnabled(true);
   //         //	IsCheckedOrFixed = true;
   //         //}

   //         IsCheckedOrFixed = true;

        }

	}
	
    
}
