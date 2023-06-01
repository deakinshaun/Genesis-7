using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;

public class MeshGenarator : MonoBehaviour
{
    public ARMeshManager meshManager;
    public List<MeshFilter> meshFilters;

    private void Start()
    {
        meshManager.meshesChanged += OnMeshesChanged;
    }

    private void OnMeshesChanged(ARMeshesChangedEventArgs args)
    {
        if (args.added != null && args.added.Count > 0)
        {
            foreach (var mesh in args.added)
            {
                var meshFilter = mesh.gameObject.GetComponent<MeshFilter>();
                if (meshFilter == null)
                {
                    meshFilter = mesh.gameObject.AddComponent<MeshFilter>();
                }
                meshFilters.Add(meshFilter);

                var meshRenderer = mesh.gameObject.GetComponent<MeshRenderer>();
                if (meshRenderer == null)
                {
                    meshRenderer = mesh.gameObject.AddComponent<MeshRenderer>();
                }
            }
        }
    }
}







