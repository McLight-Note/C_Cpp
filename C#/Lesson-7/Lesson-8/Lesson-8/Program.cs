using System;

class Program
{
    static void Main()
    {
        Console.Write("Enter first number: ");
        int a = int.Parse(Console.ReadLine());

        Console.Write("Enter second number: ");
        int b = int.Parse(Console.ReadLine());

        bool result = (a == 20 || b == 20 || (a + b == 20));

        Console.WriteLine("Result: " + result);
    }
}