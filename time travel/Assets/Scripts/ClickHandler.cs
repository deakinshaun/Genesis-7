using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

[RequireComponent(typeof(Collider))]
public class ClickHandler : MonoBehaviour
{
    public UnityEvent contactEvent;

    void OnTriggerEnter(Collider other)
    {
        contactEvent?.Invoke();
    }

    void OnTriggerExit(Collider other)
    {
        contactEvent?.Invoke();
    }

}
