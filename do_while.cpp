#include <math.h>
#include <iostream>

using namespace std; 

// 36
void universidad(){
    cout<<"En una universidad se pueden llevar hasta 22 créditos en un ciclo.\n\tEscriba un programa que permita a un alumno matricularse, sin pasarse del límite de créditos permitido."<<endl;
   
    int select;
    int creditos = 0;
    string asignaturas[] = { 
        "\t1. Investigacion (2 Creditos)",
        "\t2. Desarrollo Web (3 Creditos)",
        "\t3. Tecnicas de redaccion (3 Creditos)",
        "\t4. Compiladores (4 Creditos)",
        "\t5. Programacion 1 (4 Creditos)",
        "\t6. Programacion 2 (4 Creditos)",
        "\t7. Arquitectura (4 Creditos)",
        "\t8. Vocacional (5 Creditos)",
        "\t0. Culminar Seleccion"
    };

   do
   {
        cout<<"Oferta Academica"<<endl;
        for(size_t i = 0; i < sizeof(asignaturas)/sizeof(asignaturas[0]); i++)
        {
            cout<<asignaturas[i]<<endl;
        }
        cout<<"\nCreditos Seleccionados: "<<creditos<<endl; 
        cin>> select; 
        switch (select)
        {
            case 1: creditos+= 2; break;
            case 2: 
            case 3: creditos+= 3; break;
            case 4: 
            case 5: 
            case 6: 
            case 7: creditos+= 4; break;
            case 8: creditos+= 5; break;
        
            default:
                break;
        }
   } while (select != 0);

   if(creditos <= 20){
       cout<<"Preseleccion Exitosa; pase por caja para ROBARNOS SU DINERO"<<endl;
   }
   else{
       cout<<"Ha sobrepasado el limite de creditos permitidos; planifique bien su seleccion e intente de nuevo";
   }
   
   
}

// 37
// Este ejercicio esta en la seccion de bubles pero se puede 
//resolver con una simple formulita
void panaderia(){
    cout<<"Una vendedora de pan tiene n unidades de pan al comenzar el día. Si cada cliente le pide m panes, ¿Cuántos clientes son atendidos completamente? ¿Cuántos panes quedan para el último cliente?"<<endl;

    int panes, clientes, atendidos, sobrantes;
    cout<<"Cantidad de panes: "; cin>> panes;
    cout<<"Cantidad de peticiones por clientes: "; cin>> clientes;
 
    atendidos = panes/clientes;
    sobrantes = panes % clientes; 

    cout.precision(1);
    cout<<"¿Cuántos clientes son atendidos completamente? : "<<atendidos<<endl;
    cout<<"¿Cuántos panes quedan para el último cliente? : "<<sobrantes<<endl;
}

// 38
void cajero(){
    cout<<"Un cliente de un banco realiza sucesivos retiros desde un cajero, si posee 1000 al inicio de las operaciones, escriba un programa que le permita retirar dinero mientras tenga fondos."<<endl;
    
    float disponible = 1000, retirar = 0;
    do
    {
        cout<<"Dinero Disponible: "<<disponible<<endl;
        cout<<"Ingrese Monto a retirar: (0 = salir) "; cin>> retirar;
        if(disponible > retirar){
            disponible-= retirar;
            cout<<"Exitoso\n";
        } 
        else{
            cout<<"No tiene suficiente balance para retirar esta cantidad"<<endl;
        }

        /* code */
    } while (retirar != 0);
    
}

// 39
void sofoke(){
    cout<<"A una fiesta ingresan personas de diferentes edades, no se permite el ingreso de menores de edad. Mostrar  la edad menor, la mayor, y el promedio de edades. El ingreso debe terminar cuando la edad ingresada sea cero."<<endl;

    int edad = 0, mayor = 0, menor = 0, suma= 0, cant = 0;
    do
    {
        cout<<"Ingrese una edad: "; cin>>edad;
        string acceso;
        if(edad >= 18){
            acceso = "Puede entrar";
            suma+=edad;
            cant++;
            if(edad > mayor) mayor = edad;
            if(edad < menor) menor = edad;
        } else{
             acceso =  "No access; menor de edad";
        }

        cout<<"Acceso: "<<acceso<<endl;
        cout<<"Cantidad dentro de la fiesta: "<<cant;
        cout<<"Edad mayor: "<<mayor<<endl;
        cout<<"Edad menor: "<<menor<<endl;
        cout<<"Edad promedio: "<<suma / cant<<endl;
    } while (edad != 0);
    
}