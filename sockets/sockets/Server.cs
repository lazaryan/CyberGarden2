using System;
using System.IO;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Net;
using System.Net.Sockets;

namespace sockets
{
    class Server
    {
        static int port = 2060;
        static int list = 10;

        static string file_action = "./action.txt";

        public void start()
        {
            (new System.Threading.Thread(delegate () {
                start();
            })).Start();
        }

        static void server(Func<string, int> method)
        {
            Console.WriteLine("Start server...");
            IPEndPoint ipPoint = new IPEndPoint(IPAddress.Parse(gethost()), port);

            Socket listenSocket = new Socket(AddressFamily.InterNetwork, SocketType.Stream, ProtocolType.Tcp);

            try
            {
                listenSocket.Bind(ipPoint);
                listenSocket.Listen(list);

                while (true)
                {
                    Socket handler = listenSocket.Accept();

                    StringBuilder builder = new StringBuilder();
                    int bytes = 0;
                    byte[] data = new byte[1024];

                    bytes = handler.Receive(data);

                    string message = Encoding.ASCII.GetString(data, 0, bytes);

                    method(message);
                }
            }
            catch (Exception ex)
            {
                Console.WriteLine(ex.Message);
            }
        }

        static string gethost()
        {
            string host = Dns.GetHostName();
            return Dns.GetHostByName(host).AddressList[0].ToString();
        }

        static void action(string message)
        {
            string[] list = getArrayToMessage(message);

            if (list[0] == "action")
            {
                string ip = list[1];
                int position_user = add_user(ip);

                Client client = new Client();
                client.SendMessage(ip, position_user.ToString());

                send_all(string.Format("add_user {0}", position_user));
            }
        }

        static string[] getArrayToMessage(string message)
        {
            return message.Split(' ');
        }

        static int add_user(string ip)
        {
            int count = File.ReadAllLines("file.txt").Length;
            using (StreamWriter w = new StreamWriter(file_action, false, Encoding.GetEncoding(1251)))
            {
                w.Write(count.ToString() + " " + ip);
            }

            return count;
        }

        static void send_all(string message)
        {
            Client client = new Client();
            string[] lines = File.ReadAllLines(file_action);

            foreach (string line in lines)
            {
                string ip = message.Split(' ')[1];
                client.SendMessage(ip, message);
            }
        }
    }
}
