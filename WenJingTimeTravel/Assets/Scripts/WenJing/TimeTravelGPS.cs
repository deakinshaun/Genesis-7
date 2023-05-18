using System.Collections;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using TMPro;
using UnityEngine;
using UnityEngine.Networking;

public class TimeTravelGPS : MonoBehaviour
{
    TextMeshProUGUI gpsInfo;

    private float totalTime = 0f;

    private void Start()
    {
        Transform txtChild = transform.GetChild(0);
        gpsInfo = txtChild.GetComponent<TextMeshProUGUI>();
    }

    // Update is called once per frame
    void Update()
    {

        totalTime += Time.deltaTime;
        if (totalTime >= 5f)
        {
            getCoordinatesByGPS();
            totalTime = 0f;
        }
    }



    void getCoordinatesByGPS()
    {
        float latitude = 0f;
        float longitude = 0f;
        string location = "";
        if (!Input.location.isEnabledByUser)
        {
            gpsInfo.text = "Location service has no permission";
            latitude = -37.482700f;
            longitude = 144.573807f;
            location = "User coordinate is lat: " + latitude + ", long:" + longitude;
            gpsInfo.text = location;
            //发送请求到TomTom API
            StartCoroutine(GetPlaceNameByCoordinate(latitude, longitude));
            return;
        }

        if (Input.location.status != LocationServiceStatus.Running)
        {
            gpsInfo.text = "GPS Locating";
            Input.location.Start();
            return;
        }
        else
        {
            latitude = Input.location.lastData.latitude;
            longitude = Input.location.lastData.longitude;
            location = "User coordinate is lat: " + latitude + ", long:" + longitude;
            gpsInfo.text = location;
            //发送请求到TomTom API
            StartCoroutine(GetPlaceNameByCoordinate(latitude, longitude));
        }


    }


    /// <summary>
    /// Obtain device location via GPS Coordinate,use tomtom map API 
    /// </summary>
    /// <param name="lat">latitude</param>
    /// <param name="lng">longitude</param>
    IEnumerator GetPlaceNameByCoordinate(float lat, float lng)
    {
        string apiKey = "p0IUuMWE4imF2Cdf6OV81iCQXoVddkDC";
        string radius = "100";
        string language = "en-US";
        string apiUrl = "https://api.tomtom.com/search/2/reverseGeocode/{0},{1}.json?key={2}&radius={3}&language={4}";
        string url = string.Format(apiUrl, lat, lng, apiKey, radius, language);
        using (UnityWebRequest webRequest = UnityWebRequest.Get(url))
        {
            yield return webRequest.SendWebRequest();

            if (webRequest.result == UnityWebRequest.Result.Success)
            {
                string response = webRequest.downloadHandler.text;
                print(response);
                // 解析JSON响应，提取地址信息
                string address = ParseAddressFromResponse(response);
                gpsInfo.text += address;
                Debug.Log(address);
            }
            else
            {
                Debug.LogError($"Geocoding request failed: {webRequest.error}");
            }
        }
    }

    private string ParseAddressFromResponse(string response)
    {
        // 解析JSON响应并提取地址信息
        AddressData addressData = JsonUtility.FromJson<AddressData>(response);
        if (addressData.addresses.Length > 0)
        {
            AddressDetails addressDetails = addressData.addresses[0].address;
            string country = addressDetails.country;
            string municipality = addressDetails.municipality;
            string countrySubdivision = addressDetails.countrySubdivision;
            Debug.Log("Country: " + country);
            Debug.Log("Municipality: " + municipality);

            return "\n User at " + countrySubdivision + "," + municipality + "," + country;
        }


        return "Geocoding failed.";
    }



    [System.Serializable]
    public class AddressData
    {
        public Address[] addresses;
    }

    [System.Serializable]
    public class Address
    {
        public AddressDetails address;
    }

    [System.Serializable]
    public class AddressDetails
    {
        public string country;
        public string municipality;
        public string countrySubdivision;
    }
}
