using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraController : MonoBehaviour
{
    public float rotationSpeed = 5.0f;

    void Update()
    {
        float mouseX = Input.GetAxis("Mouse X");
        float mouseY = Input.GetAxis("Mouse Y");

        
        transform.Rotate(Vector3.up, mouseX * rotationSpeed, Space.World);
        transform.Rotate(Vector3.left, mouseY * rotationSpeed, Space.Self);
    }
}
