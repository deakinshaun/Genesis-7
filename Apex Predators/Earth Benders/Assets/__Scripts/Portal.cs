using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Portal : MonoBehaviour
{

    public GameObject teleportLocation;

    private void OnTriggerEnter(Collider other)
    {
        Debug.Log(other.tag);
        //Makes sure the object that is colliding with the portal has the tag "Player"
        if (other.CompareTag("Player"))
        {
            //Gets the character controller component from the player
            var CCC = other.GetComponent<CharacterController>();
            //Disables the character controller while they are being teleported
            CCC.enabled = false;
            //Teleports the player to the destination portal's teleportLocation
            other.transform.position = teleportLocation.transform.position;
            Debug.Log("TELEPORTING: " + other + " TO: " + teleportLocation.transform.position);

            //Re-enables the character controller for the player
            CCC.enabled = true;

            //Rotates the object being teleported to face the forward direction of the destination portal
            other.transform.rotation = Quaternion.LookRotation(teleportLocation.transform.forward);
        }
    }
}