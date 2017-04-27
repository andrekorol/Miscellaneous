using System;

namespace HelloWorld
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("\nWhat is your name?");
            var name = Console.ReadLine();
            var date = DateTime.Now;
            Console.WriteLine("\nHello, {0}, on {1:d} at {1:t}", name, date);
            Console.Write("\nPress any key to exit...");
            Console.ReadKey(true);
            
        }
    }
}