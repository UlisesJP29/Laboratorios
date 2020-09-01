// problema 3.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <time.h>
using namespace std;
void generarArreglo(int* matriz, int length) {
    srand(time(NULL));

    while (length--)
    {
        *matriz = rand() % 99 + 1;
        ++matriz;
    }
}

void imprimirArreglo(int* matriz, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; ++j, ++matriz) {
            cout << *matriz << '\t';
        }
        cout << '\n';
    }
}

int main() {

    int n;
    cin >> n;
    int* matriz = new int[n * n];
    generarArreglo(matriz, n * n);
    imprimirArreglo(matriz, n);
    delete[] matriz;

    system("pause");
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
