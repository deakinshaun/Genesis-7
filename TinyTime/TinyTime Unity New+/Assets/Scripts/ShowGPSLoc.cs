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
        else
        {
            if(Input.location.status == LocationServiceStatus.Running)
            {
                DisplayCoords.text = "Lat: " + Input.location.lastData.latitude + "Long: " + Input.location.lastData.longitude
                + "Alt: " + Input.location.lastData.altitude + "Timestamp:" + Input.location.lastData.timestamp;
            }
            while (Input.location.status == LocationServiceStatus.Initializing && Input.location.isEnabledByUser)
            {
                DisplayCoords.text = "Please wait while this service is initialiing";
            }

            if (Input.location.status == LocationServiceStatus.Failed)
            {
                DisplayCoords.text = "Service failed, unable to determine location";
            }
        }
        
        
        
    }
}