 using System;
 
 class Program 
 {
    public static void Main(string[] args) 
    {
        int input = int.Parse(Console.ReadLine()!);
        int[] cnt = new int[10];

        while(input > 0)
        {
            if(input%10 == 6 || input%10 == 9)
            {
                cnt[9]++;
            }
            else
            {
                cnt[input % 10]++;
            }
            input /= 10;
        }

        int max = cnt[9]/2 + cnt[9]%2;
        for(int i = 0; i < 9; i++)
        {
            if(max < cnt[i])
            {
                max = cnt[i];
            }
        }

        Console.WriteLine(max);
    }
}