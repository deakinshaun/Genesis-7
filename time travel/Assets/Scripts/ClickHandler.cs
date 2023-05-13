using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

[RequireComponent(typeof(Collider))]
public class ClickHandler : MonoBehaviour
{
    public UnityEvent upEvent;
    public UnityEvent downEvent;

    void OnMouseDown()
    {
        downEvent?.Invoke();
    }

    void OnMouseUp()
    {
        upEvent?.Invoke();
    }

}
