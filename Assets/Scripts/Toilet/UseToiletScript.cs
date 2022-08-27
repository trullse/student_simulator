using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UseToiletScript : MonoBehaviour
{
    [SerializeField] private GameObject playerObj;
    private Player player;

    public SpriteRenderer opened;
    public SpriteRenderer closed;

    private bool isUsing;
    private float toiletIncrease = 0.1f;
    void Start()
    {
        player = playerObj.GetComponent<Player>();

        isUsing = false;
    }

    // Update is called once per frame
    void Update()
    {
        if (isUsing)
        {
            if (player.currentToilet + toiletIncrease * Time.deltaTime >= 1f)
            {
                player.IncreaseToilet(toiletIncrease * Time.deltaTime);
                isUsing = false;
                player.ToiletStatusChange(false);

                opened.color = new Color(1f, 1f, 1f, 1f);
                closed.color = new Color(1f, 1f, 1f, 0);
            }
            else
            {
                player.IncreaseToilet(toiletIncrease * Time.deltaTime);
            }
        }
    }

    public void OnToiletBttnClick()
    {
        if (!isUsing && player.currentToilet != 1f)
        {
            isUsing = true;

            opened.color = new Color(1f, 1f, 1f, 0);
            closed.color = new Color(1f, 1f, 1f, 1f);
        }

        player.ToiletStatusChange(isUsing);
    }
}
