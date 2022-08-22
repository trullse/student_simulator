using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class SceneChange : MonoBehaviour
{
    public Player player;
    public void ChangeScene(string sceneName)
    {
        if (!player.isBusy) SceneManager.LoadScene(sceneName);
    }
}
