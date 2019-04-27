using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public struct Card_door_bonus
{
    public string Name;
    public Sprite Logo;
    public int Bonus;

    public Card_door_bonus(string name, string logoPath, int bonus)
    {
        Name = name;
        Logo = Resources.Load<Sprite>(logoPath);
        Bonus = bonus;
    }
}
public struct Card_door_monster
{
    public string Name;
    public Sprite Logo;
    public int Level;

    public Card_door_monster(string name, string logoPath, int level)
    {
        Name = name;
        Logo = Resources.Load<Sprite>(logoPath);
        Level = level;
    }
}
public struct Card_door_curse
{
    public string Name;
    public Sprite Logo;
    public string Effect;

    public Card_door_curse(string name, string logoPath, string effect)
    {
        Name = name;
        Logo = Resources.Load<Sprite>(logoPath);
        Effect = effect;
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
public struct Card_treasure_spell
{
    public string Name;
    public Sprite Logo;
    public string Effect;

    public Card_treasure_spell(string name, string logoPath, string effect)
    {
        Name = name;
        Logo = Resources.Load<Sprite>(logoPath);
        Effect = effect;
    }
}
public static class CardManager
{   
    public static List<Card_door_bonus> _Cards_door_bonus = new List<Card_door_bonus>();
    public static List<Card_door_curse> _Cards_door_course = new List<Card_door_curse>();
    public static List<Card_door_monster> _Cards_door_monster = new List<Card_door_monster>();
    public static List<Card_treasure_bonus> _Cards_treasure_bonus = new List<Card_treasure_bonus>();
    public static List<Card_treasure_spell> _Cards_treasure_spell = new List<Card_treasure_spell>();

}

public class CardManagerScr : MonoBehaviour
{
    public void Awake()
    {
        string type;
        int _bonus;
        CardManager._Cards_door_bonus.Add(new Card_door_bonus(name, "Sprites/Cards_door/" + name, _bonus));
    }
    
}
