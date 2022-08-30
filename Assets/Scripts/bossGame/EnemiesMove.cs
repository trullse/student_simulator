using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemiesMove : MonoBehaviour
{
    [SerializeField] GameObject enemy;
    [SerializeField] float speed;
    
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void FixedUpdate()
    {
        enemy.transform.Translate(0, -speed * Time.deltaTime, 0);
    }
}
