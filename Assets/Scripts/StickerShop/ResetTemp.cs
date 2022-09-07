using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class ResetTemp : MonoBehaviour
{
    // Start is called before the first frame update
    public AllStickers allSticks;

    public GameObject CautionOk;

    private void Start ()
    {
        CautionOk.SetActive(false);
    }

    public void OnResetClicked()
    {
        CautionOk.SetActive(true);
    }

    public void OnOkClicked()
    {
        for (int i = 0; i < allSticks.allStickers.Length; i++)
        {
            PlayerPrefs.SetInt("StickerBought" + i, 0);
        }
        for (int i = 0; i < 12; i++)
        {
            if (PlayerPrefs.HasKey("sticker" + i))
            {
                PlayerPrefs.DeleteKey("sticker" + i);
            }
        }
        SceneManager.LoadScene("ShopStickers");
    }

}
