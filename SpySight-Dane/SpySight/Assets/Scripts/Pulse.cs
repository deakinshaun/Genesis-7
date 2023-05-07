using System.Collections;
using System.Collections.Generic;
using System.Collections.Specialized;
using System.ComponentModel;
using System.Security.Cryptography;
using UnityEngine;

public class Pulse : MonoBehaviour
{
    public float amplitude = 0.1f;
    public float frequency = 2.0f;
    private Vector3 startingScale;

    // Start is called before the first frame update
    void Start()
    {
        startingScale = transform.localScale; //Get starting Scale of object
    }

    // Update is called once per frame
    void Update()
    {
        float scaleFactor = 1.0f + amplitude * Mathf.Sin(frequency * Time.time);
        Vector3 newScale = startingScale * scaleFactor;

        transform.localScale = newScale;
    }
}
