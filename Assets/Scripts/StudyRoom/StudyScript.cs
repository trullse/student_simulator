using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

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
    private float studyIncrease = 0.1f;
    private float currentStudyProgress;

    public GameObject WindowButton;

    void Start()
    {
        player = playerObj.GetComponent<Player>();
        progressBar = progressBarObj.GetComponent<StudyProgressBar>();
        currentStudyProgress = (PlayerPrefs.HasKey("study_progress")) ? PlayerPrefs.GetFloat("study_progress") : 0f;
        progressBar.SetStudyProgress(currentStudyProgress);
        if (currentStudyProgress == 1f)
            defendLabaBttn.gameObject.SetActive(true);
        else
            defendLabaBttn.gameObject.SetActive(false);

        isStudying = false;

        WindowButton.SetActive(false);

        studyingStudentTexture = GameObject.Find("SampodStudent");
        studyingStudentTexture.SetActive(false);
        sadStudentTexture = GameObject.Find("SampodSadStudent");
    }

    // Update is called once per frame
    void Update()
    {
        if (isStudying)
        {
            player.IncreaseStudy(studyIncrease * Time.deltaTime);
            IncreaseStudyProgress(studyIncrease * Time.deltaTime);
            progressBar.SetStudyProgress(currentStudyProgress);
            studyingStudentTexture.SetActive(true);
            sadStudentTexture.SetActive(false);
        }
        else
        {
            studyingStudentTexture.SetActive(false);
            sadStudentTexture.SetActive(true);
        }

        if (player.currentFood <= 0.15f && player.currentSleep <= 0.15f && player.currentStudy <= 0.15f && player.currentToilet <= 0.15f)
        {
            WindowButton.SetActive(true);
        }
        else
        {
            WindowButton.SetActive(false);
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
        currentStudyProgress = 0f;
        PlayerPrefs.SetFloat("study_progress", currentStudyProgress);
        progressBar.SetStudyProgress(currentStudyProgress);
        defendLabaBttn.gameObject.SetActive(false);
    }
}
