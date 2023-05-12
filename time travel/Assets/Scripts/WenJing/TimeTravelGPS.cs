using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class TimeTravelGPS : MonoBehaviour
{
    public TextMeshProUGUI gpsInfo;

    //public GameObject planetEarth;

    //public GameObject locMarker;

    //private float rotation = 0f;

    void getCoordinatesByGPS()
    {

       
        //if (!Input.location.isEnabledByUser)
        //{
        //    gpsInfo.text = "Location service has no permission";
        //    return;
        //}

        
        //if (Input.location.status != LocationServiceStatus.Running)
        //{
        //    gpsInfo.text = "Location service not active yet";
        //    Input.location.Start();
        //    return;
        //}

        string location = "";

        //float latitude = Input.location.lastData.latitude;
        //float longitude = Input.location.lastData.longitude;

        float latitude = -37.4827f;  
        float longitude = 144.5738f ;  

        location = "Your coordinate is lat: " + latitude + ", long:" + longitude;
        gpsInfo.text = location;
        GetPlaceNameByCoordinate(latitude, longitude);
        //Quaternion markerOrientation = Quaternion.AngleAxis(90f - longitude + rotation, Vector3.up) * Quaternion.AngleAxis(90f - latitude, Vector3.right);
        //locMarker.transform.rotation = markerOrientation;

    }


    /// <summary>
    /// Obtain device location via GPS Coordinate,use google map API 
    /// </summary>
    /// <param name="lat">latitude</param>
    /// <param name="lng">longitude</param>
    void GetPlaceNameByCoordinate(float lat,float lng)
    {
        gpsInfo.text += "\n You are at Toptea shop, Melbourne,Australia";
    }

    // Update is called once per frame
    void Update()
    {
        getCoordinatesByGPS();
    }
}
