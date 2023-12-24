using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp7
{
    internal class Program
    {
        static void Main(string[] args)
        {
            List<int> fiBoNaCci = new List<int>() { 1,1};
            Console.Write("Nhap vao mot so nguyen: ");
            int num=int.Parse(Console.ReadLine());
            for(int i=1;i<=num;i++)
            {
                int tmp = fiBoNaCci[i] + fiBoNaCci[i-1];
                fiBoNaCci.Add(tmp);
            }
            Console.WriteLine(fiBoNaCci[num-1]);
            for(int i=0;i<num; i++)
            {
                Console.Write(fiBoNaCci[i] );
            }
        }

    }
}
