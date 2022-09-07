using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class StickerShop : MonoBehaviour
{
    public AllStickers allSticks;

    public GameObject _playerObj;
    private Player player;
    public GameObject button;
    public GameObject content;

    private List<GameObject> list = new List<GameObject>();
    private VerticalLayoutGroup _group;

    private Animator animator;
    public GameObject Caution;

    // Start is called before the first frame update
    void Start()
    {
        //money = PlayerPrefs.GetInt("money");
        player = _playerObj.GetComponent<Player>();
        animator = Caution.GetComponent<Animator>();
        Caution.SetActive(false);

        RectTransform rectT = content.GetComponent<RectTransform>();
        rectT.transform.localPosition = new Vector3(0.0f, 0.0f, 0.0f);
        _group = GetComponent<VerticalLayoutGroup>();
        setStickers();
    }

    private void RemoveList()
    {
        foreach (var elem in list)
        {
            Destroy(elem);
        }
        list.Clear();
    }

    void setStickers()
    {
        RectTransform rectT = content.GetComponent<RectTransform>();
        rectT.transform.localPosition = new Vector3(0.0f, 0.0f, 0.0f);
        RemoveList();
        if (allSticks.allStickers.Length > 0)
        {
            var pr1 = Instantiate(button, transform);
            var h = pr1.GetComponent<RectTransform>().rect.height;
            var tr = GetComponent<RectTransform>();
            tr.sizeDelta = new Vector2(tr.rect.width, h * allSticks.allStickers.Length);
            Destroy(pr1);
            for (var i = 0; i < allSticks.allStickers.Length; i++)
            {
                var pr = Instantiate(button, transform);
                pr.GetComponentInChildren<Text>().text = allSticks.allStickers[i].StickerName;
                pr.transform.Find("PriceText").GetComponent<Text>().text = allSticks.allStickers[i].StickerPrice.ToString();
                pr.GetComponentsInChildren<Image>()[0].sprite = allSticks.allStickers[i].StickerImage;
                var i1 = i;
                pr.GetComponent<Button>().onClick.AddListener(() => GetSticker(allSticks.allStickers[i1], pr.GetComponent<Button>()));
                if (PlayerPrefs.HasKey("StickerBought" + allSticks.allStickers[i].ID) && PlayerPrefs.GetInt("StickerBought" + allSticks.allStickers[i].ID) == 1)
                {
                    pr.GetComponent<Button>().interactable = false;
                }
                list.Add(pr);
            }
        }
    }

    void GetSticker(Sticker sticker, Button bttn)
    {
        Debug.Log(sticker.ID);
        if (player.SpendMoney(sticker.StickerPrice))
        {
            PlayerPrefs.SetInt("stickerToPlace", sticker.ID);
            bttn.interactable = false;
            PlayerPrefs.SetInt("StickerBought" + sticker.ID, 1);
            SceneManager.LoadScene("PlaceStickers");
        }
        else
        {
            Caution.SetActive(true);
            StartCoroutine(CloseCaution());
        }
    }

    IEnumerator CloseCaution()
    {
        yield return new WaitForSeconds(2);

        Caution.SetActive(false);
    }
}
