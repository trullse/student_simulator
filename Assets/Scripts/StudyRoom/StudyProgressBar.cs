using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class StudyProgressBar : MonoBehaviour
{
    public Slider slider;
    public Image image;
    public Gradient gradient;
    
    public void SetStudyProgress(float progress)
    {
        slider.value = progress;

        image.color = gradient.Evaluate(progress);
    }
}
