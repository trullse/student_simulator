using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;



public class MuteSound : MonoBehaviour
{

    private GameObject soundSourse;

    // Start is called before the first frame update
    void Start()
    {
        soundSourse = GameObject.Find("Audio Source (calm)");
       if (soundSourse) soundSourse.SetActive(false);
    }

    private void OnDisable()
    {
      if (soundSourse)  soundSourse.SetActive(true);
    }
}
