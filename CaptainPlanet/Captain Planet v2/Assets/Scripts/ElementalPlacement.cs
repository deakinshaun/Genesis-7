using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;

public class ElementalPlacement : MonoBehaviour
{
    public GameObject fireElement;
    public GameObject firePlacement;

    private GameObject spawnedObject;
    private Pose placementPose;
    private ARRaycastManager arRaycastManager;
    private bool isPlacementPoseValid = false;
    private static List<ARRaycastHit> hits = new List<ARRaycastHit>();

    void Start()
    {
        arRaycastManager = FindObjectOfType<ARRaycastManager>();
    }

    void Update()
    {
        HandleTouchInput();
        UpdatePose();
        UpdateIndicator();
    }

    void HandleTouchInput()
    {
        if (Input.touchCount > 0)
        {
            Touch touch = Input.GetTouch(0);

            if (touch.phase == TouchPhase.Stationary)
            {
                Vector2 touchPosition = touch.position;
                bool isOverUI = touchPosition.IsPointOverUIObject();

                if (!isOverUI && arRaycastManager.Raycast(touchPosition, hits, TrackableType.PlaneWithinPolygon))
                {
                    SummonFire();
                }
            }
        }
    }

    void SummonFire()
    {
        spawnedObject = Instantiate(fireElement, placementPose.position, placementPose.rotation);
    }

    void UpdatePose()
    {
        Vector3 screenCenter = Camera.current.ViewportToScreenPoint(new Vector3(0.5f, 0.5f));
        List<ARRaycastHit> planeHits = new List<ARRaycastHit>();
        arRaycastManager.Raycast(screenCenter, planeHits, TrackableType.Planes);

        isPlacementPoseValid = planeHits.Count > 0;
        if (isPlacementPoseValid)
        {
            placementPose = planeHits[0].pose;
        }
    }

    void UpdateIndicator()
    {
        if (isPlacementPoseValid)
        {
            firePlacement.SetActive(true);
            firePlacement.transform.SetPositionAndRotation(placementPose.position, placementPose.rotation);
        }
        else
        {
            firePlacement.SetActive(false);
        }
    }
}

// arcore raycast study references for the development of this project:
// https://developers.google.com/ar/develop/unity-arf/hit-test/developer-guide
// https://developers.google.com/ar/develop/unity-arf/instant-placement/developer-guide
// https://www.andreasjakl.com/raycast-anchor-placing-ar-foundation-holograms-part-3/
// https://lukeduckett.medium.com/simple-functions-in-unity-arcore-for-android-4eca92cf5ddf

// credits for 3D models:
// https://assetstore.unity.com/packages/vfx/particles/spells/elementalist-pack-1-ice-particles-vfx-111603
// https://assetstore.unity.com/packages/vfx/particles/fire-explosions/fx-fire-ii-25176