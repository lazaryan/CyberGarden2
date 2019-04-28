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
    public Transform EnemyHand, PlayerHand, PlayerField_m;
    public GameObject CardPref;

    int Turn, TurnTime = 30;
    public TextMeshProUGUI TurnTimeText;
    public Button EndTurnBtn;

    public bool IsPlayerTurn
    {
        get
        {
            return Turn % 2 == 0;
        }
    }

	// Use this for initialization
	void Start () {
        Turn = 0;
        CurrentGame = new Game();
        GiveHandCards(CurrentGame.EnemyDeck, EnemyHand);
        GiveHandCards(CurrentGame.PlayerDeck, PlayerHand);
        GiveFieldCards(CurrentGame.PlayerDeck_m, PlayerField_m);

        StartCoroutine(TurnFunc());
	}

    void GiveHandCards(List<Card_treasure_bonus> deck, Transform hand)
    {
        int i = 0; 
        while (i++ < 2)
        {
            GiveCardToHand(deck, hand);

        }
    }
    void GiveFieldCards(List<Card_door_monster> deck, Transform hand)
    {
        int i = 0;
        while (i++ < 1)
        {
            GiveCardToFieald(deck, hand);

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

    void GiveCardToFieald(List<Card_door_monster> deck, Transform hand)
    {
        if (deck.Count == 0)
        {
            return;
        }
        Card_door_monster card = deck[0];

        GameObject cardGO = Instantiate(CardPref, hand, false);
        cardGO.GetComponent<CardInfoScr>().ShowCardInfo_d(card);
        deck.RemoveAt(0);
    }
    IEnumerator TurnFunc()
    {
        TurnTime = 30;
        TurnTimeText.text = TurnTime.ToString();
        if (IsPlayerTurn)
        {
            while (TurnTime-- > 0)
            {
                TurnTimeText.text = TurnTime.ToString();
                yield return new WaitForSeconds(1);
            }
        }
        else
        {
            while(TurnTime-->0)
            {
                while (TurnTime-- > 27)
                {
                    TurnTimeText.text = TurnTime.ToString();
                    yield return new WaitForSeconds(1);
                }
            }
        }

    }
    public void ChangeTurn()
    {
        StopAllCoroutines();
        Turn++;

        EndTurnBtn.interactable = IsPlayerTurn;
        if(IsPlayerTurn)
        {
            GiveNewCards();
        }
        StartCoroutine(TurnFunc());
    }
    void GiveNewCards()
    {
        GiveCardToFieald(CurrentGame.PlayerDeck_m, PlayerField_m);
    }
}
