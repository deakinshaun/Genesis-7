using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ScaleButtonScript : MonoBehaviour
{
    public enum ButtonType
    {
        Increase,
        Decrease
    }

    public ButtonType buttonType;
    public GameObject indicators;

    void OnTriggerEnter(Collider other)
    {
        //call function to increase/decrease value
        if (buttonType == ButtonType.Increase) indicators.transform.GetComponent<ScaleIndicator>().increaseValue();
        else if (buttonType == ButtonType.Decrease) indicators.transform.GetComponent<ScaleIndicator>().decreaseValue();

        //visibly press button
        StartCoroutine(buttonMovement());
    }

    IEnumerator buttonMovement()
    {
        //disable button while it is being pressed
        transform.gameObject.GetComponent<CapsuleCollider>().isTrigger = false;

        //press button down for one second then return it to its original position
        transform.Translate(0.0f, -0.08f, 0.0f);
        yield return new WaitForSeconds(0.2f);
        transform.Translate(0.0f, 0.08f, 0.0f);

        //re-enable button
        transform.gameObject.GetComponent<CapsuleCollider>().isTrigger = true;
    }


}
