using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GenerateEnemies : MonoBehaviour
{
    public Transform copyPosition;
    [SerializeField] Vector2 range;
    [SerializeField] GameObject enemy;
    public int waiting;

    IEnumerator CopyEnemy()
    {
        yield return new WaitForSeconds(waiting);
        waiting = 1;
        RepeatedCopying();
    }

    public void RepeatedCopying()
    {
        Vector2 position = copyPosition.position + new Vector3(Random.Range(-range.x, range.x), 0);
        Instantiate(enemy, position, Quaternion.identity);
        StartCoroutine(CopyEnemy());
    }
    
    void Start()
    {
        StartCoroutine(CopyEnemy());
    }

}
