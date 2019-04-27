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
        static void Main(string[] args)
        {
            Server();
            //try
            //{
            //    SendMessageFromSocket(11000);
            //}
            //catch (Exception ex)
            //{
            //    Console.WriteLine(ex.ToString());
            //}
            //finally
            //{
            //    Console.ReadLine();
            //}
        }

        static void Server()
        {
            Console.WriteLine("Server start!!!!!");
            string[] words;

            IPHostEntry ipHost = Dns.GetHostEntry("localhost");
            IPAddress ipAddr = ipHost.AddressList[0];
            IPEndPoint ipEndPoint = new IPEndPoint(ipAddr, 11000);

            Socket myServerSocket = new Socket(ipAddr.AddressFamily, SocketType.Stream, ProtocolType.Tcp);

            try
            {
                myServerSocket.Bind(ipEndPoint);
                myServerSocket.Listen(20);

                while (true)
                {
                    Socket handler = myServerSocket.Accept();
                    string command = null;

                    byte[] bytes = new byte[1024];
                    int received = handler.Receive(bytes);

                    command += Encoding.UTF8.GetString(bytes, 0, received);

                    if (command != "nope")
                    {

                        words = null;
                        words = command.Split(new char[] { ' ' }, StringSplitOptions.RemoveEmptyEntries);

                        switch (words[0])
                        {
                            case "web":
                                System.Diagnostics.Process.Start(words[1]);
                                break;
                        }

                    }



                    string reply = "Die Kommand" + command + "wird ausgefuehrt";
                    byte[] msg = Encoding.UTF8.GetBytes(reply);
                    handler.Send(msg);
                }
            }
            catch (Exception ex)
            {
                Console.WriteLine(ex);
                Console.Read();
            }
        }

        static void SendMessageFromSocket(int port)
        {
            // Буфер для входящих данных
            byte[] bytes = new byte[1024];

            // Соединяемся с удаленным устройством

            // Устанавливаем удаленную точку для сокета
            IPHostEntry ipHost = Dns.GetHostEntry("localhost");
            IPAddress ipAddr = ipHost.AddressList[0];
            IPEndPoint ipEndPoint = new IPEndPoint(ipAddr, port);

            Socket sender = new Socket(ipAddr.AddressFamily, SocketType.Stream, ProtocolType.Tcp);

            // Соединяем сокет с удаленной точкой
            sender.Connect(ipEndPoint);

            Console.Write("Введите сообщение: ");
            string message = Console.ReadLine();

            Console.WriteLine("Сокет соединяется с {0} ", sender.RemoteEndPoint.ToString());
            byte[] msg = Encoding.UTF8.GetBytes(message);

            // Отправляем данные через сокет
            int bytesSent = sender.Send(msg);

            // Получаем ответ от сервера
            int bytesRec = sender.Receive(bytes);

            Console.WriteLine("\nОтвет от сервера: {0}\n\n", Encoding.UTF8.GetString(bytes, 0, bytesRec));

            // Используем рекурсию для неоднократного вызова SendMessageFromSocket()
            if (message.IndexOf("<TheEnd>") == -1)
                SendMessageFromSocket(port);

            // Освобождаем сокет
            sender.Shutdown(SocketShutdown.Both);
            sender.Close();
        }
    }
}
