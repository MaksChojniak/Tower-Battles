using UnityEngine;

public class VoxelMapOptimizer : MonoBehaviour
{
    public Camera bakeCamera;
    public bool deleteHidden = false;
    public float rayOffset = 0.01f;

    public void PruneOccludedCubes()
    {
        if (bakeCamera == null)
        {
            Debug.LogError("📷 Bake Camera not assigned.");
            return;
        }

        AddTemporaryBoxColliders();

        int hidden = 0;
        int visible = 0;

        foreach (Transform layer in transform)
        {
            foreach (Transform cube in layer)
            {
                if (!cube.gameObject.activeInHierarchy)
                    continue;

                Renderer renderer = cube.GetComponent<Renderer>();
                if (renderer == null)
                    continue;

                if (IsVisibleFromCamera(cube, renderer))
                {
                    visible++;
                }
                else
                {
                    hidden++;
                    if (deleteHidden)
                        DestroyImmediate(cube.gameObject);
                    else
                        cube.gameObject.SetActive(false);
                }
            }
        }

        Debug.Log($"✅ Pruned cubes. Visible: {visible}, Hidden: {hidden}");
    }

    public void RestoreAllCubes()
    {
        int restored = 0;

        foreach (Transform layer in transform)
        {
            foreach (Transform cube in layer)
            {
                if (cube != null && !cube.gameObject.activeSelf)
                {
                    cube.gameObject.SetActive(true);
                    restored++;
                }
            }
        }

        Debug.Log($"🔁 Restored {restored} cubes.");
    }

    private void AddTemporaryBoxColliders()
    {
        int added = 0;
        foreach (Transform layer in transform)
        {
            foreach (Transform cube in layer)
            {
                if (!cube.GetComponent<Collider>())
                {
                    cube.gameObject.AddComponent<BoxCollider>();
                    added++;
                }
            }
        }

        Debug.Log($"📦 BoxColliders added: {added}");
    }

    private bool IsVisibleFromCamera(Transform cube, Renderer renderer)
    {
        Vector3[] points = GetSamplePoints(renderer.bounds);

        foreach (var point in points)
        {
            Vector3 dir = point - bakeCamera.transform.position;
            Ray ray = new Ray(bakeCamera.transform.position, dir.normalized);

            if (Physics.Raycast(ray, out RaycastHit hit, dir.magnitude + rayOffset))
            {
                if (hit.transform == cube)
                    return true; // At least one point is visible
            }
        }

        return false; // All points occluded
    }

    private Vector3[] GetSamplePoints(Bounds bounds)
    {
        Vector3 center = bounds.center;
        Vector3 extents = bounds.extents;

        return new Vector3[]
        {
            center, // original center
            center + new Vector3(extents.x, 0, 0),
            center - new Vector3(extents.x, 0, 0),
            center + new Vector3(0, extents.y, 0),
            center - new Vector3(0, extents.y, 0),
            center + new Vector3(0, 0, extents.z),
            center - new Vector3(0, 0, extents.z)
        };
    }
}
