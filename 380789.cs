using System;
using System.Linq;
using System.Text;

namespace EncodeMessage
{
    class Program
    {
        static void Main(string[] args)
        {
            int n = int.Parse(Console.ReadLine());
            for (int i = 0; i < n; i++) {
                string cad = Console.ReadLine();
                int tam = (int)Math.Sqrt(cad.Length);
                string salida="";
                for (int j = tam-1; j >=0; j--) {
                    for (int k=j; k <cad.Length; k+=tam) {
                        salida += cad[k];
                    }
                }
                Console.WriteLine(salida);
            }
        }
    }
}