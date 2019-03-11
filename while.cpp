#include <math.h>
#include <iostream>

using namespace std; 

// 33
int identifyLength(){
    string n;
    cout<<"Determine cuantos digitos tiene un numero entero ingresado por teclado."<<endl;
    cout<<"Ingrese un numero entero: "; cin>> n;

    int i = 0, counter = 0;

    // Mientras se pueda leer un digito
    while(n[i]){
        counter++; 
        i++;
    }

    cout<<"Cantidad De digitos: "<<counter<<endl;
    return 0;
    
}

// 34
int DigitoMayor(){
    string n;
    cout<<"Lea un entero y diga cual es su digito mayor."<<endl;
    cout<<"Ingrese un numero entero: "; cin>> n;

    int i = 0, mayor = 0;

    // Mientras se pueda leer un digito
    while(n[i]){
        cout<<"Mayor antes de: "<<mayor<<endl;
        string l = "";
        // guardamos el digito en una variable temporal para convertirlo a numerico
        l += n[i];
        
        mayor = (stoi(l) > mayor) ? stoi(l) : mayor; 
        cout<<"i: "<<l<<endl;
        cout<<"Mayor: "<<mayor<<endl;
        i++;
    }

    cout<<"Digito Mayor: "<<mayor<<endl;
    return 0;
    
}

// 35
int calcularCuadrado(){
    int n, cuadrado = 0;
    cout<<"Se sabe que n2= 1+3+5+7+2n-1. Se pide leer un numero y calcular su cuadrado haciendo uso de esta relacion."<<endl;
    cout<<"Ingrese un numero entero: "; cin>> n;
    

    // n2= 1+3+5+7+2n-1
    int i = 1;
    while(i <= (2 * n) -1){
        cuadrado += i; 
        i+=2;
    }

    cout<<"Cuadrado: "<<cuadrado<<endl;
    return cuadrado;
    
}
