using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DropMarker : MonoBehaviour
{
    public GameObject marker;

    public void drop()
    {
        Instantiate(marker, transform.position, transform.rotation);
        
    }
}
