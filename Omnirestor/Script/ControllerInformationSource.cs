using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ControllerInformationSource : MonoBehaviour
{
    // Start is called before the first frame update

    private Gyroscope gyro;
    private bool gyroSupported;

    private DatagramCommunication dc;
    private Quaternion gyroAttitude;
    private bool centerPressed;
    private bool triggerPressed;
    private bool leftPressed;
    private bool rightPressed;
    private bool forwardPressed;


    void Start()
    {
        dc = new DatagramCommunication();

        gyroSupported = SystemInfo.supportsGyroscope;
        if (gyroSupported)
        {
            gyro = Input.gyro;
            gyro.enabled = true;
        }
    }

    public void centerClicked() { centerPressed = true; }
    public void triggerClicked() { triggerPressed = true; }
    public void centerRelease() { centerPressed = false; }
    public void triggerRelease() { triggerPressed = false; }

    public void leftClicked() { leftPressed = true; }
    public void rightClicked() { rightPressed = true; }
    public void leftRelease() { leftPressed = false; }
    public void rightRelease() { rightPressed = false; }

    public void forwardClicked() { forwardPressed = true; }
    public void forwardRelease() { forwardPressed = false; }
    
    
    



    void Update()
    {
        if (gyroSupported)
        {
            gyroAttitude = gyro.attitude;
        }

        dc.sendControllerDetails(new ControllerDetails(gyroAttitude, centerPressed, triggerPressed, leftPressed, rightPressed, forwardPressed));
    }
}