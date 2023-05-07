using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class TestCubeButton : MonoBehaviour
{
    public GameObject lightObject;
    public Material on;
    public Material off;
    public TextMeshProUGUI touchCountText;
    public TextMeshProUGUI buttonStatusText;
    public Light mainLight;

    private bool lightOn = false;
    private int touchCount = 0;
    void Start()
    {
        //touchCountText.text = "0";
        buttonStatusText.text = "off";
        mainLight = GameObject.Find("Main Light").GetComponent<Light>();
    }

    private void OnTriggerEnter(Collider other)
    {
        //touchCount++;
        //touchCountText.text = "you have touched the button: " + touchCount.ToString() + " times";
        lightOn = !lightOn;
        lightObject.GetComponent<MeshRenderer>().material = lightOn ? on : off;
        if (Application.platform == RuntimePlatform.Android)
        {
            Handheld.Vibrate();
        }
        if (lightOn)
        {
            buttonStatusText.text = "You turn the light On";
            mainLight.intensity = 1.0f;
        }
        else
        {
            buttonStatusText.text = "You turn the light Off";
            mainLight.intensity = 0.0f;
        }
    }

}
