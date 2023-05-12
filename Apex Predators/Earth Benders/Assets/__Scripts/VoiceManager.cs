using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Voice.Unity;
using Photon.Realtime;
using Photon.Pun;

public class VoiceManager : MonoBehaviourPunCallbacks
{
    //reference to the text mesh pro object that will display the voice chat status messages
    public TMPro.TextMeshPro status;

    //sets the voice message max length before it removes the old messages
    public int statusMaxLength = 1000;

    //references a certain controler input that will act as the toggleButton for the microphone input
    public OVRInput.RawButton toggleButton = OVRInput.RawButton.LThumbstickUp;

    //Reference for the microphoneIndicator game object that will show the user if their mic is toggles on or off based on a colour (material)
    public GameObject microphoneIndicator;

    //References to the two materials used for when the users mic is on(green) or off(red)
    public Material micOnMaterial;
    public Material micOffMaterial;

    //Instantiates the previousMessage string variable to an empty string
    private string previousMessage = "";

    //This function updates the text mesh pro "status" variable with messages related to the voice chat status.
    //It also displays the messages in the debug console.
    private void setStatusText(string message)
    {
        //This if statment ensure that the status display is not updated unnecessarily with repeat messages.
        if (!message.Equals(previousMessage))
        {
            //Logs messages to console
            Debug.Log(message);
            //appends a new line with the new message to the status text
            status.text += "\n" + message;
            //checks if the status text has gotten larger than the statusMaxLength
            if (status.text.Length > statusMaxLength)
            {
                //if so it will trim the status text accordingly, getting rid of old messages
                status.text = status.text.Remove(0, status.text.Length - statusMaxLength);
            }
            //updates the previousMessage variable to be equal to the newest message
            previousMessage = message;
        }
    }

    // Start is called before the first frame update
    void Start()
    {
        status.text = "";
        setStatusText("Application Started");
        PhotonNetwork.ConnectUsingSettings();
        VoiceConnection theVoiceConnection = GetComponent<VoiceConnection>();
        theVoiceConnection.Client.AddCallbackTarget(this);
        theVoiceConnection.ConnectUsingSettings();
    }

    public override void OnConnectedToMaster()
    {
        VoiceConnection theVoiceConnection = GetComponent<VoiceConnection>();
        RoomOptions theRoomOptions = new RoomOptions();
        TypedLobby theLobby = new TypedLobby("ApplicationLobby", LobbyType.Default);
        theVoiceConnection.Client.OpJoinOrCreateRoom(new EnterRoomParams { RoomName="ApplicationRoom", RoomOptions = theRoomOptions, Lobby = theLobby });
    }

    public override void OnJoinedRoom()
    {
        VoiceConnection theVoiceConnection = GetComponent<VoiceConnection>();
        setStatusText("Joined room with " + theVoiceConnection.Client.CurrentRoom.PlayerCount + " participants.");
    }

    public override void OnDisconnected(DisconnectCause cause)
    {
        setStatusText("Disconnected " + cause);
    }
    
    //Responsible for checking if the users microphone has been turned off or on and also updating the mic indicator with certain materials accordingly.
    private void SwitchMicrophone()
    {
        VoiceConnection theVoiceConnection = GetComponent<VoiceConnection>();
        if ((OVRInput.GetDown(toggleButton)) || (Input.GetButtonDown("Fire1")))
        {
            theVoiceConnection.PrimaryRecorder.TransmitEnabled = !theVoiceConnection.PrimaryRecorder.TransmitEnabled;
        }

        if (microphoneIndicator != null)
        {
            if (theVoiceConnection.PrimaryRecorder.TransmitEnabled)
            {
                microphoneIndicator.GetComponent<MeshRenderer>().material = micOnMaterial;
            }
            else
            {
                microphoneIndicator.GetComponent<MeshRenderer>().material = micOffMaterial;
            }
        }
    }

    // Update is called once per frame
    void Update()
    {
        VoiceConnection theVoiceConnection = GetComponent<VoiceConnection>();

        string otherParticipants = "";
        if (theVoiceConnection.Client.InRoom)
        {
            Dictionary<int, Player>.ValueCollection participants = theVoiceConnection.Client.CurrentRoom.Players.Values;
            foreach (Player p in participants)
            {
                otherParticipants += p.ToStringFull();
            }
        }

        string room = "not in room";

        if (theVoiceConnection.Client.CurrentRoom != null)
        {
            room = theVoiceConnection.Client.CurrentRoom.Name;
        }

        setStatusText(theVoiceConnection.Client.State.ToString() + " server: " + theVoiceConnection.Client.CloudRegion +
                        ":" + theVoiceConnection.Client.CurrentServerAddress + " room: " + room + " participants: " + otherParticipants);

        SwitchMicrophone();
    }
}
