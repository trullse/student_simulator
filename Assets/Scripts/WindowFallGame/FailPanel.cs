using System.Collections;
using System.Collections.Generic;
using UnityEngine.SceneManagement;
using UnityEngine;

public class FailPanel : MonoBehaviour
{
    public void TryAgain()
    {
        SceneManager.LoadScene("FlyingDownScene");
    }

    public void BackToUniversity()
    {
        SceneManager.LoadScene("sampod2d");
    }
}
