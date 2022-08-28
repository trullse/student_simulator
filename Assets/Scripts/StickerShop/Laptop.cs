using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Laptop : MonoBehaviour
{
    public Button okBttn;
    public Image source;
    public Sticker toPlace;
    public Sticker[] allStickers;
    void Start()
    {
        if (PlayerPrefs.HasKey("stickerToPlace"))
        {
            okBttn.gameObject.SetActive(false);

            for (int i = 0; i < allStickers.Length; i++)
            {
                if (PlayerPrefs.GetInt("stickerToPlace") == allStickers[i].ID)
                {
                    toPlace = allStickers[i];
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
