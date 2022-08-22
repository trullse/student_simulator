using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class closeDoorScript : MonoBehaviour
{
    
    public SpriteRenderer opened;
    public SpriteRenderer closed;
    public Player player;
    private int ms;
    public void closeDoor()
    {
        ms = 0;
        player.isBusy = true;
        opened.color = new Color(1f, 1f, 1f, 0);
        closed.color = new Color(1f, 1f, 1f, 1f);
        
    }
    private void Update()
    {
        if (ms != 1000)
        {
            ms++;
            if (ms == 999 && player.isBusy) player.ToiletButtonPush();
            return;
        }
        opened.color = new Color(1f, 1f, 1f, 1f);
        closed.color = new Color(1f, 1f, 1f, 0);
        player.isBusy = false;
    }

}
