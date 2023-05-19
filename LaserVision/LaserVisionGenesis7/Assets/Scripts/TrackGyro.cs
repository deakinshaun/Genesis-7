using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Bolt;

public class TrackGyro :  MonoBehaviour
{
    void Start()
    {
        Input.gyro.enabled = true;
    }

    void Update()
    {
        this.transform.rotation = Quaternion.Euler(90, 0, 90) * Input.gyro.attitude * Quaternion.Euler(180, 180, 0);
    }
}
