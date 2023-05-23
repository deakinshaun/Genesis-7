using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ProjectileSwitch : MonoBehaviour
{
    public GameObject spawnLocation;

    public GameObject projectilePrefab;

    public float fireSpeed;

    public Material onMaterial;
    public Material offMaterial;

    private GameObject currentProjectile;

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Player"))
        {
            currentProjectile = Instantiate(projectilePrefab, spawnLocation.transform.position, Quaternion.identity);
            currentProjectile.transform.localScale *= 4;
            Rigidbody projectileRigidbody = currentProjectile.GetComponent<Rigidbody>();
            projectileRigidbody.AddForce(spawnLocation.transform.forward * fireSpeed, ForceMode.VelocityChange);
            this.GetComponent<MeshRenderer>().material = onMaterial;
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.CompareTag("Player"))
        {
            this.GetComponent<MeshRenderer>().material = offMaterial;
        }
    }

}
