using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ButtonInteract : MonoBehaviour
{
    public GameObject lightObject;
    public Material on;
    public Material off;
    private bool portOn = false;

    private void OnTriggerEnter(Collider other)
    {
        //when the player enters the trigger, the button turns on or off
        portOn = !portOn;
        lightObject.GetComponent<MeshRenderer>().material = portOn ? on : off;
    }
}
