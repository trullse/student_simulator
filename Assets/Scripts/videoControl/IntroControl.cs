using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class IntroControl : MonoBehaviour
{
    public int waiting;

    void Start()
    {
        StartCoroutine(IntroWait());
    }

    IEnumerator IntroWait()
    {
        yield return new WaitForSeconds(waiting);
        SceneManager.LoadScene("VadimGame");
    }
}
