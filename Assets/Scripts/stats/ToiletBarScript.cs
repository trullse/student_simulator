using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ToiletBarScript : MonoBehaviour
{
    public Slider slider;

    public void SetMaxToilet(float toilet)
    {
        slider.maxValue = toilet;
        slider.value = toilet;
    }
    public void SetToilet(float toilet)
    {
        slider.value = toilet;
    }
}
