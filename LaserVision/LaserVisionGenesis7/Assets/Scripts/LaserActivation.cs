using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Bolt;
using TMPro;

public class LaserActivation : Photon.Bolt.EntityBehaviour<IPlayerState1>
{
    public GameObject lasers;

    public override void Attached()
    {
        state.OnLasers = Lasers;
        state.OnLasersR = LasersR;
    }
    private void Lasers()
    {
        {
            lasers.SetActive(true);
        }
    }
    private void LasersR()
    {
        {
            lasers.SetActive(false);
        }
    }

    public void activateLasers()
    {
        if (entity.IsOwner)
        {
            state.Lasers();
        }      
    }

    public void removeLasers()
    {
        if(entity.IsOwner)
        {
            state.LasersR();
        }    
    }
}