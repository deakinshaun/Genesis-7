using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Net;
using TMPro;
using UnityEngine;

public class GPSManager : MonoBehaviour
{

    public TextMeshProUGUI displayText;
    public Material mapMateial;

    void DisplayCoordinate()
    {
        //Given a coordinate, convert the X and Y of the tilemap
        double longitude = -122.4194;
        double latitude = 37.7749;
        ConvertLatLngToTileMap(longitude, latitude);

        if (Input.location.isEnabledByUser == false)
        {
            displayText.text = "Location service not enabled";
        }
        else
        {
            if(Input.location.status==LocationServiceStatus.Stopped) {
                displayText.text = "Location servive stopped";
                Input.location.Start();
            }
            if(Input.location.status == LocationServiceStatus.Running)
            {
                var Lat = Input.location.lastData.latitude;
                var Long=Input.location.lastData.longitude;
                displayText.text = "Lat:" + Lat + "\n" + "Long:" + Long + "\n";

                //double longitude = -122.4194;
                //double latitude = 37.7749;
                //ConvertLatLngToTileMap(longitude, latitude);

            }
        }
    }

    // Convert longitude and latitude coordinates to tile map coordinates
    public Vector2Int ConvertLatLngToTileMap(double longitude, double latitude)
    {
        double x = longitude * Mathf.Deg2Rad;
        double y = latitude * Mathf.Deg2Rad;
        int zoomLevel = 10; // the zoom level of the map

        double r = 6378137; // Earth's radius in meters

        x = r * x * Mathf.Cos((float)y);
        y = r * y;

        double xTile = (x + r) / (2 * r) * Mathf.Pow(2, zoomLevel);
        double yTile = (1 - Mathf.Log(Mathf.Tan((float)y) + 1 / Mathf.Cos((float)y)) / Mathf.PI) / 2 * Mathf.Pow(2, zoomLevel);

        int tileX = Mathf.FloorToInt((float)xTile);
        int tileY = Mathf.FloorToInt((float)yTile);

        //print(new Vector2Int(tileX, tileY));

        return new Vector2Int(tileX, tileY);
    }


    public void LoadTile(int x,int y,int zoom)
    {
        string tileServerUrl = "https://mt.google.com/vt/lyrs=m&x=0&y=0&z=0"; // the URL of the tile server
        string url = string.Format(tileServerUrl, zoom, x, y);
        WebRequest www=WebRequest.Create(url);
        var response=www.GetResponse();
        Texture2D tex = new Texture2D(40,40);
        ImageConversion.LoadImage(tex, new BinaryReader(response.GetResponseStream()).ReadBytes(10000000));
        mapMateial.mainTexture = tex;
    }

    // Update is called once per frame
    void Update()
    {
        // DisplayCoordinate();
        LoadTile(0, 1, 1);
    }
}
