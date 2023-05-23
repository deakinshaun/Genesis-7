using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Fusion;

public class SetPlayerParent : MonoBehaviour
{
    //private NetworkRunner runner;
    //public GameObject playerModel;
    // Start is called before the first frame update
    void Start()
    {
        //runner = GameObject.FindGameObjectWithTag("Runner").GetComponent<NetworkRunner>();
        //set the player object's parent to the 'players' object when the player is spawned
        transform.parent = GameObject.FindGameObjectWithTag("PlayerParent").transform;
    }
}
