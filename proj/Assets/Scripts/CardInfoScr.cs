using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;
using UnityEngine.UI;
using TMPro;

public class CardInfoScr : MonoBehaviour {
    public Card_treasure_bonus SelfCard;

    public Card_door_monster _SelfCard;
    public Image Logo;
    public Image Shirt;
    public TextMeshProUGUI Name;
    //GameObject temp = GameObject.Find("Hand_2");
    public void HideCardInfo(Card_treasure_bonus card)
    {
        //ShowCardInfo(card);
       Logo.sprite = null;
        Logo.transform.localScale = new Vector3 (0, 0);
         Shirt.sprite = card.Shirt;
      //  temp.SetActive(false);

    }

    public void HideCardInfo_d(Card_door_monster card)
    {
Logo.sprite = null;
        Logo.transform.localScale = new Vector3(0, 0);
        
        Shirt.sprite = card.Shirt;
    }

    public void ShowCardInfo_d(Card_door_monster card)
    {
        _SelfCard = card;
        Logo.transform.localScale = new Vector3(1, 1);
        Shirt.transform.localScale = new Vector3(0, 0);

        Logo.sprite = card.Logo;
        
        Logo.preserveAspect = true;

        // Name.text = card.Name;
    }

    public void ShowCardInfo(Card_treasure_bonus card)
    {
        SelfCard = card;
        Logo.transform.localScale = new Vector3(1, 1);
        Shirt.transform.localScale = new Vector3(0, 0);

        Logo.sprite = card.Logo;
        Logo.preserveAspect = true;
        // Name.text = card.Name;
    }

/*    public void ShowCardInfo_(Card_treasure_bonus card)
    {
        SelfCard_ = card;

        Logo.sprite = card.Logo;
        Logo.preserveAspect = true;
        Name.text = card.Name;
    }*/
    private void Start()
    {
        //ShowCardInfo(CardManager._Cards_door_monster[transform.GetSiblingIndex()]);
        //ShowCardInfo(CardManager._Cards_treasure_bonus[transform.GetSiblingIndex()]);
    }
}
