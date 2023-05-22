using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class KeyboardObjectControl : MonoBehaviour
{
    private GameObject projectilePrefab;

    private GameObject wallPrefab;

    private GameObject playerEntitySpawnLocation;

    private GameObject currentProjectile;

    private Rigidbody projectileRigidbody;

    private float projectileSpeed;

    private Transform projectileSpawnLocation;

    // Start is called before the first frame update
    void Start()
    {
        //use the same objects/values as the CollisionsManagement script
        projectilePrefab = transform.gameObject.GetComponent<CollisionsManagement>().projectilePrefab;
        wallPrefab = transform.gameObject.GetComponent<CollisionsManagement>().wallPrefab;
        playerEntitySpawnLocation = transform.gameObject.GetComponent<CollisionsManagement>().playerEntitySpawnLocation;
        projectileSpeed = transform.gameObject.GetComponent<CollisionsManagement>().projectileSpeed;
    }

    // Update is called once per frame
    void Update()
    {
        if(Input.GetKeyDown(KeyCode.C))
        {
            //projectile spawn location will be relative to the playerEntitySpawnLocation
            projectileSpawnLocation = playerEntitySpawnLocation.transform;
            projectileSpawnLocation.position.Set(projectileSpawnLocation.position.x, projectileSpawnLocation.position.y, projectileSpawnLocation.position.z);
            currentProjectile = Instantiate(projectilePrefab, projectileSpawnLocation.position, Quaternion.identity);
            projectileRigidbody = currentProjectile.GetComponent<Rigidbody>();
            projectileRigidbody.isKinematic = true;

            currentProjectile.transform.parent = projectileSpawnLocation;
        }

        if(Input.GetKeyUp(KeyCode.C))
        {
            currentProjectile.transform.parent = null;
            projectileRigidbody.isKinematic = false;
            projectileRigidbody.AddForce(projectileSpawnLocation.forward * projectileSpeed, ForceMode.VelocityChange);
            currentProjectile = null;
        }

        if(Input.GetKeyDown(KeyCode.V))
        {
            Instantiate(wallPrefab, playerEntitySpawnLocation.transform.position, Quaternion.LookRotation(playerEntitySpawnLocation.transform.forward));
        }
    }
}
