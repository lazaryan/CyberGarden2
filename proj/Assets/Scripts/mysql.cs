using System.Collections;
using System.Collections.Generic;
using System.Data.OleDb;
using System.Data;
using UnityEngine;
using System.IO;



public class mysql : MonoBehaviour {
    public void sql()
    {
        OleDbConnection connect = new OleDbConnection("Provider=Microsoft.ACE.OLEDB.12.0;Data source =Database.mdb;Persist Security Info = False");
        connect.Open();
        //set up connection string

        OleDbCommand command = new OleDbCommand("select * from card_door ", connect);
        OleDbDataReader reader = command.ExecuteReader();

        while (reader.Read())
        {
            using (StreamWriter sw = new StreamWriter("command.txt"))
            {
                sw.WriteLine(reader[0].ToString());
            }
        }
    }
}
