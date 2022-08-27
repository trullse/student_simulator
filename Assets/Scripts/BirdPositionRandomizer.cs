using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class BirdPositionRandomizer : MonoBehaviour
{
    
    [SerializeField] GameObject bird;
   
   
    void Start()
    {
       
        bird.transform.position = new Vector3(bird.transform.position.x + Random.Range(-1f, 1f), bird.transform.position.y);
       
    }

}
