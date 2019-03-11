// Librarys
#include <iostream>
#include <string>
#include <windows.h>

// Extern files
#include "./secuenciales.cpp"
#include "./condicionales.cpp"
#include "./switch.cpp"
#include "./while.cpp"
#include "./do_while.cpp"
#include "./for.cpp"
#include "./arrays.cpp"

using namespace std;

int menuSecuencial(){
    int selected;
    string options[] = {
        "1. Longitud de una circunferencia",
        "2. Area del trapecio",
        "3. Convertir Millas a Kilometros"
        "4. Perimetro del rectangulo",
        "5. Perimetro del triangulo Rectangulo",
        "6. Volumen de un paralelepipedo de largo, ancho y altura conocidas",
        "7. Area total de un paralelepipedo",
        "8. Area de un triangulo; Conociendo 2 lados y el angulo que forman.",
        "9. En un campeonato de futbol participan n equipos. ¿Cuantos partidos habran en la primera rueda del campeonato?.",
        "10. Suma de los n primeros numeros pares",
        "11. Calcule la Suma: s = 1 x 2 +2 x 3 + 3 x 4 + … +n x ( n + 1)",
        "12. Calcule la Suma: s = 1 + 3 + 5 + 7 + … + (2 n - 1).",
        "13. Lea una hora y diga a cuantas horas, minutos y segundos equivale.",
        "14. Calcule la media aritmetica de los n primeros numeros enteros positivos",
        "15. Hallar el area y el perimetro de un rectangulo."
    }; 
    for(size_t i = 0; i < sizeof(options)/sizeof(options[0]); i++)
    {
        cout<<options[i]<<endl;
    }
    // Leemos la opcion del usuario
    cin >> selected ;

    // Decidimos que metodo utilizar
   switch (selected)
   {
       case 1:
           longitudCircunferencia();
           break;
        case 2:
           AreaTrapecio();
           break;
        case 3:
           ConvertirMillasAKm();
           break;
        case 4:
           PerimetroRectangulo();
           break;
        case 5:
           PerimetroTrianguloRectangulo();
           break;
        case 6:
            volumenParalele();
        break; 
        case 7:
            areaParalele();
        break; 
        case 10:
            sumaPares();
            break;
        case 11:
            sumaNmas1();
            break;
        case 12:
            sumarImpares();
            break;
        case 13:
            hour();
            break;
        case 14:
            mediaNumber();
            break;
        case 15:
            areaPerimetroRectangulo();
            break;
       default:
           break;
   }
}

int menuConditional(){
    int selected;
    string options[] = {
        "16. Numero par o impar"
        "17. Determinar valor absoluto de un numero.",
        "18. Si dos numeros son positivos calcule su producto, en caso contrario calcule su suma.",
        "19. Sin usar estructuras repetitivas, lea 5 numeros y determine el menor.",
        "20. Lea 5 numeros y diga si estan ordenados ascendentemente.",
        "21. Ordene 3 numeros a, b y c de tal manera que al final a, sea siempre el mayor, b sea el intermedio y c el menor.",
        "22. Diga si un numero n es multiplo de m.",
        "23. Lea 3 numeros diferentes e indique cual es el valor intermedio.",
        "26. En una universidad tienen como politica considerar 3 notas en cada curso.\n la nota de trabajos T,\nla nota de medio ciclo M\nla de fin de ciclo F \ncada una tiene un peso de 50 porciento, 20 porciento y 30 porciento respectivamente.",
    };
 
    for(size_t i = 0; i < sizeof(options)/sizeof(options[0]); i++)
    {
        cout<<options[i]<<endl;
    }
    
    cin>> selected;
    system("cls");
    switch (selected)
    {
        case 16: parOimpar(); break;
        case 17: valorAbsoluto(); break;
        case 18: ProductoSuma(); break;
        case 19: MenorNumero(); break;
        case 20: areAscendent(); break;
        case 21: ordenaNumeros(); break;
        case 22: esMultiplo(); break;
        case 23: numeroIntermedio(); break;
        case 26: promedioNotas(); break;
    
        default: 
            break;
    }
   return selected; 
}

int menuSwitch(){
    int selected;
    string options[] = {
        "27. Si las vocales se representan con numeros del 1 al 5, lea un numero y diga que vocal es.",
        "28. Lea un numero que represente el dia de la semana y diga que dia es, teniendo en cuenta que la semana comienza en domingo.",
        "29. Un alumno es calificado con a, b, c o d. Sera bueno si obtuvo un a, regular si obtuvo un b, malo si obtuvo un c, y pesimo si obtuvo un d, Lea un calificativo y escriba que tipo de alumno es.",
        "30. Lea un numero que represente el mes y diga que meses es.",
        "31. Escriba un programa que lea un numero de canal de television y diga cual es el nombre del canal.",
        "32. Muestre las opciones de un menu, seleccione una opcion e imprima el mensaje apropiado indicando la opcion seleccionada."
     }; 
    for(size_t i = 0; i < sizeof(options)/sizeof(options[0]); i++)
    {
        cout<<options[i]<<endl;
    }
    
    cin>> selected;
    system("cls");
    switch (selected)
    {
        case 27: identifyVocal();  break;
        case 28: identifyDayOfWeek();  break;
        case 29: identifyCalification();  break;
        case 30: identifyMonth();  break;
        case 31: identifyChannel();  break;
        case 32: identifyVocal();  break;
    
        default:
            break;
    }
   return selected; 
}

int menuWhile(){
    int selected;
    string options[] = {
        "33. Determine Cuantos digitos tiene un numero entero ingresado por teclado.",
        "34. Lea un entero y diga cual es su digito mayor.",
        "35. Se sabe que n2= 1+3+5+7+2n-1. Se pide leer un numero y calcular su cuadrado haciendo uso de esta relacion."
    }; 
    for(size_t i = 0; i < sizeof(options)/sizeof(options[0]); i++)
    {
        cout<<options[i]<<endl;
    }
    cin>> selected;
    system("cls");
    switch (selected)
    {
        case 33: identifyLength();  break;
        case 34: DigitoMayor();  break;
        case 35: calcularCuadrado();  break;
    
        default:
            break;
    }
   return selected; 
} 

int menuDoWhile(){
    int selected;
    string options[] = {
        "36. En una universidad se pueden llevar hasta 22 creditos en un ciclo. Escriba un programa que permita a un alumno matricularse, sin pasarse del limite de creditos permitido.",
        "37. Una vendedora de pan tiene n unidades de pan al comenzar el dia. Si cada cliente le pide m panes, ¿Cuantos clientes son atendidos completamente? ¿Cuantos panes quedan para el ultimo cliente?",
        "38. Un cliente de un banco realiza sucesivos retiros desde un cajero, si posee 1000 al inicio de las operaciones, escriba un programa que le permita retirar dinero mientras tenga fondos.",
        "39. A una fiesta ingresan personas de diferentes edades, no se permite el ingreso de menores de edad. Se pide la edad menor, la mayor, y el promedio de edades. El ingreso debe terminar cuando la edad ingresada sea cero.",
    }; 

    for(size_t i = 0; i < sizeof(options)/sizeof(options[0]); i++)
    {
        cout<<options[i]<<endl;
    }
    cin>> selected;
    system("cls");
    switch (selected)
    {
        case 36: universidad();  break;
        case 37: panaderia();  break;
        case 38: cajero();  break;
        case 39: sofoke();  break;
    
        default:
            break;
    }
   return selected; 
}

int menuFor(){
    int selected;
    string options[] = {
        "40. Muestre todos los pares entre a y b, y diga Cuantos son.",
        "41. Encuentre todos los numeros primos de 3 digitos.",
        "42. Muestre todos los numeros capicuas o palindromos dentro de un rango determinado. Un numero es capicua cuando al invertir sus cifras nos da el mismo numero.",
        "43. Leer n numeros e indique el mayor, menor y el promedio.",
        "44. Construya la tabla de sumar del 5.",
        "45. Imprima el numero 1, una vez; el 2, dos veces; el 3, tres veces; y asi sucesivamente hasta llegar a un numero n ingresado por teclado.",
    }; 

    for(size_t i = 0; i < sizeof(options)/sizeof(options[0]); i++)
    {
        cout<<options[i]<<endl;
    }

    cin>> selected;
    system("cls");
    switch (selected)
    {
        case 40: pares(); break;
        case 41: primos(); break;
        case 42: pares(); break;
        case 43: leerNnumeros(); break;
        case 44: tabladelcinco(); break;
        case 45: cuarentaycinco(); break;
    
        default:
            break;
    }
   return selected; 
}

int menuArray(){
    int selected;
    string options[] = {
        "46. Lea un array e invierta las posiciones de sus datos.",
        "47. Encuentre el mayor, el menor y el promedio de un conjunto de datos de un array.",
        "48. Cargar un array de n enteros y calcular la media de los que esten en posiciones pares.",
        "49. Suma de un escalar y los elementos de un array",
        "50. Buscar un elemento X en un conjunto de elementos de un array",
    }; 

    for(size_t i = 0; i < sizeof(options)/sizeof(options[0]); i++)
    {
        cout<<options[i]<<endl;
    }

    cin>> selected;
    system("cls");

    switch (selected)
    {
        case 46: invertirDatos(); break;
        case 47: leerNnumeros(); break;
        case 48: mediaArray(); break;
        case 49: escalar(); break;
        case 50: buscarArray(); break;
    
        default:
            break;
    }
   return selected;  
}

int main(){ 
    do{
        cout<<"Bienvenido al programa de los 50 ejercicios"<<endl;
        cout<<"Que categoria desearia probar?"<<endl;
        cout<<"1. Programas Secuenciales\n";
        cout<<"2. Programas con Condicionales Simples\n";
        cout<<"3. Programas con Condicioales Compuestas\n";
        cout<<"4. Programas con Ciclo Mientras\n";
        cout<<"5. Programas con Ciclo Hacer_Mientras\n";
        cout<<"6. Programas con Ciclo For\n";
        cout<<"7. Programas con Arrays\n";
        int select; cin>> select;
        switch (select)
        {
            case 1:
                menuSecuencial();
                break;
            case 2:
                menuConditional();
                break;
            case 3:
                menuSwitch();
                break;
            case 4:
                menuWhile();
                break;
            case 5:
                menuDoWhile();
                break;
            case 6:
                menuFor();
                break;
            case 7:
                menuArray();
                break;
            default:
                break;
        } 
        cout<<endl<<endl;
        system("pause");
        system("cls");
    }while(true);
    return 0;
}