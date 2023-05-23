using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ToggleButtonScript : MonoBehaviour
{
    public GameObject indicator;
    public Material indicatorOffMat;
    public Material indicatorOnMat;
    private bool toggleStatus;
    
    // Start is called before the first frame update
    void Start()
    {
        toggleStatus = false;
    }

    void OnTriggerEnter(Collider other)
    {
        //toggle boolean value and display value with indicator
        toggleStatus = !toggleStatus;
        if (toggleStatus == true) indicator.GetComponent<MeshRenderer>().material = indicatorOnMat;
        else indicator.GetComponent<MeshRenderer>().material = indicatorOffMat;

        //visibly press button
        StartCoroutine(buttonMovement());
    }

    IEnumerator buttonMovement()
    {
        //disable button while it is being pressed
        transform.gameObject.GetComponent<CapsuleCollider>().isTrigger = false;

        //press button down for one second then return it to its original position
        transform.Translate(0.0f, -0.08f, 0.0f);
        yield return new WaitForSeconds(0.5f);
        transform.Translate(0.0f, 0.08f, 0.0f);

        //re-enable button
        transform.gameObject.GetComponent<CapsuleCollider>().isTrigger = true;
    }
}
