#pragma once

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

