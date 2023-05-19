using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Bolt;

public class NetworkCallbacks : GlobalEventListener
{
    public GameObject hostPlayer;

    public override void SceneLoadLocalDone(string scene, IProtocolToken ipt)
    {
        var spawnPos = new Vector3(0, 0, 0);
        BoltNetwork.Instantiate(hostPlayer, spawnPos, Quaternion.identity);
    }
}
