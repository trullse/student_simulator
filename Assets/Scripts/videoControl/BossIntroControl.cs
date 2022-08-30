using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class BossIntroControl : MonoBehaviour
{
    private Animator animator;

    void Start()
    {
        animator = GetComponent<Animator>();
        animator.SetTrigger("SceneStart");
    }

    private void OnEnable()
    {
        PlayerMove.onSceneEnd += Fading;
    }

    private void OnDisable()
    {
        PlayerMove.onSceneEnd -= Fading;
    }

    void Fading()
    {
        Debug.Log("Animation worked");
        animator.SetTrigger("SceneEnd");
    }


}
