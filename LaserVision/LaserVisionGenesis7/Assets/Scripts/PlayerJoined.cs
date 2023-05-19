using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Bolt;

public class PlayerJoined : Photon.Bolt.EntityBehaviour<IPlayerState1>
{
    public Camera entityCamera;

    public override void Attached()
    {

    }
    private void Update()
    {
        if (entity.IsOwner && entityCamera.gameObject.activeInHierarchy == false)
        {
            entityCamera.gameObject.SetActive(true);
        }
    }
}
