using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Music : MonoBehaviour
{
    private static Music instance;
    private static bool? lastSceneIsCalm; // boss scenes - 0, others - 1
    [SerializeField] private bool thisSceneIsCalm;
    private void Awake()
    {
        if (instance != null && lastSceneIsCalm != null && lastSceneIsCalm == thisSceneIsCalm)
            Destroy(gameObject);
        else if (instance == null)
        {
            instance = this;
            DontDestroyOnLoad(transform.gameObject);
        }
        else
        {
            Destroy(instance.gameObject);
            instance = this;
            DontDestroyOnLoad(transform.gameObject);
        }
        lastSceneIsCalm = thisSceneIsCalm;
    }
}
