using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class StudyBarScript : MonoBehaviour
{
    public Slider slider;
    public Image image;
    public Gradient gradient;
    public void SetMaxStudy(float study)
    {
        slider.maxValue = 1f;
        slider.value = study;

        image.color = gradient.Evaluate(study);
    }
    public void SetStudy(float study)
    {
        slider.value = study;

        image.color = gradient.Evaluate(study);
    }
}
