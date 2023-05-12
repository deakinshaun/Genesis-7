using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Meta.WitAi;
using Oculus.Voice;
using UnityEngine.InputSystem;

public class activeWit : MonoBehaviour
{
    [SerializeField]
    private Wit wit;


    // Update is called once per frame
    private void Update()
    {
        if(wit == null) wit= GetComponent<Wit>();
    }

    public void ActivateWit()
    {
        wit.Activate();
    }

}
