using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CollisionsManagement : MonoBehaviour
{
    public GameObject projectilePrefab;

    public OVRInput.RawButton projectileButtonInput;

    public OVRInput.RawButton wallButtonInput1;
    public OVRInput.RawButton wallButtonInput2;

    public float projectileSpeed;

    public GameObject wallPrefab;

    public GameObject playerEntitySpawnLocation;

    private GameObject currentProjectile;

    private Rigidbody projectileRigidbody;

    private GameObject handController;

    private bool projectileTriggerIsColliding;

    private bool wallTriggersIsColliding;

    private int wallHandCount;

    private void Start()
    {
        //OVRManager.display.RecenterPose();
    }

    // Update is called once per frame
    void Update()
    {
        //Spawns earth projectile and attaches it to the controller
        if (OVRInput.GetDown(projectileButtonInput))
        {
            if (projectileTriggerIsColliding)
            {
                currentProjectile = Instantiate(projectilePrefab, handController.transform.position, Quaternion.identity);
                projectileRigidbody = currentProjectile.GetComponent<Rigidbody>();
                projectileRigidbody.isKinematic = true;

                currentProjectile.transform.parent = handController.transform;
            }
        }
        //Fires earth projectile in direction of controller on release of input button
        if (OVRInput.GetUp(projectileButtonInput) && currentProjectile != null)
        {
            currentProjectile.transform.parent = null;
            projectileRigidbody.isKinematic = false;
            projectileRigidbody.AddForce(handController.transform.forward * projectileSpeed, ForceMode.VelocityChange);
            currentProjectile = null;
        }

        //spawns a earth wall in front of the player 
        if (OVRInput.GetDown(wallButtonInput1) && OVRInput.GetDown(wallButtonInput2))
        {
            Debug.Log("HANDCOUNT: " + wallHandCount);
            if (wallTriggersIsColliding)
            {
                Instantiate(wallPrefab, playerEntitySpawnLocation.transform.position, Quaternion.LookRotation(playerEntitySpawnLocation.transform.forward));
            }
        }
    }

    public void HandleCollision(GameObject controller, string triggerTag, bool isColliding)
    {
        Debug.Log("CONTROLLER: " + controller + " TRIGGERTAG: " + triggerTag +" ISCOLLIDING: " + isColliding);
        if (triggerTag == "ProjectileGesture")
        {
            handController = controller;
            projectileTriggerIsColliding = isColliding;
        }
        else if (triggerTag == "WallGesture" && isColliding)
        {
            wallHandCount++;
            if (wallHandCount == 2)
            {
                wallTriggersIsColliding = true;
            }
        }
        else if (triggerTag == "WallGesture" && !isColliding)
        {
            wallHandCount--;
            if (wallHandCount < 2)
            {
                wallTriggersIsColliding = false;
            }
        }
    }
}