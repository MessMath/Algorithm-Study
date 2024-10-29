 using System;
using System.Numerics;

class Program 
 {
    public static void Main(string[] args) 
    {
        int n = int.Parse(Console.ReadLine()!);
        List<int> numbers = new List<int>();
        string numString = Console.ReadLine()!;
        
        int i = 0;
        foreach(string num in numString.Split(" "))
        {
            numbers.Add(int.Parse(num));
        }
        int x = int.Parse(Console.ReadLine()!);

        numbers.Sort();

        int s = 0, e = n-1;
        int result = 0;
        while(s < e)
        {
            if(numbers[s] + numbers[e] > x) 
            {
                e--;
            }
            else if(numbers[s] + numbers[e] < x) 
            {
                s++;
            }
            else 
            {
                result++;
                s++;
            }
        }
        
        Console.WriteLine(result);
    }
}