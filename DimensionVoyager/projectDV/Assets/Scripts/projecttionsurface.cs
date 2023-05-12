using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class projecttionsurface : MonoBehaviour
{
    public OVRPassthroughLayer passthrough;
    public bool updateTransfrom = false;
    void Start()
    {
        passthrough.AddSurfaceGeometry(this.gameObject, updateTransfrom);
        GetComponent<MeshRenderer>().enabled = false;
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
