using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ballsControl : MonoBehaviour
{
    
    Animator animator;
    PolygonCollider2D _collider;

    void Start()
    {
        animator = GetComponent<Animator>();
        _collider = GetComponent<PolygonCollider2D>();
    }

    private void OnTriggerEnter2D(Collider2D other)
    {
       animator.SetTrigger("playerInPool");
       // Debug.Log("balls fly");
    }

}
