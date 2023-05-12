using Oculus.Platform;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Portal : MonoBehaviour
{
    public Material camTexMaterial;
    public Camera VRcamera;

    private WebCamTexture webcamTexture;
    void Start()
    {
        webcamTexture = new WebCamTexture();

        camTexMaterial.mainTexture = webcamTexture;
        webcamTexture.Play();
    }

    void Update()
    {
        
        float pos = (VRcamera.nearClipPlane + 0.01f);

        transform.position = VRcamera.transform.position + VRcamera.transform.forward * pos;

        float h = Mathf.Tan(VRcamera.fieldOfView * Mathf.Deg2Rad * 0.5f) * pos * 2.0f;

        transform.localScale = new Vector3(h * VRcamera.aspect, h, 1.0f);
    }
}
