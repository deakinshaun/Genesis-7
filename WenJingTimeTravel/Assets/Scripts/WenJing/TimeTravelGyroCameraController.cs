using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TimeTravelGyroCameraController : MonoBehaviour
{
    private Gyroscope gyro;
    // Start is called before the first frame update
    void Start()
    {
        if (SystemInfo.supportsGyroscope)
        {
            gyro = Input.gyro;
            gyro.enabled = true;
        }
        
    }

    // Update is called once per frame
    void Update()
    {
        if (gyro != null)
        {
            transform.Rotate(-gyro.rotationRateUnbiased.x, -gyro.rotationRateUnbiased.y, 0);
        }
    }


    /// <summary>
    /// Check if the item is in the center of the screen
    /// </summary>
    void ObjectInCam()
    {

    }


}
