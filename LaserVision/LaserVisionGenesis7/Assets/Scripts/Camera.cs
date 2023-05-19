using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Bolt;

public class Camera : Photon.Bolt.EntityBehaviour<IPlayerState1>
{

    public Material camMaterial;

    private WebCamTexture wcTexture;


    public override void Attached()
    {
        if (entity.IsOwner)
        {
        wcTexture = new WebCamTexture();
        camMaterial.mainTexture = wcTexture;
        }

    }

    public override void SimulateOwner()
    {
        if (!wcTexture.isPlaying && entity.IsOwner)
        {
            wcTexture.Play();
        }
    }
}
