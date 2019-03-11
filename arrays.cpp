#include <math.h>
#include <iostream>

using namespace std; 

// 46
void invertirDatos(){
    int cant;
    cout<<"Lea un array e invierta las posiciones de sus datos."<<endl;
    cout<<"Cuantos numeros desea ingresar?"; cin>> cant;
    float numbers[cant];
    for(size_t i = 0; i < cant; i++)
    {
        cout<<"Ingrese el numero "<<(i + 1); cin>> numbers[i];
    }

    cout<<"Datos invertidos"<<endl;
    for(size_t i = cant; i > 0; i--)
    {
        cout<<numbers[i -1]<<" - ";
    }
    
}

// 48
void mediaArray(){
    int cant, suma = 0, cantPares = 0;
     cout<<"Cargar un array de n enteros y calcular la media de los que esten en posiciones pares."<<endl;
     cout<<"Cuantos numeros desea ingresar?"; cin>> cant;
    float numbers[cant];
    for(size_t i = 0; i < cant; i++)
    {
        cout<<"Ingrese el numero "<<(i + 1); cin>> numbers[i];
        if(i % 2 == 0){
            suma+= numbers[i];
            cantPares++;
        } 
    }
        cout<<"Resultado: "<<(suma / cantPares);
}

// 49
void escalar(){
    int cant, escalar;
     cout<<"Suma de un escalar y los elementos de un array"<<endl;
     cout<<"Numero escalar?: "; cin>> escalar;
     cout<<"Cuantos numeros desea ingresar a la matriz?: "; cin>> cant;
    float numbers[cant];
    for(size_t i = 0; i < cant; i++)
    {
        cout<<"Ingrese el numero "<<(i + 1); cin>> numbers[i];
    }
    cout<<"resultado:"<<endl;

    for(size_t i = 0; i < cant; i++)
    {
        cout<<(numbers[i] * escalar)<<" - ";
    }
}

// 50
void buscarArray(){
    int cant;
    string wordToSearch;
     cout<<"Buscar un elemento X en un conjunto de elementos de un array"<<endl;
     cout<<"Cuantos palabras desea ingresar?"; cin>> cant;
    string words[cant];
    for(size_t i = 0; i < cant; i++)
    {
        cout<<"Ingrese la palabra #"<<(i + 1); cin>> words[i];
    }
    do
    {
        cout<<"Buscar... ('salir' para salir)"; cin>> wordToSearch;
        for(size_t i = 0; i < cant; i++)
        {
            if(words[i] == wordToSearch){
                cout<<"Palabra encontrada en posicion #"<<(i)<<"del array"<<endl;
            }
        }
    } while (wordToSearch != "salir"); 
}