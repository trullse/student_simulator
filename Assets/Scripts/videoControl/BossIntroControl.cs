using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BossIntroControl : MonoBehaviour
{
    private Animator animator;

    void Start()
    {
        animator = GetComponent<Animator>();
        animator.SetTrigger("SceneStart");
    }
}
