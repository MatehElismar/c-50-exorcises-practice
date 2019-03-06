#include <math.h>
#include <iostream>

using namespace std; 

// 1
float longitudCircunferencia(){
    float rad, lon; 
    cout<<"Calcular la Longitud de la circunferencia\n";
    cout<<"Ingrese el radio: "; cin>> rad;
    lon  =  (2 * 3.14 * rad);
    cout<<"La longitud de la circunferencia es : "<<lon;
    return lon;
}

// 2
float AreaTrapecio(){
    float bMayor, bMenor, altura, trap;
    cout<<"Calcular el Area del Trapecio"<<endl;
    cout<<"Base Mayor: "; cin>> bMayor;
    cout<<"Base Menor: "; cin>> bMenor;
    cout<<"Altura: "; cin>> altura;
    // Formula
    trap =  altura * (bMayor * bMenor / 2);
    // 
    cout<<"Resultado: "<< trap;
    return trap;
}

// 3
float ConvertirMillasAKm(){
    const int millas = 1609;
    float kilometros, conv;
    cout<<"Convertir millas a kilometros"<<endl;
    cout<<"Ingrese Kilometros: "; cin>> kilometros; 
    conv =  millas * kilometros;
    cout<<"Resultado: "<< conv;
    return conv;
}

// 4
float PerimetroRectangulo(){
    float ladoA, ladoB, perimetro;
    cout<<"Calcular el Perimetro del rectangulo"<<endl;
    cout<<"Lado A: "; cin>> ladoA;
    cout<<"Lado B: "; cin>> ladoB; 
    // Formula
    perimetro = 2 * (ladoA + ladoB);
    //
    cout<<"Resultado: "<< perimetro;
    return perimetro;
}

// 5
float PerimetroTrianguloRectangulo(){
    float c1, c2, perimetro;
    cout<<"Calcular el Area del Triangulo Rectangulo"<<endl;
    cout<<"Cateto 1: "; cin>> c1;
    cout<<"Cateto 2: "; cin>> c2; 
    // formula
        // ENCONTRAR LA HIPOTENUSA
        float h = sqrt(pow(c1, 2) + pow(c2, 2));
        //Encontrar el perimetro
        perimetro = c1 + c2 + h;
    // 
    cout<<"Resultado: "<< perimetro;
    return perimetro;
}

// 6
float areaParalele(){
    float largo, ancho, altura, area;
    cout<<"Cuál es el volumen de un paralelepípedo de largo, ancho y altura conocidas?"<<endl;
    cout<<"Largo: "; cin>> largo;
    cout<<"Ancho: "; cin>> ancho; 
    cout<<"Altura: "; cin>> altura; 

    // formula
        // ENCONTRAR LA HIPOTENUSA
        area = 2* (altura * ancho) + (altura * largo) + (ancho * largo);
    // 
    cout<<"Resultado: "<< area;
    return area;
}

// 7
float volumenParalele(){
    float largo, ancho, altura, area;
    cout<<"Cuál es el volumen de un paralelepípedo de largo, ancho y altura conocidas?"<<endl;
    cout<<"Largo: "; cin>> largo;
    cout<<"Ancho: "; cin>> ancho; 
    cout<<"Altura: "; cin>> altura; 

    // formula
        // ENCONTRAR LA HIPOTENUSA
        area = (altura * largo * ancho);
    // 
    cout<<"Resultado: "<< area;
    return area;
}

// 10
float sumaPares(){
    int n, suma = 0;
    cout<<"Suma de los primeros n pares"<<endl;
    cout<<"Ingrese el valor de n: "; cin>> n; 
    for(size_t i = 2; i < n; i+=2)
    {
       suma += i;
    }
    
    cout<<"Resultado: "<< suma;
    return suma;
}

// 11
float sumaNmas1(){
    // Calcule la Suma: s = 1 x 2 +2 x 3 + 3 x 4 + … +n x ( n + 1)
    int n, suma = 0;
    cout<<"Calcule la Suma: s = 1 x 2 +2 x 3 + 3 x 4 + … +n x ( n + 1)"<<endl;
    cout<<"Ingrese el valor de N: "; cin>> n;

    for(size_t i = 1; i < n; i++)
    {
        suma += i * (i + 1);
    }

    cout<<"Resultado: "<< suma;
    return suma; 
}

// 12
float sumarImpares(){
    // Calcule la Suma: s = 1 + 3 + 5 + 7 + …v + (2 n - 1). 
    int n, suma = 0;
    cout<<"Calcule la Suma: s = 1 + 3 + 5 + 7 + …v + (2 n - 1)."<<endl;
    cout<<"Ingrese el valor de N: "; cin>> n;

    for(size_t i = 1; i <= ( (2 * n) -1); i+=2)
    {
        suma += i;
    }

    cout<<"Resultado: "<< suma;
    return suma; 
}

// 13
void hour(){
    int n, suma = 0, cantPares = 0;
     cout<<"Lea una hora y diga a cuántas horas, minutos y segundos equivale."<<endl;
     cout<<"ingrese Numero N: "; cin>> n; 
    
    
    

    cout<<"Resultado: "<<(suma / n);
}

// 14
void mediaNumber(){
    int n, suma = 0, cantPares = 0;
     cout<<"Calcule la media aritmética de los n primeros números enteros positivos."<<endl;
     cout<<"ingrese Numero N: "; cin>> n; 
    for(size_t i = 0; i <= n; i++)
    { 
            suma+= i; 
    }
        cout<<"Resultado: "<<(suma / n);
}

// 15
float areaPerimetroRectangulo(){
   float base, altura, perimetro, area;
    cout<<"Calcular el Perimetro del rectangulo"<<endl;
    cout<<"base: "; cin>> base;
    cout<<"altura: "; cin>> altura; 
    // Formula
    area = base * altura;
    perimetro = 2 * (base + altura);
    //
    cout<<"Resultado Area: "<< area;
    cout<<"Resultado Perimetro: "<< perimetro;
    return area;
}

