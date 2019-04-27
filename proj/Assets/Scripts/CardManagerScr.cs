using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public struct Card_door_monster
{
    public string Name;
    public Sprite Logo;
    public int Level;
    public int Level_up;

    public Card_door_monster(string name, string logoPath, int level, int level_up)
    {
        Name = name;
        Logo = Resources.Load<Sprite>(logoPath);
        Level = level;
        Level_up = level_up;
    }
}
public struct Card_treasure_bonus
{
    public string Name;
    public Sprite Logo;
    public int Bonus;

    public Card_treasure_bonus(string name, string logoPath, int bonus)
    {
        Name = name;
        Logo = Resources.Load<Sprite>(logoPath);
        Bonus = bonus;
    }
}

public static class CardManager
{   
    public static List<Card_door_monster> _Cards_door_monster = new List<Card_door_monster>();
    public static List<Card_treasure_bonus> _Cards_treasure_bonus = new List<Card_treasure_bonus>();
}

public class CardManagerScr : MonoBehaviour
{
    public void Awake()
    {
        mysql sq = new mysql();
        sq.sql();
        string type;
        string _name;
        Sprite _logo;

        int _bonus;
        for ()
        {
            switch (type)
            {
                case "bonus":
                    {
                        CardManager._Cards_door_bonus.Add();
                        break;
                    }
                case "monster":
                    {
                        CardManager._Cards_door_monster.Add(new Card_door_curse(_name, _logo, _level));
                        break;
                    }   
            }
        }
    }
    
}
