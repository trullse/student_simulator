using System.Collections;
using System.Collections.Generic;
using UnityEngine.SceneManagement;
using UnityEngine;

public class EscapePanel : MonoBehaviour
{
    public void NewGame()
    {
        SceneManager.LoadScene("bedroom2d");
    }
  public void ExitGame()
    {
        Application.Quit();
    }
    
}
