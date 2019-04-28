using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class Game
{
    public List<Card_treasure_bonus> EnemyDeck, PlayerDeck,
                                     EnemyHand, PlayerHand;
       
    public List<Card_door_monster> EnemyDeck_m, PlayerDeck_m,
                                 EnemyHand_m, PlayerHand_m,
                                 PlayerField_m;
    public Game()
    {
        EnemyDeck = GiveDeckCard_b();
        PlayerDeck = GiveDeckCard_b();

        EnemyDeck_m = GiveDeckCard_m();
        PlayerDeck_m = GiveDeckCard_m();

        EnemyHand = new List<Card_treasure_bonus>();
        PlayerHand = new List<Card_treasure_bonus>();

        PlayerField_m = new List<Card_door_monster>(); 
    }

    List<Card_treasure_bonus>GiveDeckCard_b()
    {
        List<Card_treasure_bonus> list = new List<Card_treasure_bonus>();
        for(int i = 0; i < 20; i++)
        {
            list.Add(CardManager._Cards_treasure_bonus[Random.Range(0, CardManager._Cards_treasure_bonus.Count)]);
        }
        return list;
    }
    List<Card_door_monster> GiveDeckCard_m()
    {
        List<Card_door_monster> list = new List<Card_door_monster>();
        for (int i = 0; i < 20; i++)
        {
            list.Add(CardManager._Cards_door_monster[Random.Range(0, CardManager._Cards_door_monster.Count)]);
        }
        return list;
    }

}

public class GameMenegerScr : MonoBehaviour {

    public Game CurrentGame;
    public Transform EnemyHand, PlayerHand;
    public GameObject CardPref;
	// Use this for initialization
	void Start () {
        CurrentGame = new Game();
        GiveHandCards(CurrentGame.EnemyDeck, EnemyHand);
        GiveHandCards(CurrentGame.PlayerDeck, PlayerHand);
	}

    void GiveHandCards(List<Card_treasure_bonus> deck, Transform hand)
    {
        int i = 0; 
        while (i++ < 4)
        {
            GiveCardToHand(deck, hand);

        }
    }

    void GiveCardToHand(List<Card_treasure_bonus> deck, Transform hand)
    {
        if (deck.Count == 0)
        {
            return;
        }
        Card_treasure_bonus card = deck[0];

        GameObject cardGO = Instantiate(CardPref, hand, false);
        if(hand == EnemyHand)
        {
            cardGO.GetComponent<CardInfoScr>().HideCardInfo(card);
        }
        else
        {
            cardGO.GetComponent<CardInfoScr>().ShowCardInfo(card);
        }
        deck.RemoveAt(0);
    }
}
