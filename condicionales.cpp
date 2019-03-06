#include <math.h>
#include <iostream>

using namespace std; 

// 16
string parOimpar(){
    int n;
    cout<<"Determina si un numero es par o impar"<<endl;
    cout<<"Ingrese un numero Entero: "; cin>> n;
    string res = (n % 2 == 0) ? "Par" : "Impar";

    cout<<"el numero es "<<res;
    return res;
}

// 17
int valorAbsoluto(){
    int n;
    cout<<"Determinar valor absoluto de un número."<<endl;
    cout<<"Ingrese un numero Entero: "; cin>> n;
    int res = (n < 0) ? n * -1 : n;

    cout<<"Resultado: "<<res;
    return res;
}

// 18
int ProductoSuma(){
    int n1, n2;
    cout<<"Si dos números son positivos calcule su producto, en caso contrario calcule su suma."<<endl;
    cout<<"Numero 1: "; cin>> n1;
    cout<<"Numero 2: "; cin>> n2;
    int res = (n1 > 0 && n2 > 0 ) ? n1 * n2 : n1 + n2;

    cout<<"Resultado: "<<res;
    return res;
}

// 19
int MenorNumero(){
    int n1, n2, n3, n4, n5, menor;
    cout<<"Sin usar estructuras repetitivas, lea 5 números y determine el menor."<<endl;
    cout<<"Numero 1: "; cin>> n1;
    cout<<"Numero 2: "; cin>> n2;
    cout<<"Numero 3: "; cin>> n3;
    cout<<"Numero 4: "; cin>> n4;
    cout<<"Numero 5: "; cin>> n5;

    menor = n1;
    menor =  ( n2 < menor) ? n2: menor;
    menor =  ( n3 < menor) ? n3: menor;
    menor =  ( n4 < menor) ? n4: menor;
    menor =  ( n5 < menor) ? n5: menor; 
   

    cout<<"Resultado: "<<menor;
    return menor;
}

// 20
string areAscendent(){
    int n1, n2, n3, n4, n5;
    string asc;
    cout<<"Lea 5 números y diga si están ordenados ascendentemente."<<endl;
    cout<<"Numero 1: "; cin>> n1;
    cout<<"Numero 2: "; cin>> n2;
    cout<<"Numero 3: "; cin>> n3;
    cout<<"Numero 4: "; cin>> n4;
    cout<<"Numero 5: "; cin>> n5;
 
    asc =  (n1 <= n2 && n2 <= n3 && n3 <= n4 && n4 <= n5) ? "VERDADERO": "FALSO";
   

    cout<<"Resultado: "<<asc;
    return asc;
}

// 21
void ordenaNumeros(){
    int a, b, c, aux; 
    cout<<"Ordene 3 números a, b y c de tal manera que al final a, sea siempre el mayor, b sea el intermedio y c el menor."<<endl;
    cout<<"Numero A: "; cin>> a;
    cout<<"Numero B: "; cin>> b;
    cout<<"Numero C: "; cin>> c; 
 
    if(b > a ){
        aux = a;
        a = b;
        b = aux;
    }
    if(c > a){
        aux = a;
        a = c;
        c = aux;
    }
    if(c > b){
        aux = b;
        b = c;
        c = aux;
    }
   

    cout<<"\nDespues de ordenar: "<<endl;
    cout<<"Numero A: "<<a<<endl;
    cout<<"Numero B: "<<b<<endl;
    cout<<"Numero C: "<<c<<endl; 
}

// 22
string esMultiplo(){
    int n, m;
    string esMultiplo;
    cout<<"Diga si un número n es múltiplo de m."<<endl;
    cout<<"Numero entero N: "; cin>> n;
    cout<<"Numero entero M: "; cin>> m; 
 
    esMultiplo = (n % m == 0) ? "Es multiplo" : "No es multiplo";
   

    cout<<"Resultado: "<<esMultiplo;
    return esMultiplo;
}

// 23
string numeroIntermedio(){
    int n1, n2, n3, aux;
    string asc;
    cout<<"Lea 3 números diferentes e indique cual es el valor intermedio."<<endl;
    cout<<"Numero 1: "; cin>> n1;
    cout<<"Numero 2: "; cin>> n2;
    cout<<"Numero 3: "; cin>> n3;
 

    //  Ordemanos los numeros y tomamos n2 como numero intermedio
    //Este algoritmo es el del ejercicio #21
      if(n2 > n1){
        aux = n1;
        n1= n2 ;
        n2 = aux;
    }
    if(n3> n1){
        aux = n1;
        n1= n3;
        n3 = aux;
    }
    if(n3 > n2){
        aux = n2;
        n2 = n3;
        n3 = aux;
    }
   
    //    n2 = numero intermedio

    cout<<"Resultado: "<<n2;
    return asc;
}

// 26
// Este ejercicio parece que va en los secuenciales
float promedioNotas(){
    float T, M, F, calif;
    string asc;
    cout<<"En una universidad tienen como política considerar 3 notas en cada curso.\n la nota de trabajos T,\nla nota de medio ciclo M\nla de fin de ciclo F \ncada una tiene un peso de 50 porciento, 20 porciento y 30 porciento respectivamente."<<endl;
    cout<<"nota T "; cin>> T;
    cout<<"nota M: "; cin>> M;
    cout<<"nota F: "; cin>> F;
 
    //  FORMULA
    calif = (T * .5) + (M * .2) + (F * .3);

    cout<<"Promedio de evaluacion: "<<calif;
    return calif;
}