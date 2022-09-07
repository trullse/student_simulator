using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class naighbourSpeak : MonoBehaviour
{
    public GameObject[] answers;
    public GameObject[] free_phrases;
    private GameObject created, self_created;
    private bool exists = false;
    private bool double_clicked = false;
    private bool banned = false;
  
    private int wnd = 0;

    private Coroutine _coroutine;
    private Coroutine _self_screaming_coroutine;


    private void Start()
    {
        _self_screaming_coroutine = StartCoroutine(ScreamingCoroutine());
    }


    public void saySomething()
    {
        
        if (!banned)
        {

            if (self_created)
            {
                StopCoroutine(_self_screaming_coroutine);
                Destroy(self_created.gameObject);
                StartCoroutine(ScreamingCoroutine());
            }


            if (!exists)
            {
                int windowType = Random.Range(0, answers.Length - 2);
                created = Instantiate(answers[windowType], new Vector3(0.5f, -2f, 0f), Quaternion.identity);
                exists = true;
                
                _coroutine = StartCoroutine(BecomeSilent(created));
                
            }
            else if (exists && !double_clicked)
            {
               // ms = 0;
                Destroy(created);
                StopCoroutine(_coroutine);
                

                created = Instantiate(answers[2], new Vector3(0.5f, -2f, 0f), Quaternion.identity);
                double_clicked = true;
               
                _coroutine = StartCoroutine(BecomeSilent(created));
            }
            else
            {
                StopCoroutine(_coroutine);
               
                Destroy(created);
                created = Instantiate(answers[3], new Vector3(0.5f, -2f, 0f), Quaternion.identity);
                banned = true;
                _coroutine = StartCoroutine(BecomeSilent(created));
                StartCoroutine(BannedCoroutine());
               
            }
        }
    }

    private void dota2Screaming()
    {
        if (!exists)
        {
            self_created = Instantiate(free_phrases[wnd], new Vector3(0.5f, -2f, 0f), Quaternion.identity);
            wnd = (wnd == 0) ? 1 : 0;
            exists = true;
         
        }
    }



    IEnumerator BecomeSilent(GameObject obj)
    {
        yield return new WaitForSeconds(2);

        DestructionCentre(obj);
        double_clicked = false;
        StartCoroutine(ScreamingCoroutine());
    }


    void DestructionCentre(GameObject obj)
    {
        if (obj) Destroy(obj.gameObject);
        exists = false;
    }

    IEnumerator BannedCoroutine()
    {
        yield return new WaitForSeconds(15);
        banned = false;
    }


    IEnumerator ScreamingCoroutine()
    {
        yield return new WaitForSeconds(10);
        dota2Screaming();
        StartCoroutine(ShutUpCoroutine(self_created));
       

    }

    IEnumerator ShutUpCoroutine(GameObject obj)
    {
        yield return new WaitForSeconds(2);

        if (obj) Destroy(obj.gameObject);
        exists = false;
      
    }

}