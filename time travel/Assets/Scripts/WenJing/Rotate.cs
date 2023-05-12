using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Rotate : MonoBehaviour
{
    public float turnSpeed = 50.0f;

    void Update()
    {
        float h = Input.GetAxis("Horizontal");
        float v = Input.GetAxis("Vertical");

        transform.rotation *= Quaternion.AngleAxis(h * turnSpeed * Time.deltaTime, transform.up) *
                               Quaternion.AngleAxis(v * turnSpeed * Time.deltaTime, transform.right);
    }
}
