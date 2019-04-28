using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Data;
using System;
using Mono.Data.Sqlite;
using System.Data.Common;
using System.IO;
using System.Collections;


public struct Card_door_monster
{
    public string Name;
    public Sprite Logo;
    public Sprite Shirt;
    public int Level;
    public int Level_up;

    public Card_door_monster(string name, string logoPath, int level, int level_up, string shirtrPath)
    {
        Name = name;
        Logo = Resources.Load<Sprite>(logoPath);
        Level = level;
        Level_up = level_up;
        Shirt = Resources.Load<Sprite>(shirtrPath);
    }
}
public struct Card_treasure_bonus
{
    public string Name;
    public Sprite Logo;
    public int Bonus;
    public Sprite Shirt;
    public Card_treasure_bonus(string name, string logoPath, int bonus, string shirtrPath)
    {
        Name = name;
        Logo = Resources.Load<Sprite>(logoPath);
        Bonus = bonus;
        Shirt = Resources.Load<Sprite>(shirtrPath);
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
        DataBase dataBase = new DataBase();
        dataBase.start();
        CardManager._Cards_door_monster = dataBase.getDoor("monster");
        CardManager._Cards_treasure_bonus = dataBase.getTreasure("bonus");
    }

}

public class DataBase
{
    private const string databaseName = "G:\\project\\CyberGarden2\\proj\\Assets\\StreamingAssets\\Cards.db";
    //private const string databaseName = "D:\\CyberGarden2\\proj\\Assets\\StreamingAssets\\Cards.db";

    static string sprites_door = "Sprites/Card_door/";
    static string sprites_treasure = "Sprites/Card_treasure/";

    public void start()
    {
        if (!File.Exists(databaseName))
        {
            createDB();
            CreateTable();

            SelectDataDoor();
            SelectDataTresure();
        }
    }

    static void createDB()
    {
        SqliteConnection.CreateFile(databaseName);
    }

    static void CreateTable()
    {//bonus curse monster
     //spell super_bonus
        SqliteConnection connection = new SqliteConnection("Data Source=" + databaseName);
        SqliteCommand command1 = new SqliteCommand("" +
            "CREATE TABLE IF NOT EXISTS card_door (" +
            "id INTEGER PRIMARY KEY AUTOINCREMENT NOT NULL," +
            "type char(100) NOT NULL," +
            "name char(100) NOT NULL," +
            "logo char(100) NOT NULL," +
            "effect char(100) NOT NULL," +
            "shirt char(100) NOT NULL," +
            "bonus int NOT NULL," +
            "level int," +
            "level_up int" +
            ");", connection);

        SqliteCommand command2 = new SqliteCommand("" +
            "CREATE TABLE IF NOT EXISTS card_treasure (" +
            "id INTEGER PRIMARY KEY AUTOINCREMENT NOT NULL," +
            "type char(100) NOT NULL," +
            "name char(100) NOT NULL," +
            "logo char(100) NOT NULL," +
            "effect char(100) NOT NULL," +
            "shirt char(100) NOT NULL," +
            "bonus int NOT NULL" +
            ")", connection);

        connection.Open();
        command1.ExecuteNonQuery();
        command2.ExecuteNonQuery();
        connection.Close();
    }

    static void SelectDataDoor()
    {
        addCardDoor("monster", "Amnesiya", "", 2, 2, 1);
        addCardDoor("monster", "Analog", "", 5, 10, 1);
        addCardDoor("monster", "Bluescreen", "", 3, 4, 1);
        addCardDoor("monster", "Bug", "", 1, 25, 1);
        addCardDoor("monster", "Daedline", "", 5, 15, 1);
        addCardDoor("monster", "Dotwithcoma", "", 1, 5, 1);
        addCardDoor("monster", "Lazy", "", 3, 1, 1);
        addCardDoor("monster", "Nocomments", "", 1, 3, 1);
    }

    static void SelectDataTresure()
    {
        addCardTresure("bonus", "Carpet", "", 1);
        addCardTresure("bonus", "Cup", "", 3);
        addCardTresure("bonus", "Header", "", 2);
        addCardTresure("bonus", "Headphones", "", 1);
        addCardTresure("bonus", "Keyboard", "", 2);
        addCardTresure("bonus", "Mercenary", "", 4);
        addCardTresure("bonus", "Mouse", "", 1);
    }

    static void addCardDoor(string type, string name, string effect, int bonus, int level, int level_up)
    {

        SqliteConnection connection = new SqliteConnection("Data Source=" + databaseName);
        SqliteCommand command = new SqliteCommand(string.Format("" +
            "INSERT INTO card_door (type, name, logo, effect, shirt, bonus, level, level_up) " +
            "VALUES ('{0}', '{1}', '{2}', '{3}', '{4}', {5}, {6}, {7})",
            type, name, sprites_door + name, effect, sprites_door + "Door_Shirt", bonus, level, level_up),
            connection);

        connection.Open();
        command.ExecuteNonQuery();
        connection.Close();
    }

    static void addCardTresure(string type, string name, string effect, int bonus)
    {
        SqliteConnection connection = new SqliteConnection("Data Source=" + databaseName);
        SqliteCommand command = new SqliteCommand(string.Format("" +
            "INSERT INTO card_treasure (type, name, logo, effect, shirt, bonus) " +
            "VALUES ('{0}', '{1}', '{2}', '{3}', '{4}', {5})",
            type, name, sprites_treasure + name, effect, sprites_treasure + "Treasure_Shirt", bonus),
            connection);

        connection.Open();
        command.ExecuteNonQuery();
        connection.Close();
    }

    public List<Card_door_monster> getDoor(string type)
    {
        List<Card_door_monster> list = new List<Card_door_monster>();

        SqliteConnection connection = new SqliteConnection("Data Source=" + databaseName);
        SqliteCommand command = new SqliteCommand("SELECT * FROM card_door WHERE type='" + type + "'", connection);

        connection.Open();
        SqliteDataReader reader = command.ExecuteReader();

        foreach (DbDataRecord record in reader)
        {
            list.Add(new Card_door_monster(record["name"].ToString(), record["logo"].ToString(), Convert.ToInt32(record["level"]), Convert.ToInt32(record["level_up"]), record["shirt"].ToString()));
        }


        connection.Close();

        return list;
    }

    public List<Card_treasure_bonus> getTreasure(string type)
    {
        List<Card_treasure_bonus> list = new List<Card_treasure_bonus>();

        SqliteConnection connection = new SqliteConnection("Data Source=" + databaseName);
        SqliteCommand command = new SqliteCommand("SELECT * FROM card_treasure WHERE type='" + type + "'", connection);

        connection.Open();
        SqliteDataReader reader = command.ExecuteReader();

        foreach (DbDataRecord record in reader)
        {
            list.Add(new Card_treasure_bonus(record["name"].ToString(), record["logo"].ToString(), Convert.ToInt32(record["bonus"]), record["shirt"].ToString()));
        }

        connection.Close();

        return list;
    }
}