// problema 2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//


//
#include <string>
#include <iostream>
#include <conio.h>
#include <cstdlib>

using namespace std;
int main()
{
    string cadena;
    string matriz[2][2];
    for (size_t f = 0; f < size(matriz); f++)
    {
        for (size_t c = 0; c < size(matriz); c++)
        {
            cout << "escribe una cadena de texto ";
            getline(cin, cadena);
            // cout << cadena << ", ";
        }
        cout << " \n";
    }
    //muestra en pantalla la matriz
    for (size_t f = 0; f < size(matriz); f++)
    {
        for (size_t c = 0; c < size(matriz); c++)
        {
            cout << "escribe una cadena de texto ";
            getline(cin, cadena);
            // cout << cadena << ", ";
        }
        cout << " \n";
    }
}

int buscarHola()
{


}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
