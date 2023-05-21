using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Fusion;
using Fusion.Sockets;
using System;
using UnityEngine.SceneManagement;

public class NetworkManager : MonoBehaviour,INetworkRunnerCallbacks
{
    public GameObject UserLabel;
    //public Transform UICanvas;
    private NetworkRunner runner;
    private int playerCount = 0;

    
    public void startHost()
    {
        startVR(GameMode.Host);
    }

    public void startClient()
    {
        startVR(GameMode.Client);
    }


    private async void startVR(GameMode mode)
    {
        print("Starting");
        runner=gameObject.AddComponent<NetworkRunner>();
        await runner.StartGame(new StartGameArgs() { 
            GameMode = mode,SessionName = "TimeTravel"
        });
    }

    private void Update()
    {
        Transform UICanvas = FindAnyObjectByType<Canvas>().transform;
        foreach(GameObject rootObj in SceneManager.GetActiveScene().GetRootGameObjects())
        {
            if (rootObj.layer==LayerMask.NameToLayer("UI")) {
                
                rootObj.transform.SetParent(UICanvas, false);
            }
        }
    }

    public void OnPlayerJoined(NetworkRunner runner, PlayerRef player) {

        playerCount++;

        NetworkObject userLabel = runner.Spawn(UserLabel, Vector3.zero, Quaternion.identity, player);
        runner.SetPlayerObject(player, userLabel);


    }
    public void OnPlayerLeft(NetworkRunner runner, PlayerRef player)
    {
        playerCount--;
        runner.Despawn(runner.GetPlayerObject(player));
    }
    public void OnInput(NetworkRunner runner, NetworkInput input) { }
    public void OnInputMissing(NetworkRunner runner, PlayerRef player, NetworkInput input) { }
    public void OnShutdown(NetworkRunner runner, ShutdownReason shutdownReason) { }
    public void OnConnectedToServer(NetworkRunner runner)
    {
       
    }
    public void OnDisconnectedFromServer(NetworkRunner runner) { }
    public void OnConnectRequest(NetworkRunner runner, NetworkRunnerCallbackArgs.ConnectRequest request, byte[] token) { }
    public void OnConnectFailed(NetworkRunner runner, NetAddress remoteAddress, NetConnectFailedReason reason) { }
    public void OnUserSimulationMessage(NetworkRunner runner, SimulationMessagePtr message) { }
    public void OnSessionListUpdated(NetworkRunner runner, List<SessionInfo> sessionList) { }
    public void OnCustomAuthenticationResponse(NetworkRunner runner, Dictionary<string, object> data) { }
    public void OnHostMigration(NetworkRunner runner, HostMigrationToken hostMigrationToken) { }
    public void OnReliableDataReceived(NetworkRunner runner, PlayerRef player, ArraySegment<byte> data) { }
    public void OnSceneLoadDone(NetworkRunner runner) { }
    public void OnSceneLoadStart(NetworkRunner runner) { }


}
