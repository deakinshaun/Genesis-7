using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AttackSound : MonoBehaviour
{
    
    private AudioSource attackaudio;
    private Animator animator;
    void Start()
    {
        attackaudio = GetComponent<AudioSource>();
        animator = GetComponent<Animator>();
    }

    void OnTriggerEnter(Collider other)

    {
        attackaudio.Play();
    }
}
