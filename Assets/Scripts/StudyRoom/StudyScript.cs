using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class StudyScript : MonoBehaviour
{
    [SerializeField] private GameObject playerObj;
    private Player player;
    public GameObject progressBarObj;
    private StudyProgressBar progressBar;
    public Button defendLabaBttn;


    private GameObject studyingStudentTexture;
    private GameObject sadStudentTexture;


    private bool isStudying;
    private float studyIncrease = 0.04f;
    private float labaIncrease = 0.07f;
    private float currentStudyProgress;

    private Animator animator;
    public GameObject Caution;

    private int hiddenWindow = 3;

    void Start()
    {
        player = playerObj.GetComponent<Player>();
        progressBar = progressBarObj.GetComponent<StudyProgressBar>();
        //animator = GetComponent<Animator>();
        animator = Caution.GetComponent<Animator>();

        currentStudyProgress = (PlayerPrefs.HasKey("study_progress")) ? PlayerPrefs.GetFloat("study_progress") : 0f;
        progressBar.SetStudyProgress(currentStudyProgress);
        if (currentStudyProgress == 1f)
            defendLabaBttn.gameObject.SetActive(true);
        else
            defendLabaBttn.gameObject.SetActive(false);

        isStudying = false;

        studyingStudentTexture = GameObject.Find("SampodStudent");
        studyingStudentTexture.SetActive(false);
        sadStudentTexture = GameObject.Find("SampodSadStudent");

        Caution.SetActive(false);
    }

    // Update is called once per frame
    void Update()
    {
        if (isStudying)
        {
            player.IncreaseStudy(studyIncrease * Time.deltaTime);
            IncreaseStudyProgress(labaIncrease * Time.deltaTime);
            progressBar.SetStudyProgress(currentStudyProgress);
            studyingStudentTexture.SetActive(true);
            sadStudentTexture.SetActive(false);
        }
        else
        {
            studyingStudentTexture.SetActive(false);
            sadStudentTexture.SetActive(true);
        }

    }

    public void IncreaseStudyProgress(float study)
    {
        if (currentStudyProgress < 1f)
        {
            if (1f - currentStudyProgress > study)
                currentStudyProgress += study;
            else
            {
                currentStudyProgress = 1f;
                isStudying = false;
                player.StudyStatusChange(isStudying);
                defendLabaBttn.gameObject.SetActive(true);
            }
        }

        PlayerPrefs.SetFloat("study_progress",currentStudyProgress);
    }

    public void OnStudyBttnClick()
    {
        if (isStudying)
            isStudying = false;
        else if (currentStudyProgress != 1f)
            isStudying = true;

        player.StudyStatusChange(isStudying);
    }

    public void OnDefendBttnClick()
    {
        if (player.currentFood <= 0.15f && player.currentSleep <= 0.15f && player.currentStudy <= 0.15f && player.currentToilet <= 0.15f)
        {
            Caution.SetActive(true);
            StartCoroutine(CloseCaution());
        }
        else
        {
            currentStudyProgress = 0f;
            PlayerPrefs.SetFloat("study_progress", currentStudyProgress);
            progressBar.SetStudyProgress(currentStudyProgress);
            defendLabaBttn.gameObject.SetActive(false);
            SceneManager.LoadScene("BossIntro");
        }        
    }

    IEnumerator CloseCaution()
    {
        yield return new WaitForSeconds(2);
        
        Caution.SetActive(false);
    }

    public void OnHiddenWindowClick()
    {
        --hiddenWindow;
        if (hiddenWindow == 0) SceneManager.LoadScene("FlyingDownScene");
    }
}
