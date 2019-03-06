#include <math.h>
#include <iostream>
#include <windows.h> 

using namespace std; 

// 40
void pares(){
    int a, b, count = 0;
    cout<<"Muestre todos los pares entre a y b, y diga cuántos son."<<endl;
    cout<<"Numero A: "; cin>> a;
    cout<<"Numero B: "; cin>> b;
    for(size_t i = a + 1; i < b; i++)
    {
        if(i / 2 == 0){
            cout<<i<<" - ";
            count++;
        }
    }
    
    cout<<"Cantidad de numeros pares entre "<<a<<" y "<<b<<" : "<<count;
}

// 41
void primos(){ 
    cout<<"Encuentre todos los números primos de 3 dígitos."<<endl;  

    int primos = 0, x;
    for (int numero = 100; numero <= 1000; numero++) {//Este bucle aumente cada numero hasta el n indicado por el cliente
        bool EsPrimo = true;
        if (numero == 2)
        {
            primos++; continue;
        }
        else if (numero != 2 ) {
            if (numero%2 == 0) continue;//No es Primo
            x = (int) sqrt(numero);
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
        if (EsPrimo){ 
            cout<<numero<<" - ";
            primos++;
        }
    }

    cout<<endl<<"\n\tCantidad de Primos:  "<<primos<<endl; 
    
    
}

// 42
void capicua(){ 
    cout<<"Muestre todos los números capicúas o palíndromos dentro de un rango determinado. \n\tUn número es capicúa cuando al invertir sus cifras nos da el mismo número."<<endl;  

   string  stringNumber;
    int n, m, cant = 0;

    cout<<"Rango: Inicio: "; cin>> m;
    cout<<"Rango: Final: "; cin>> n;

    for(size_t a = m; a <= n; a++)
    {
        string reverseNumber = "";
        stringNumber = to_string(a); 

        for(size_t i = stringNumber.length(); i > 0; i--)
        {
             reverseNumber+= stringNumber[i - 1]; 
        }
        
        if(reverseNumber == stringNumber) {
            cout<<stringNumber<<" - ";
            cant++;
        }
    }

    cout<<endl<<"\n\tCantidad de Capicuas:  "<<cant<<endl; 
    
    
}

// 43
void leerNnumeros(){
    int mayor, menor, suma, cant;
    cout<<"Leer n números e indique el mayor, menor y el promedio."<<endl;
    cout<<"Cuantos numeros desea ingresar?"; cin>> cant;
    float numbers[cant];
    for(size_t i = 0; i < cant; i++)
    {
        cout<<"Ingrese el numero "<<(i + 1); cin>> numbers[i];
        if(numbers[i] > mayor) mayor = numbers[i];
        if(numbers[i] < menor) menor = numbers[i];
        suma+= numbers[i];
    }
    
    system("cls");
    cout<<"Cantidad de numeros ingresados: "<<cant<<endl;
    cout<<"Numero mayor: "<<mayor<<endl;
    cout<<"Numero menor: "<<menor<<endl;
    cout<<"Promedio: "<<(suma / cant)<<endl;
}

// 44
void tabladelcinco(){
    cout<<"Construya la tabla de sumar del 5."<<endl;

    for(size_t i = 0; i < 12; i++)
    {
       cout<<"5 + "<<i<<" = "<<(5 + i)<<endl;
    }
    
}

// 45
void cuarentaycinco(){
    int n;
    cout<<"Imprima el número 1, una vez; el 2, dos veces; el 3, tres veces; y así sucesivamente hasta llegar a un número n ingresado por teclado."<<endl;
    cout<<"Ingrese el numero N: "; cin>> n;
    for(size_t i = 1; i < n; i++)
    {
      for(size_t a = 1; a < i; a++)
      {
          cout<<"\t"<<i<<endl;
      }
      cout<<endl;
    }
    
}