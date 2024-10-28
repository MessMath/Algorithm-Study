 using System;
 
 class Program 
 {
    public static void Main(string[] args) 
    {
        int[] input = new int[3];
        int tmp = 1;
        int[] result = new int[10];

        for(int i = 0; i < 3; i++)
        {
            input[i] = int.Parse(Console.ReadLine()!);
            tmp *= input[i];
        }

        while(tmp > 0)
        {
            result[tmp % 10]++;
            tmp /= 10;
        }

        foreach(int cnt in result)
        {
            Console.WriteLine(cnt);
        }
    }
}