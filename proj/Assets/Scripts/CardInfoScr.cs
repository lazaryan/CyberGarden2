using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class CardInfoScr : MonoBehaviour {

    public Card_door_monster SelfCard;
    public Image Logo;
    public TextMeshProUGUI Name;
    public void ShowCardInfo(Card_door_monster Card)
    {
        SelfCard = Card;

        Logo.sprite = Card.Logo;
        Logo.preserveAspect = true;
        Name.text = Card.Name;
    }

    private void Start()
    {
        ShowCardInfo(CardManager._Cards_door_monster[transform.GetSiblingIndex()]); 
    }
}
