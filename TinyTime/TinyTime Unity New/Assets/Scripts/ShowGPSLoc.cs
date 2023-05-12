using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class ShowGPSLoc : MonoBehaviour
{
    public TextMeshProUGUI DisplayCoords;

    // Update is called once per frame
    void Update()
    {
        showGPS();
    }

    void showGPS()
    {
        if (!Input.location.isEnabledByUser)
        {
            DisplayCoords.text = "Location service is not enabled on this device";
        }
        while (Input.location.status == LocationServiceStatus.Initializing && Input.location.isEnabledByUser)
        {
            DisplayCoords.text = "Please wait while this service is initialiing";
        }
        if (Input.location.status == LocationServiceStatus.Failed)
        {
            DisplayCoords.text = "Service failed, unable to determine location";
        }
        else
        {
            DisplayCoords.text = "Lat: " + Input.location.lastData.latitude + "\n" + "Long: " + Input.location.lastData.longitude + "\n"
                + "Alt: " + Input.location.lastData.altitude + "\n" + "Timestamp:" + Input.location.lastData.timestamp;
        }
    }
}