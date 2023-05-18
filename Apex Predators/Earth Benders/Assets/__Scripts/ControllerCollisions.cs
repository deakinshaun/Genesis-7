using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ControllerCollisions : MonoBehaviour
{
    public CollisionsManagement collisionManager;

    private bool isColliding;

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("ProjectileGesture") || other.CompareTag("WallGesture"))
        {
            isColliding = true;
            collisionManager.HandleCollision(this.gameObject, other.gameObject.tag, isColliding);
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.CompareTag("ProjectileGesture") || other.CompareTag("WallGesture"))
        {
            isColliding = false;
            collisionManager.HandleCollision(this.gameObject, other.gameObject.tag, isColliding);
        }
    }
}