using Fusion;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR;
using Oculus;
using Oculus.Interaction.Input;

public class Networkplayer : MonoBehaviour
{
    public Transform head;
    public Transform leftHand;
    public Transform rightHand;

    private Transform headrig;
    private Transform leftHandrig;
    private Transform rightHandrig;
    private NetworkObject networkObject;
    private void Start()
    {
        networkObject = GetComponent<NetworkObject>();

        OVRCameraRig rig = FindObjectOfType<OVRCameraRig>();
        headrig = rig.transform.Find("TrackingSpace/CenterEyeAnchor");
        leftHandrig = rig.transform.Find("TrackingSpace/LeftHandAnchor");
        rightHandrig = rig.transform.Find("TrackingSpace/RightHandAnchor");
            
    }

    private void Update()
    {
        if (networkObject.HasStateAuthority)
        {
            rightHand.gameObject.SetActive(false);
            leftHand.gameObject.SetActive(false);
            head.gameObject.SetActive(false);
            MappPosition(head, headrig);  
            MappPosition(leftHand, leftHandrig);
            MappPosition(rightHand, rightHandrig);
        }
    }
    void MappPosition(Transform target,Transform rigtransform)
    {
        target.position = rigtransform.position;
        target.rotation = rigtransform.rotation;
    }

    void UpdateHandAnimation()
    {
        //update hand animation with hand tracking data

    }
}
