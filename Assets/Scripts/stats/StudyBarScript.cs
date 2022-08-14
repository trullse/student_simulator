using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class StudyBarScript : MonoBehaviour
{
    public Slider slider;

    public void SetMaxStudy(float study)
    {
        slider.maxValue = study;
        slider.value = study;
    }
    public void SetStudy(float study)
    {
        slider.value = study;
    }
}
