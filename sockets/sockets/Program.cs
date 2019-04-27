﻿using System;
using System.IO;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Net;
using System.Net.Sockets;
using System.Threading;

namespace sockets
{
    class Program
    {
        static int port = 2060;
        static int list = 10;

        static void Main(string[] args)
        {
            Server server = new Server();
            server.start();
            //Client("message", "10.131.57.248", port);
            //string mess = CreateMessage("aaa", 123, "asd");
            Client client = new Client();
            client.start();
        }

        static string CreateMessage(string type, params object[] args)
        {
            string tmp = type;
            foreach (object el in args)
            {
                tmp += " " + el.ToString();
            }

            return tmp;
        }

        static string[] getArrayToMessage(string message)
        {
            return message.Split(' ');
        }

        static void add_user(string ip, string name)
        {
            //TODO: add user to game
        }

        static string gethost()
        {
            string host = Dns.GetHostName();
            return Dns.GetHostByName(host).AddressList[0].ToString();
        }
    }
}