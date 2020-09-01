// problema 1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//1.	Escribe un método que devuelva el porcentaje de la cantidad de elementos que tienen el valor verdadero en una matriz de valores booleanos.
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{

    bool matrizb[5][5] = {
        {false,true,true,false,false},
        {true,true,true,false,false},
        {false,false,true,false,false},
        {true,false,true,true,false},
        {false,true,false,false,true} };


    int conttrue = 0;
    int cont = 0;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++)
        {
            if (matrizb[i][j] == true)
            {
                conttrue++;
            }
            cont++;

        }
    }
    int promedio = (conttrue * 100) / cont;
    cout << "El promedio es " << promedio << "% \n";
    // cout << cont << "\n";
     //cout << conttrue << "\n";
    return 0;
}


// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
