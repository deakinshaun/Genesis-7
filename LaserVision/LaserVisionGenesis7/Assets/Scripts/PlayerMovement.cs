using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Bolt;
using Photon.Bolt.Matchmaking;
using UdpKit;

public class PlayerMovement : Photon.Bolt.EntityBehaviour<IPlayerState1>
{
    public override void Attached()
    {
        state.SetTransforms(state.PlayerTransform, transform);
        Input.gyro.enabled = true;
    }

    public override void SimulateOwner()
    {
        this.transform.rotation = Quaternion.Euler(90, 0, 90) * Input.gyro.attitude * Quaternion.Euler(180, 180, 0);
    }

}
