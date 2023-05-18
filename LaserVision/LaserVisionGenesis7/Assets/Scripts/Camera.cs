using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class Camera : MonoBehaviour
{

    public Material camMaterial;

    public TextMeshProUGUI outputText;

    private WebCamTexture wcTexture;

    private int currentCamera = 0;

    // Start is called before the first frame update
    void Start()
    {
        wcTexture = new WebCamTexture();
        camMaterial.mainTexture = wcTexture;
        updateCameraList();
    }

    private void updateCameraList()
    {
        outputText.text = "";
        foreach (WebCamDevice d in WebCamTexture.devices)
        {
            outputText.text += d.name + (d.name == wcTexture.name ? "*" : "") + "\n";
        }
    }

    public void nextCamera()
    {
        currentCamera = (currentCamera + 1) % WebCamTexture.devices.Length;
        wcTexture.Stop();
        wcTexture.deviceName = WebCamTexture.devices[currentCamera].name;
        wcTexture.Play();
    }


    // Update is called once per frame
    void Update()
    {
        if (!wcTexture.isPlaying)
        {
            wcTexture.Play();
        }
    }
}
