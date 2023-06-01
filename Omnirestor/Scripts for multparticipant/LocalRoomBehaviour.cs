using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

public class LocalRoomBehaviour : MonoBehaviour
{
    private RoomManager roomManager;

    public void SetManager(RoomManager manager)
    {
        roomManager = manager;
    }

    public void EnterRoom()
    {
        string roomName = GetComponent<DisplayRoom>().GetName();
        Debug.Log("Entering room: " + roomName);
        roomManager.JoinRoom(roomName);
    }
}
