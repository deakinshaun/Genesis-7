using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using Photon.Bolt;
using Photon.Bolt.Matchmaking;
using UdpKit;

public class Menu : GlobalEventListener
{

    public void StartServer()
    {
        BoltLauncher.StartServer();
    }

    public override void BoltStartDone()
    {
        BoltMatchmaking.CreateSession(sessionID: "LaserVision", sceneToLoad: "Game");
    }

    public void StartClient()
    {
        BoltLauncher.StartClient();
    }

    public override void SessionListUpdated(Map<Guid, UdpSession> sessionList)
    {
        foreach (var session in sessionList)
        {
            UdpSession photonSession = session.Value as UdpSession;
            
            if(photonSession.Source == UdpSessionSource.Photon)
            {
                BoltMatchmaking.JoinSession(photonSession);
            }
        }
    }
}
