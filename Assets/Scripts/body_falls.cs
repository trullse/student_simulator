using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class body_falls : MonoBehaviour
{

    private Rigidbody2D fallingBody;
    
    

    void Start()
    {
        fallingBody = GetComponent<Rigidbody2D>();
       
    }

   
    private void OnTriggerEnter2D(Collider2D other)
    {
        if (other.tag == "specialLine")
        {
            fallingBody.constraints = RigidbodyConstraints2D.None;
        }
    }
}
