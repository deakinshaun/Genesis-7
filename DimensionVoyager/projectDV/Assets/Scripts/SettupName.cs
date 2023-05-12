using Fusion;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class SettupName : NetworkBehaviour
{
    [Networked(OnChanged = "updateName")]
    public string nickName { get; set; }
    public TextMeshPro text;

    // Set up the name initially.
    public override void Spawned()
    {
        if (Object.HasStateAuthority)
        {
            nickName = "Default";
        }
    }

    // Called when nickName value changes, on each client
    public static void updateName(Changed<SettupName> change)
    {
        change.Behaviour.text.text = change.Behaviour.nickName;
    }

    // Called to update the nickName value. Must only run
    // on the server (or any node with state authority)
    [Rpc(RpcSources.InputAuthority, RpcTargets.StateAuthority)]
    public void RPC_SetNameOnServer(string name)
    {
        //Debug.Log("Server changing name" + name);
        nickName = name;
    }

    // Called from the application to update the name of the current node
    public void setName(string name)
    {
        //Debug.Log("Setting name on Avatara" + name);
        RPC_SetNameOnServer(name);

    }
}
