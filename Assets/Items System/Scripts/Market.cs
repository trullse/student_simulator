using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Market : MonoBehaviour
{
    public Item[] arrayItems;

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
        setGoods();
    }

    private void RemoveList()
    {
        foreach (var elem in list)
        {
            Destroy(elem);
        }
        list.Clear();
    }

    void setGoods()
    {
        RectTransform rectT = content.GetComponent<RectTransform>();
        rectT.transform.localPosition = new Vector3(0.0f, 0.0f, 0.0f);
        RemoveList();
        if (arrayItems.Length > 0)
        {
            var pr1 = Instantiate(button, transform);
            var h = pr1.GetComponent<RectTransform>().rect.height;
            var tr = GetComponent<RectTransform>();
            tr.sizeDelta = new Vector2(tr.rect.width, h * arrayItems.Length);
            Destroy(pr1);
            for (var i = 0; i < arrayItems.Length; i++)
            {
                var pr = Instantiate(button, transform);
                pr.GetComponentInChildren<Text>().text = arrayItems[i].ItemName;
                pr.transform.Find("PriceText").GetComponent<Text>().text = arrayItems[i].ItemPrice.ToString();
                pr.GetComponentsInChildren<Image>()[0].sprite = arrayItems[i].ItemImage;
                var i1 = i;
                pr.GetComponent<Button>().onClick.AddListener(() => GetGood(arrayItems[i1]));
                list.Add(pr);
            }
        }
    }

    void GetGood(Item item)
    {
        Debug.Log(item.ID);
        if (player.SpendMoney(item.ItemPrice))
        {
            player.IncreaseFood(item.Calories);
        }
        else
        {
            Debug.Log("trying to buy");
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
