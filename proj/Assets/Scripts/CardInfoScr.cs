using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;
using UnityEngine.UI;
using TMPro;

public class CardInfoScr : MonoBehaviour {

    public Card_door_monster SelfCard;
    public Image Logo;
    public TextMeshProUGUI Name;
    public void ShowCardInfo(Card_door_monster card)
    {
        SelfCard = card;

        Logo.sprite = card.Logo;
        Logo.preserveAspect = true;
        Name.text = card.Name;
    }

    private void Start()
    {
        using (StreamWriter w = new StreamWriter("comand.txt"))
        {
            // w.Write(SelfCard.Logo.ToString()); transform.GetSiblingIndex()
        }
        ShowCardInfo(CardManager._Cards_door_monster[transform.GetSiblingIndex()]); 
    }
}
