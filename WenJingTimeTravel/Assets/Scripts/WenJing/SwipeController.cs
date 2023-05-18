using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SwipeController : MonoBehaviour
{
    public float rotationSpeed = 0.1f;
    public float zoomSpeed = 0.1f;
    private Vector2 previousTouchPosition;
    private bool isZooming;

    void Update()
    {
        // Handle touch input
        if (Input.touchCount == 1 && !isZooming)
        {
            // Rotate object based on swipe
            Touch touch = Input.GetTouch(0);
            if (touch.phase == TouchPhase.Moved)
            {
                transform.Rotate(Vector3.up, -touch.deltaPosition.x * rotationSpeed, Space.World);
                transform.Rotate(Vector3.right, touch.deltaPosition.y * rotationSpeed, Space.World);
            }
            previousTouchPosition = touch.position;
        }
        else if (Input.touchCount == 2)
        {
            // Zoom object based on pinch gesture
            isZooming = true;
            Touch touch1 = Input.GetTouch(0);
            Touch touch2 = Input.GetTouch(1);
            Vector2 touch1PreviousPosition = touch1.position - touch1.deltaPosition;
            Vector2 touch2PreviousPosition = touch2.position - touch2.deltaPosition;
            float previousTouchDeltaMagnitude = (touch1PreviousPosition - touch2PreviousPosition).magnitude;
            float touchDeltaMagnitude = (touch1.position - touch2.position).magnitude;
            float deltaMagnitudeDiff = previousTouchDeltaMagnitude - touchDeltaMagnitude;
            if (deltaMagnitudeDiff > 0)
            {
                transform.localScale -= Vector3.one * zoomSpeed;
            }
            else if (deltaMagnitudeDiff < 0)
            {
                transform.localScale += Vector3.one * zoomSpeed;
            }
            previousTouchPosition = (touch1.position + touch2.position) / 2;
        }
        else
        {
            isZooming = false;
        }
    }
}
