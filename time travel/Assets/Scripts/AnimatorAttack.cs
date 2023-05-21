using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class AnimatorAttack : MonoBehaviour
{
    public Animator animator;

    void Start()
    {
        animator = GetComponent<Animator>();
    }

    
    void OnTriggerEnter(Collider other)
    {
        animator.SetBool("IsTouched", true);
    }
    void OnTriggerExit(Collider other)
    {
        animator.SetBool("IsTouched", false);
    }
}
