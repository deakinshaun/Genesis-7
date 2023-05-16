using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EarthWall : MonoBehaviour
{
    public int health = 3;

    private void OnCollisionEnter(Collision collision)
    {

        if (collision.gameObject.name == "EarthProjectile")
        {
            health -= 1;
            Destroy(collision.gameObject);
        }

    }

    // Update is called once per frame
    void Update()
    {

        if (health < 1)
        {
            Destroy(this);
        }

    }
}
