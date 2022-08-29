using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Laptop : MonoBehaviour
{
    public Button okBttn;
    public Image source;
    public Sticker toPlace;
    //public Sticker[] allStickers;
    public AllStickers allSticks;
    void Start()
    {
        if (PlayerPrefs.HasKey("stickerToPlace"))
        {
            okBttn.gameObject.SetActive(false);

            for (int i = 0; i < allSticks.allStickers.Length; i++)
            {
                if (PlayerPrefs.GetInt("stickerToPlace") == allSticks.allStickers[i].ID)
                {
                    toPlace = allSticks.allStickers[i];
                    break;
                }
            }
            source.sprite = toPlace.StickerImage;
            PlayerPrefs.DeleteKey("stickerToPlace");
        }
        else
            okBttn.gameObject.SetActive(true);
    }
    
    public void PositionChoosen(int posID)
    {
        PlayerPrefs.SetInt("sticker" + posID, toPlace.ID);
        source.enabled = false;
        okBttn.gameObject.SetActive(true);
    }
}
