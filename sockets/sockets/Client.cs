using System;
using System.IO;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Net;
using System.Net.Sockets;
using System.Runtime.Serialization.Json;
using System.Runtime.Serialization;

namespace sockets
{
    class Client
    {
        static int port = 2060;
        static int list = 10;

        static string ip_learner = "10.131.57.101";

        public void start()
        {
            string message = CreateMessage("action", gethost());
            SendMessage(ip_learner, message);
        }

        public void SendMessage(string ip, string message)
        {
            Socket socket = new Socket(AddressFamily.InterNetwork, SocketType.Stream, ProtocolType.Tcp);
            socket.Connect(ip, port);

            byte[] buffer = Encoding.ASCII.GetBytes(message);

            socket.Send(buffer);
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

        static string gethost()
        {
            string host = Dns.GetHostName();
            return Dns.GetHostByName(host).AddressList[0].ToString();
        }
    }
}


