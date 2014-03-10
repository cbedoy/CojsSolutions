using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace Cojs{
    class Program    {
        static void Main(string[] args){
            int n = int.Parse(Console.ReadLine());
            for (int i = 0; i < n; i++) {
                String numero = Console.ReadLine();
                char t = numero[numero.Length-1];
                if (t == '0' || t == '2' || t == '4' || t == '6' || t == '8')
                    Console.WriteLine("even");
                else
                    Console.WriteLine("odd");
            }


        }
    }
}
