using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp11
{
    internal class Program
    {
        static void Main(string[] args)
        {
            List<int> arr = new List<int>() { 5,4,-1,7,8 };
            int max = 0; int sum = 0;
            for (int i = 0; i < arr.Count; i++)
            {
                //max = arr[i];
                for (int j = (i + 1); j < arr.Count; j++)
                {
                    sum += arr[j];
                    if (sum > max) { max = sum; }
                }
            }
            Console.WriteLine(max);
        }
    }
}
