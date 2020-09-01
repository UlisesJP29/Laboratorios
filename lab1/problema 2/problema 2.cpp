// problema 2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//


//
#include <string>
#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <vector>
#include <time.h>

using namespace std;
            

void generarArreglo(vector<string>& matriz)
{
    
    string cadena= "Feliz";
    getline(cin, cadena);
    srand(time(NULL));
    for (int i = 0; i < matriz.size(); i++)
    {
       cout<< "escribe una cadena de texto " << '\n';
        getline(cin, cadena);
        matriz[i] = cadena ;
       // cout << matriz[i] << '\n';
    }
}


bool matrizTieneHola(vector<string>& matriz, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
           // cout << matriz[i*n+j] << '\t';
            if (matriz[i * n + j] == "Hola")
            {
                return true;

            }
        }
        cout<< '\n';
    }
}

int main()
{
    int n;
    cin >> n;
    vector<string> matriz(n * n, " ");
    generarArreglo(matriz);
    if (matrizTieneHola(matriz, n))
    {
        cout << "hay un Hola!";
    }
    

}

/*
int buscarHoela()
{
    string cadena;
    string matriz[2][2];
    int sizes = size(matriz);
    for (size_t f = 0; f < size(matriz); f++)
    {
        for (size_t c = 0; c < size(matriz); c++)
        {
            cout << "escribe una cadena de texto ";
            getline(cin, cadena);
            matriz[f][c] = cadena;
            
        }
        cout << " \n";
    }
    for (size_t f = 0; f < tamano; f++)
    {
        for (size_t c = 0; c < tamano; c++)
        {
            if (matriz[f][c] == "Hola")
            {
                return true;
            }
          //  cout << matriz[f][c] << ", ";
        }
        cout << " \n";
    }*/



// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
