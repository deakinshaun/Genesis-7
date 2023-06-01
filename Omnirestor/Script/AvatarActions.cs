using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;
using Photon.Pun;
using Photon.Realtime;

public class AvatarActions : MonoBehaviourPun
{
    public float turnSpeed = 100.0f;
    public float moveSpeed = 10.0f;

    private float turn = 0.0f;
    private float move = 0.0f;

    private void SetButtonCallbacks()
    {
        GameObject.Find("Canvas/LeftButton").GetComponent<EventTrigger>().triggers[0].callback.AddListener((data) => { Left(); });
        GameObject.Find("Canvas/LeftButton").GetComponent<EventTrigger>().triggers[1].callback.AddListener((data) => { Stop(); });
        GameObject.Find("Canvas/RightButton").GetComponent<EventTrigger>().triggers[0].callback.AddListener((data) => { Right(); });
        GameObject.Find("Canvas/RightButton").GetComponent<EventTrigger>().triggers[1].callback.AddListener((data) => { Stop(); });
        GameObject.Find("Canvas/ForwardButton").GetComponent<EventTrigger>().triggers[0].callback.AddListener((data) => { Forward(); });
        GameObject.Find("Canvas/ForwardButton").GetComponent<EventTrigger>().triggers[1].callback.AddListener((data) => { Stop(); });
        GameObject.Find("Canvas/BackwardButton").GetComponent<EventTrigger>().triggers[0].callback.AddListener((data) => { Backward(); });
        GameObject.Find("Canvas/BackwardButton").GetComponent<EventTrigger>().triggers[1].callback.AddListener((data) => { Stop(); });
        GameObject.Find("Canvas/TalkButton").GetComponent<EventTrigger>().triggers[0].callback.AddListener((data) => { Talk(); });
        GameObject.Find("Canvas/LobbyButton").GetComponent<EventTrigger>().triggers[0].callback.AddListener((data) => { Lobby(); });
        GameObject.Find("Canvas/NickNameButton").GetComponent<EventTrigger>().triggers[0].callback.AddListener((data) => { Nickname(); });

    }

    public void Start()
    {
        if (photonView.IsMine == true || PhotonNetwork.IsConnected == false)
        {
            SetButtonCallbacks();
            transform.Find("Camera").gameObject.SetActive(true);
        }

        photonView.RPC("showNickname", RpcTarget.All, RoomManager.GetName(this.gameObject));
    }

    public void Update()
    {
        if (photonView.IsMine == true || PhotonNetwork.IsConnected == false)
        {
            transform.rotation *= Quaternion.AngleAxis(turn * turnSpeed * Time.deltaTime, Vector3.up);
            transform.position += move * moveSpeed * transform.forward;
        }
    }

    public void Left()
    {
        turn = -1.0f;
    }

    public void Right()
    {
        turn = 1.0f;
    }

    public void Forward()
    {
        move = 1.0f;
    }
    public void Backward()
    {
        move = -1.0f;
    }

    public void Talk()
    {
        GameObject t = GameObject.Find("Canvas/TalkMessage/Text");
        if (t != null)
        {
            Room r = PhotonNetwork.CurrentRoom;
            ExitGames.Client.Photon.Hashtable p = r.CustomProperties;
            p["talk"] += RoomManager.GetName(this.gameObject) + ":" + Time.time + ":" + t.GetComponent<Text>().text + "\n";
            r.SetCustomProperties(p);
        }
    }

    public void Lobby()
    {
        GameObject t = GameObject.Find("Canvas/LobbyMessage/Text");
        if (t != null)
        {
            Room r = PhotonNetwork.CurrentRoom;
            ExitGames.Client.Photon.Hashtable p = r.CustomProperties;
            p["notices"] = RoomManager.GetName(this.gameObject) + ":" + Time.time + ":" + t.GetComponent<Text>().text + "\n";
            r.SetCustomProperties(p);
        }
    }
    [PunRPC]
    void showNickname(string name)
    {
        transform.Find("NameText").gameObject.GetComponent<TextMesh>().text = name;
    }

    public void Nickname()
    {
        GameObject t = GameObject.Find("Canvas/NickName/Text");
        if (t != null)
        {
            GetComponent<PhotonView>().Owner.NickName = t.GetComponent<Text>().text;
            photonView.RPC("showNickname", RpcTarget.All, RoomManager.GetName(this.gameObject));
        }
    }

    public void Stop()
    {
        turn = 0.0f;
        move = 0.0f;
    }
}
