using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Photon.Pun;
using Photon.Realtime;
using UnityEngine.SceneManagement;
using TMPro;

public class RoomManager : MonoBehaviourPunCallbacks
{
    public GameObject roomPrefab;
    public Canvas roomCanvas;



    private bool allowingJoining = false;

    List<GameObject> displayRooms = new List<GameObject>();

    void Start()
    {
        PhotonNetwork.ConnectUsingSettings();
    }


    public static string GetName(GameObject o)
    {
        if (o.GetComponent<PhotonView>() != null)
        {
            if ((o.GetComponent<PhotonView>().Owner.NickName != null) && !(o.GetComponent<PhotonView>().Owner.NickName.Equals("")))
            {
                return o.GetComponent<PhotonView>().Owner.NickName;
            }
            else
            {
                return o.GetComponent<PhotonView>().Owner.UserId;
            }
        }
        else
        {
            // Not a networked object. Just return the current player's id
            if ((PhotonNetwork.NickName != null) && !(PhotonNetwork.NickName.Equals("")))
            {
                return "X" + PhotonNetwork.NickName;
            }
            else
            {
                return "X" + PhotonNetwork.AuthValues.UserId;
            }
        }
    }

    GameObject GetRoomObject(string name)
    {
        foreach (GameObject g in displayRooms)
        {
            DisplayRoom dr = g.GetComponent<DisplayRoom>();
            if (dr.GetName().Equals(name))
            {
                return g;
            }
        }

        GameObject room = Instantiate(roomPrefab);
        room.transform.SetParent(roomCanvas.transform);
        room.GetComponent<DisplayRoom>().SetName(name);
        room.GetComponent<LocalRoomBehaviour>().SetManager(this);
        displayRooms.Add(room);
        return room;
    }

    void RemoveRoomObject(GameObject room)
    {
        displayRooms.Remove(room);
        Destroy(room);
    }

    void UpdateRooms()
    {
        int row = 0;
        int col = 0;
        int columnLimit = 2;
        foreach (GameObject room in displayRooms)
        {
            room.transform.localPosition = new Vector3(col * 300 - 100, row * 100, 0);

            col += 1;
            if (col >= columnLimit)
            {
                col = 0;
                row -= 1;
            }
        }
    }

    public void JoinRoom(string roomName)
    {
        allowingJoining = true;
        PhotonNetwork.JoinRoom(roomName);
        PhotonNetwork.LoadLevel("CollectionMeeting");
    }

    public override void OnConnectedToMaster()
    {
        Debug.Log("Connected to master.");
        PhotonNetwork.JoinLobby();
    }

    public override void OnRoomListUpdate(List<RoomInfo> roomList)
    {
        foreach (RoomInfo ri in roomList)
        {
            GameObject room = GetRoomObject(ri.Name);

            if (ri.RemovedFromList)
            {
                RemoveRoomObject(room);
            }
            else
            {
                room.GetComponent<DisplayRoom>().Display(ri.Name + "\n\nwith " + ri.PlayerCount + " players\n" + ri.CustomProperties["notices"]);
            }
        }

        UpdateRooms();
    }

    public override void OnJoinedLobby()
    {
        Debug.Log("Joined lobby");
    }

    public override void OnJoinedRoom()
    {
        Debug.Log("Room joined");

        Room room = PhotonNetwork.CurrentRoom;
        ExitGames.Client.Photon.Hashtable properties = room.CustomProperties;
        properties["notices"] = GetName(this.gameObject) + ":" + Time.time + ":joined\n";
        room.SetCustomProperties(properties);

        if (!allowingJoining)
        {
            PhotonNetwork.LeaveRoom();
        }
    }

    public override void OnCreatedRoom()
    {
        Debug.Log("Room created");
    }

    public override void OnCreateRoomFailed(short returnCode, string message)
    {
        Debug.Log("Failed to create room " + returnCode + " " + message);
    }

    public void AddRoom(Text name)
    {

        Debug.Log("Adding new room: " + name.text);
        RoomOptions ro = new RoomOptions();
        ro.EmptyRoomTtl = 100000;

        string[] roomPropsInLobby = { "notices" };
        ro.CustomRoomPropertiesForLobby = roomPropsInLobby;

        ExitGames.Client.Photon.Hashtable customRoomProperties = new ExitGames.Client.Photon.Hashtable() { { "notices", "Room Start\n" } };
        ro.CustomRoomProperties = customRoomProperties;

        PhotonNetwork.JoinOrCreateRoom(name.text, ro, null);
        //UnityEngine.UI.Text textComponent = roomPrefab.GetComponent<UnityEngine.UI.Text>();

    }
}
