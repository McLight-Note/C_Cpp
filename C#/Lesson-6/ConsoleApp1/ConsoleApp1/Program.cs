using System;

class Program
{
    static void Main()
    {
        int[] nums = { 5, 6, 7, 8, 5, 6, 6, 9, 10 };

        Console.WriteLine("Sum of numbers (excluding 5 followed by 6): " + SumExcept56(nums));
    }
    
    static int SumExcept56(int[] nums)
    {
        if (nums == null || nums.Length == 0)
            return 0;

        int sum = 0;
        bool skip = false;

        for (int i = 0; i < nums.Length; i++)
        {
            if (skip)
            {
                if (nums[i] == 6)
                    continue;
                else
                    skip = false;
            }

            if (nums[i] == 5)
            {
                skip = true;
                continue;
            }

            sum += nums[i];
        }

        return sum;
    }
}