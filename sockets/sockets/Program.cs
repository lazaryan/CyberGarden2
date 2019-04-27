using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Net;
using System.Net.Sockets;

namespace sockets
{
    class Program
    {
        static int port = 2020;

        static void Main(string[] args)
        {
            Server();
            //Client("10.131.56.21", port);
        }

        static void Server()
        {
            Socket socket = new Socket(AddressFamily.InterNetwork, SocketType.Stream, ProtocolType.Tcp);
            Console.WriteLine("Server start...");
            socket.Bind(new IPEndPoint(IPAddress.Any, port));
            socket.Listen(10);
            socket.Accept();
            byte[] buffer = new byte[1024];
            socket.Receive(buffer);
            Console.WriteLine(Encoding.ASCII.GetString(buffer));
        }

        static void Client(string ip, int port)
        {
            Socket socket = new Socket(AddressFamily.InterNetwork, SocketType.Stream, ProtocolType.Tcp);
            Console.WriteLine("Enter message:");
            socket.Connect(ip, port);
            string message = Console.ReadLine();

            byte[] buffer = Encoding.ASCII.GetBytes(message);

            socket.Send(buffer);
        }
    }
}
