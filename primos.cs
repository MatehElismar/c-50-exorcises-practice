/*
DEMANA CREATIVIDAD DE LO ALTO!!
 * Hora: 20:59
 PROBLEMA:
4- Determine cuantos números primos hay en los primeros N números enteros positivos,
 */
using System;

namespace Practica_29__Cantidad_De_Numeros_Primos_
{
	class Ope
	{
		public void Calc(int cant)
		{
			int primos = 0, x;
			for (int numero = 2; numero <= cant; numero++) {//Este bucle aumente cada numero hasta el n indicado por el cliente
				bool EsPrimo = true;
				if (numero == 2)
				{
					primos++; continue;
				}
				else if (numero != 2 ) {
					if (numero%2 == 0) continue;//No es Primo
					x = (int) Math.Sqrt(numero);
					//Aninado
					for (int i = 2; i <=x; i++)//Este bucle comprueba si un numero es primo o no
					{
						if (numero % i == 0)
						{
							EsPrimo = false;
							break;
						}
					}
				}
				if (EsPrimo) 	primos++;
			}
			Console.WriteLine("\tPrimos:  "+primos);
			
		}
	}
	class Program
	{
		public static void Main(string[] args)
		{
			int fin = 0;
			
			
			do {
				try
				{
					Ope primos = new Ope();
					Console.Write("Ingrese el fin del rango (0 para terminar): ");
					fin = int.Parse(Console.ReadLine());
					if (fin != 0)
						primos.Calc(fin);
					
				} catch (Exception x) {
					Console.WriteLine("Error: "+ x.Message);
				}
				
				Console.Write("\nPress any key to continue . . . ");
				Console.ReadKey(true);
				Console.Clear();
			}while (fin != 0);
			
			
			
		}
	}
}