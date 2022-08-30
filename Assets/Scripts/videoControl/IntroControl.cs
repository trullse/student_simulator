using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using System;

public class IntroControl : MonoBehaviour
{
    public int waiting;
    public string sceneName;

    void Start()
    {
        StartCoroutine(IntroWait());
    }

    IEnumerator IntroWait()
    {
        yield return new WaitForSeconds(waiting);
        PlayerPrefs.SetString("LastSession", DateTime.Now.ToString());
        SceneManager.LoadScene(sceneName);
    }
}
