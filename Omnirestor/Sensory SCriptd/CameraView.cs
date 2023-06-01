using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using System;

public class CameraView : MonoBehaviour
{

    private WebCamTexture webcamTex = null;

    private Texture2D edgeTex;
    private Texture2D sourceCopyTex;
    private Texture2D reduceTex;
    private int mipLevel = 5;

    public Material CamMaterial;

    private WebCamTexture wcTexture;


    // Accessor methods.
    public Texture GetCameraImage()
    {
        return webcamTex;
    }

    public Texture2D GetEdgeImage()
    {
        return edgeTex;
    }

    public WebCamTexture GetWebcamTex()
    {
        if (webcamTex == null)
        {
            webcamTex = new WebCamTexture();
            webcamTex.Play();
        }

        return webcamTex;
    }

    // Initialization of the textures.
    void Start()
    {


        // Start live camera feed.
        webcamTex = GetWebcamTex();

        // Set the sizes of the other textures based on the camera reference.
        sourceCopyTex = new Texture2D(webcamTex.width, webcamTex.height);
        reduceTex = new Texture2D(webcamTex.width >> mipLevel, webcamTex.height >> mipLevel);
        edgeTex = new Texture2D(reduceTex.width, reduceTex.height);

        GetComponent<MeshRenderer>().sharedMaterial.mainTexture = edgeTex;

        // Update buffers asynchronously and partially to minimize run time overhead.
        StartCoroutine(UpdateEdgeImage());
    }

    void Update()
    {

        // Mode where direction camera is aimed controls edge-related vibration.
        float edgeStrength = edgeTex.GetPixelBilinear(0.5f, 0.5f).r;
        VibrationControl.Vibration2.Vibrate((int)(Time.deltaTime * 1000), (int)(edgeStrength * 100.0f));
    }


    // Extract the edge image. Do it block by block with yield after
    // each block to avoid significant performance impacts.
    private IEnumerator UpdateEdgeImage()
    {
        while (true)
        {
            sourceCopyTex.SetPixels(webcamTex.GetPixels());
            sourceCopyTex.Apply();
            reduceTex.SetPixels(sourceCopyTex.GetPixels(mipLevel));
            reduceTex.Apply();

            // Define your edge detection kernel and factor here
            float[,] edgeDetectKernel = new float[,]
            {
            { -1, -1, -1 },
            { -1,  8, -1 },
            { -1, -1, -1 }
            };
            float factor = 1.0f;

            // Edge detect.
            TextureFilter.Convolution(reduceTex, edgeTex, edgeDetectKernel, factor);
            Color[] cols = edgeTex.GetPixels();

            // Convert to grayscale.
            for (int k = 0; k < cols.Length; k++)
            {
                float v = (cols[k].r + cols[k].g + cols[k].b) / 3;
                cols[k] = new Color(v, v, v);
            }

            edgeTex.SetPixels(cols);
            edgeTex.Apply();

            GetComponent<MeshRenderer>().sharedMaterial.mainTexture = edgeTex;

            yield return new WaitForSeconds(0.01f);

        }
    }

}



