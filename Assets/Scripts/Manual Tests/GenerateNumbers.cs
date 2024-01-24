using System;
using System.Collections;
using System.Collections.Generic;
using NUnit.Framework;
using UnityEngine;
using UnityEngine.TestTools;
using Random = UnityEngine.Random;

public class GenerateNumbers
{

    // A UnityTest behaves like a coroutine in Play Mode. In Edit Mode you can use
    // `yield return null;` to skip a frame.
    [UnityTest]
    public IEnumerator GenerateNumbersWithEnumeratorPasses()
    {
        // var gameObject = new GameObject();
        //
        // List<string> sceneNamesList = new List<string>();
        // for (int i = 0; i < 400; i++)
        // {
        //     sceneNamesList.Add($"{i}");
        // }
        // string[] sceneNames = sceneNamesList.ToArray();
        //
        //
        // string[] actuallSceneNames = new string[3];
        //
        // var vetoController = gameObject.AddComponent<VetoControler>();
        //
        // yield return null;
        //
        // for (int i = 0; i < 100000; i++)
        // {
        //     vetoController.TestRandomChoose(sceneNames, actuallSceneNames, new System.Random(Random.Range(0, 100)), false);
        //
        //     yield return null;
        //
        //     // Assert.IsTrue(false, false);
        //     Assert.IsTrue(vetoController.scenesRange[0] != vetoController.scenesRange[1]);
        //     Assert.IsTrue(vetoController.scenesRange[0] != vetoController.scenesRange[2]);
        //     Assert.IsTrue(vetoController.scenesRange[1] != vetoController.scenesRange[2]);
        // }
        
        yield return null;
    }
}
