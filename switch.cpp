#include <math.h>
#include <iostream>

using namespace std; 

// 27
char identifyVocal(){
    int n;
    char vowel;        
    cout<<"Si las vocales se representan con números del 1 al 5, lea un número y diga que vocal es."<<endl;
    cout<<"Ingrese un numero entero (1 - 5): "; cin>> n;
    switch (n)
    {
        case 1: vowel = 'A'; break;
        case 2: vowel = 'E'; break;
        case 3: vowel = 'I'; break;
        case 4: vowel = 'O'; break;
        case 5: vowel = 'U'; break;
    
        default:
            vowel = '&';
            cout<<"Numero fuera de rango"<<endl;
            break;
    }
    cout<<"Vocal seleccionada: "<<vowel<<endl;
    return vowel;
}

// 28
string identifyDayOfWeek(){
    int n;
    string day;        
    cout<<"Lea un número que represente el día de la semana y diga que día es."<<endl;
    cout<<"Ingrese un numero entero (1 - 5): "; cin>> n;
    switch (n)
    {
        case 1: day = "Domingo"; break;
        case 2: day = "Lunes"; break;
        case 3: day = "Martes"; break;
        case 4: day = "Miercoles"; break;
        case 5: day = "Jueves"; break;
        case 6: day = "Viernes"; break;
        case 7: day = "Sabado"; break; 
    
        default:
            day = "null";
            cout<<"Numero fuera de rango"<<endl;
            break;
    }
    cout<<"Dia de la semana seleccionada: "<<day<<endl;
    return day;
}

// 29
string identifyCalification(){
    char cal;
    string honor;        
    cout<<"Lea un calificativo y escriba que tipo de alumno es."<<endl;
    cout<<"Ingrese una calificacion (A, B, C, D)"; cin>> cal;
    switch (cal)
    {
        case 'a':
        case 'A': honor = "Bueno"; break;
        case 'b':
        case 'B': honor = "Regular"; break;
        case 'c':
        case 'C': honor = "Malo"; break;
        case 'd':
        case 'D': honor = "Pesimo"; break;   
    
        default:
            honor = "E/C";
            cout<<"Calificacion no identificada"<<endl;
            break;
    }
    cout<<"Hpnores del estudiante: "<<honor<<endl;
    return honor;
}

// 30
string identifyMonth(){
    int n;
    string month;        
    cout<<"Lea un número que represente el mes y diga que meses es."<<endl;
    cout<<"Ingrese una numero (1 - 12)"; cin>> n;
    switch (n)
    {
        case 1: month = "Enero"; break;
        case 2: month = "Febrero"; break;
        case 3: month = "Marzo"; break;
        case 4: month = "Abril"; break;
        case 5: month = "Mayo"; break;
        case 6: month = "Junio"; break;
        case 7: month = "Julio"; break;    
        case 8: month = "Agosto"; break;    
        case 9: month = "Septiembre"; break;    
        case 10: month = "Octubre"; break;    
        case 11: month = "Noviembre"; break;    
        case 12: month = "Diciembre"; break;    
    
        default:
            month = "WAKANDA";
            cout<<"Numero Fuera de Rango"<<endl;
            break;
    }
    cout<<"Mes seleccionado: "<<month<<endl;
    return month;
}

// 31
string identifyChannel(){
    int n;
    string channel;        
    cout<<"Lea un número que represente el CANAL y diga cual es."<<endl;
    cout<<"Ingrese una numero de canal"; cin>> n;
    switch (n)
    { 
        case 2: channel = "TeleAntillas"; break; 
        case 5: channel = "Telemicro"; break; 
        case 7: channel = "AntenaLatina"; break;    
        case 11: channel = "Telesistema"; break;   
    
        default:
            channel = "NO SE VE; ARREGLA LA ANTENA";
            cout<<"Numero Fuera de Rango"<<endl;
            break;
    }
    cout<<"Mes seleccionado: "<<channel<<endl;
    return channel;
}

// 32
string showAnyMenu(){
    cout<<"Ejercicio: Muestre las opciones de un menú, seleccione una opción e imprima el mensaje apropiado indicando la opción seleccionada.\n"<<endl;
    cout<<"Respuesta:\n\t";
    cout<<"TODA LA APLICACION ESTA BASADA EN MENUS"<<endl;
}

