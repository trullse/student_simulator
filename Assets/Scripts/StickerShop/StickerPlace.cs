using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class StickerPlace : MonoBehaviour
{
    public int PlaceID;
    public Button bttn;
    public GameObject laptopObj;
    private Laptop laptop;

    public void Start()
    {
        laptop = laptopObj.GetComponent<Laptop>();

        if (PlayerPrefs.HasKey("sticker" + PlaceID))
        {
            int tempID = PlayerPrefs.GetInt("sticker" + PlaceID);
            for (int i = 0; i < laptop.allStickers.Length; i++)
            {
                if (laptop.allStickers[i].ID == tempID)
                {
                    bttn.GetComponent<Image>().sprite = laptop.allStickers[i].StickerImage;
                }
            }
        }

    }
    public void PlaceChoosen()
    {
        if (laptop.source.IsActive())
        {
            bttn.GetComponent<Image>().sprite = laptop.toPlace.StickerImage;
            laptop.PositionChoosen(PlaceID);
        }
    }
}