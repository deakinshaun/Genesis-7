using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;

public class ElementalBlast : MonoBehaviour
{

    public Transform arCamera;
    public GameObject projectile;

    public float shootForce = 700.0f;

    private ARRaycastManager aRRaycastManager;
    private static List<ARRaycastHit> hits = new List<ARRaycastHit>();

    void Start()
    {
        aRRaycastManager = FindObjectOfType<ARRaycastManager>();

    }


    void Update()
    {
        if (Input.touchCount > 0)
        {
            Touch touch = Input.GetTouch(0);

            if (touch.phase == TouchPhase.Began)
            {
                var touchPosition = touch.position;

                bool isOverUI = touchPosition.IsPointOverUIObject();

                if (!isOverUI && aRRaycastManager.Raycast(touchPosition, hits, UnityEngine.XR.ARSubsystems.TrackableType.PlaneWithinPolygon))
                {
                    GameObject bullet = Instantiate(projectile, arCamera.position, arCamera.rotation) as GameObject;
                    bullet.GetComponent<Rigidbody>().AddForce(arCamera.forward * shootForce);
                }
            }
        }

        /*if (Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Began)
        {
            
        }
        */
    }
}


