using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading.Tasks;


namespace ConsoleApp4
{
    internal class Program
    {
        static void Main(string[] args)
        {
            //int Ns;
            //int Tuoi;
            //string namSinh;
            //Console.Write("xin moi nhap vao nam sinh cua ban: ");
            //namSinh = Console.ReadLine();
            //Ns=int.Parse(namSinh);
            //Tuoi = 2023 - Ns;
            //Console.WriteLine("So tuoi cua ban la: " +Tuoi );
            //if (Tuoi < 16)
            //{
            //    Console.WriteLine("Em con be lam:");
            //}
            //else if(Tuoi >= 16 && Tuoi < 18)
            //{
            //    Console.WriteLine("Tuoi nay moi het cap 3");
            //}
            //else Console.WriteLine("Da qua tuoi lay vo: ");

            int year;
            string strYear;
            Console.Write("Xin moi nhap nam can kiem tra: ");
            strYear = Console.ReadLine();   
            year=int.Parse(strYear);
            string can = "", chi = "";
            switch (year%10) {
                case 0:
                    can = "canh";
                    break;
                case 1:
                    can = "tan";
                    break;  
                case 2:
                    can = "nham";
                    break;
                case 3:
                    can = "quy";
                    break;
                case 4:
                    can = "giap";
                    break;
                case 5:
                    can = "at";
                    break;
                case 6:
                    can = "binh";
                    break;
                case 7:
                    can = "dinh";
                    break;
                case 8:
                    can = "mau";
                    break;
                case 9:
                    can = "ky";
                    break;
            }
            switch (year%12) {
                case 0:
                    chi = "than";
                    break;
                case 1:
                    chi = "dau";
                    break;
                case 2:
                    chi = "tuat";
                    break;
                case 3:
                    chi = "hoi";
                    break;
                case 4:
                    chi = "ty";
                    break;
                case 5:
                    chi = "suu";
                    break;
                case 6:
                    chi = "dan";
                    break;
                case 7:
                    chi = "mao";
                    break;
                case 8:
                    chi = "thin";
                    break;
                case 9:
                    chi = "ty";
                    break;
                case 10:
                    chi = "ngo";
                    break;
                case 11:
                    chi = "mui";
                    break;
            }
           Console.WriteLine("Nam {0} la nam: '{1} {2}' am lich!", year,can,chi);
            Console.ReadLine();
        }
    }
}
