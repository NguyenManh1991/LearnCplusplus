using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Collections;
using System.ComponentModel;

namespace ConsoleApp6
{
    internal class Program
    {
        static void Main(string[] args)
        {
            //    int A = 10;
            //    int    B = 3;
            //    Console.WriteLine((float)A/B);
            //    Math.Abs(A - B);// HÀm trị tuyệt đối
            //    Math.Sqrt(A - B);// HÀm căn bậc 2
            //int[] arr=new int[10];// Khai bao 1 tap hop 10 so nguyen phair co toan tu new 
            //List<int> arr1=new List<int>();// Khai bao 1 danh sach co the mo rong
            //arr1.Add(3);// them 1 phan tu vao list
            //arr1.Add(4);
            //arr1.Remove(3);// Xoa 1 phan tu theo gia tri khoi list
            //arr1.RemoveAt(0);// Xoa 1 phan tu theo chi so
            //Console.WriteLine(arr1[0]);
            //int[,] arr2=new int[2,3];// Khai bao mang 2 chieu
            //List<List<int>> arr3 = new List<List<int>>();// Khai bao mang 2 chieu kieu list
            //Stack<int> stack1=new Stack<int>();// Khai bao stack trong C#
            //stack1.Push(4);// Them 1 phan tu vao stack
            //stack1.Push(5);
            //stack1.Pop();//  lay phan tu ra khoi stack
            //Queue<int> stack2=new Queue<int>();// KHi bao 1 hang doi trong C#
            //stack2.Enqueue(5);
            //stack2.Enqueue(6);// Them 1 phan tu vao hang doi
            //stack2.Dequeue();// Lay 1 phan tu ra khoi hang doi
            //// CAU TRUC VONG LAP TRONG C#
            //string[] arrSoNguyen = new string[5];
            //for(int i = 0; i < 5; i++)
            //{

            //    Console.ReadLine();
            //    //Console.Write(arrSoNguyen[i]);
            // Kiem tra tam giac

            //int[] arr=new int[3];

            //for(int i = 0;i<3;i++)
            //{
            //    Console.Write("Nhap vao chieu dai canh "+i+" ");
            //    arr[i] = int.Parse(Console.ReadLine());
            //}
            //int sum1 = arr[0] + arr[1];
            //int sum2 = arr[1] + arr[2];
            //int sum3= arr[2] + arr[0];
            //if (sum1 > arr[2] && sum2 > arr[0] && sum3 > arr[1])
            //{
            //    Console.WriteLine("Day la 3 canh cua tam giac");
            //}
            //else Console.WriteLine("Day khong phai 3 canh cua tam giac");
            // Kiem tra 3 canh tam giac cach 2

            //int[]  arr=new int[3];

            //for(int i = 0; i < arr.Length; i++)
            //{
            //    Console.WriteLine("Moi nhap chieu dai canh thu"+i+" ");
            //    arr[i] = int.Parse(Console.ReadLine());
            //}

            //bool kiemTra = true;
            //for(int i = 0;i < arr.Length;i++)
            //{
            //    int sum = 0;
            //    for(int j = 0; j < arr.Length; j++)
            //    {
            //        if (i != j)
            //            sum += arr[j];
            //    }
            //    if (sum <= arr[i])
            //    {
            //        kiemTra = false;
            //    }
            //}
            //if( kiemTra ) { Console.WriteLine("LA Tam Giac"); }
            //else
            //{
            //    Console.WriteLine("KHong Phai Tam Giac");
            //}

            // Cau truc lap khong biet truoc(Vong lap while)

            //int A=0;
            //while (A<10)
            //{
            //    Console.WriteLine("lap nua di nao");

            //    A++;
            //}
            // bai tap day so fibonaci

            int fiBonaci;
            Console.Write("Xin moi nhap vao so can xem: ");
            fiBonaci = int.Parse(Console.ReadLine());
            int z = 0;
            for (int i = 1; i <= fiBonaci; i++)
            {

                for (int j =i+ 1; j <= fiBonaci; j++)
                {

                }
                

            }
            

        }
    }
}
