using System;
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

        static void Main(string[] args)
        {
            Server();
            Client("message", "10.131.57.248", port);
            string mess = CreateMessage("aaa", 123, "asd");
            //string[] aa = getArrayToMessage(mess);
            //Console.WriteLine(aa[1]);
            //Console.WriteLine(mess);
            //Console.ReadKey();
        }

        static void Server()
        {
            Socket socket = new Socket(AddressFamily.InterNetwork, SocketType.Stream, ProtocolType.Tcp);
            Console.WriteLine("Server start...");
            socket.Bind(new IPEndPoint(IPAddress.Parse("10.131.57.101"), port));
            socket.Listen(200);

            socket.Accept();

            byte[] buffer2 = new byte[1024];

            socket.Receive(buffer2);

            while (true)
            {
                byte[] buffer = new byte[1024];
       
                int receive = socket.Receive(buffer);
                string message = Encoding.ASCII.GetString(buffer, 0, receive);

                //string[] arrayMessage = getArrayToMessage(message);

                //if (arrayMessage[0] == "add_user")
                //{
                //    add_user(arrayMessage[1], arrayMessage[2]);
                //}
                if (message != "finish")
                {
                    using (StreamWriter sw = new StreamWriter("tmp/command.txt"))
                    {
                        sw.WriteLine(message);
                    }
                } else
                {
                    Console.WriteLine("aaaa finish!!!!!!!!!!");
                }
            }
        }

        static void Client(string message, string ip, int port)
        {
            Socket socket = new Socket(AddressFamily.InterNetwork, SocketType.Stream, ProtocolType.Tcp);
            socket.Connect(ip, port);
            string a = Console.ReadLine();

            byte[] buffer = Encoding.ASCII.GetBytes(a);

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

        static string[] getArrayToMessage(string message)
        {
            return message.Split(' ');
        }

        static void add_user(string ip, string name)
        {
            //TODO: add user to game
        }
    }
}
