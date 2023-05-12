using Fusion;
using Fusion.Sockets;
using JetBrains.Annotations;
using System;
using System.Collections;
using System.Collections.Generic;
using System.ComponentModel;
using UnityEngine;
using UnityEngine.SceneManagement;

public class BasicPhotonSet : MonoBehaviour, INetworkRunnerCallbacks
{
    private NetworkRunner networkManager;
    NetworkRunner networkrunner;
    [SerializeField]
    private NetworkObject prefab;
    private Dictionary<PlayerRef, NetworkObject> _spawnedPlayers = new Dictionary<PlayerRef, NetworkObject>();

    void Start()
    {
        networkrunner = Instantiate(networkManager);
        networkrunner.name = "NetworkRunner";

        var clientTask = InitializeNetworkRunner(networkrunner, GameMode.AutoHostOrClient, NetAddress.Any(), SceneManager.GetActiveScene().buildIndex, null);
    }

    async void startVR(GameMode mode)
    {
        networkManager = gameObject.AddComponent<NetworkRunner>();

        await networkManager.StartGame(new StartGameArgs()
        {
            GameMode = mode,
            SessionName = "Playground",
            Scene = SceneManager.GetActiveScene().buildIndex,
            SceneManager = gameObject.AddComponent<NetworkSceneManagerDefault>(),
        }
        );
        networkManager.ProvideInput = true;
    }
    public void OnPlayerJoined(NetworkRunner runner, PlayerRef player)
    {
        if (networkManager.IsServer)
        {
            this.SpawnPlayer(runner, player);
        }
    }
    public void OnPlayerLeft(NetworkRunner runner, PlayerRef player)
    {
        this.DespawnPlayer(runner, player);
    }
    public void OnInput(NetworkRunner runner, NetworkInput input)
    {
        var inputid = new InputStruct();
        inputid.forward = Input.GetAxis("Vertical");
        inputid.turn = Input.GetAxis("Horizontal");
        input.Set(inputid);
    }
    //implement interface 
    public void OnConnectedToServer(NetworkRunner runner)
    {
        
    }

    public void OnConnectFailed(NetworkRunner runner, NetAddress remoteAddress, NetConnectFailedReason reason)
    {

    }

    public void OnConnectRequest(NetworkRunner runner, NetworkRunnerCallbackArgs.ConnectRequest request, byte[] token)
    {

    }

    public void OnCustomAuthenticationResponse(NetworkRunner runner, Dictionary<string, object> data)
    {

    }

    public void OnDisconnectedFromServer(NetworkRunner runner)
    {

    }

    public void OnHostMigration(NetworkRunner runner, HostMigrationToken hostMigrationToken)
    {

    }

    public void OnInputMissing(NetworkRunner runner, PlayerRef player, NetworkInput input)
    {

    }

    public void OnReliableDataReceived(NetworkRunner runner, PlayerRef player, ArraySegment<byte> data)
    {

    }

    public void OnSceneLoadDone(NetworkRunner runner)
    {

    }

    public void OnSceneLoadStart(NetworkRunner runner)
    {

    }

    public void OnSessionListUpdated(NetworkRunner runner, List<SessionInfo> sessionList)
    {

    }

    public void OnShutdown(NetworkRunner runner, ShutdownReason shutdownReason)
    {

    }

    public void OnUserSimulationMessage(NetworkRunner runner, SimulationMessagePtr message)
    {

    }

    public void UpdateNickName(string name)
    {
        networkManager.GetPlayerObject(networkManager.LocalPlayer).GetComponent<SettupName>().setName(name);
    }

    private void SpawnPlayer(NetworkRunner runner, PlayerRef player)
    {
        NetworkObject instance = runner.Spawn(prefab, Vector3.zero, Quaternion.identity, player);
        _spawnedPlayers.Add(player, instance);
    }

    private void DespawnPlayer(NetworkRunner runner, PlayerRef player)
    {
        if (this._spawnedPlayers.TryGetValue(player, out NetworkObject instance))
        {
            runner.Despawn(instance);
            this._spawnedPlayers.Remove(player);
        }
    }
}
