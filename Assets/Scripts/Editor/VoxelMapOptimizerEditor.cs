using UnityEditor;
using UnityEngine;

[CustomEditor(typeof(VoxelMapOptimizer))]
public class VoxelMapOptimizerEditor : UnityEditor.Editor
{
    public override void OnInspectorGUI()
    {
        DrawDefaultInspector();

        VoxelMapOptimizer pruner = (VoxelMapOptimizer)target;

        GUILayout.Space(10);

        if (GUILayout.Button("🚀 Prune Occluded Cubes"))
        {
            pruner.PruneOccludedCubes();
        }

        if (GUILayout.Button("🔁 Restore All Cubes"))
        {
            pruner.RestoreAllCubes();
        }
    }
}
