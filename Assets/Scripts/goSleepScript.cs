using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class goSleepScript : MonoBehaviour
{

    public SpriteRenderer base_texture;
    public SpriteRenderer doter;
    public SpriteRenderer light;
    public Player player;
    private int ms;
    public void goSleep()
    {
        ms = 0;
        player.isBusy = true;
        base_texture.color = new Color(0.0728f, 0.0902f, 0.6226f, 1f);
        doter.color = new Color(0.0728f, 0.0902f, 0.6226f, 1f);
        light.color = new Color(1f, 1f, 1f, 1f);

    }
    private void Update()
    {
        if (ms != 1000)
        {
            ms++;
            if (ms == 999 && player.isBusy) player.SleepButtonPush();
            return;
        }
        base_texture.color = new Color(1f, 1f, 1f, 1f);
        doter.color = new Color(1f, 1f, 1f, 1f);
        light.color = new Color(1f, 1f, 1f, 0);
        player.isBusy = false;
    }

}
