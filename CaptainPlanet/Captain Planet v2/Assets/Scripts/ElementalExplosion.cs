using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ElementalExplosion : MonoBehaviour
{
    public GameObject explosion;

    private void OnCollisionEnter(Collision collision)
    {
        if (collision.transform.tag == "Fire")
        {
            Destroy(collision.transform.gameObject);
            Instantiate(explosion, collision.transform.position, collision.transform.rotation);
        }
    }
}


