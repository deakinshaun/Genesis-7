using Fusion;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AvatarControl : NetworkBehaviour
{
    public float movespeed = 5.0f;
    public float turnspeed = 100.0f;

    public override void FixedUpdateNetwork()
    {
        if (GetInput(out InputStruct inputid))
        {

            this.transform.rotation *= Quaternion.AngleAxis(inputid.turn * turnspeed * Runner.DeltaTime, Vector3.up);
            this.transform.position += inputid.forward * movespeed * Runner.DeltaTime * this.transform.forward;
        }
    }
}
