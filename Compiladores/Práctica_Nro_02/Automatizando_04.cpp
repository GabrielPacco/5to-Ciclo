#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void createMat(int **&mat, int i, int j)
{
    mat = new int *[5];
    for (int i = 0; i < 5; i++)
    {
        mat[i] = new int[4];
    }
}
void printMat(int **mat, int i, int j)
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    ifstream inFile("input.txt");
    int **mat;
    int i = 0;
    int j = 0;
    createMat(mat, i, j);
    while (inFile >> mat[i][j])
    {
        j++;
        if (j == 4)
        {
            j = 0;
            i++;
        }
    }
    printMat(mat, i, j);
    
    int tam = input.size();
    char simbolo = input[0];
    int estado = 0;
    int sim, d = -1;
    do{
        d++;
        simbolo = input[d];
        if (isalpha(simbolo)) sim = 0;
        else if (isdigit(simbolo)) sim = 1;
        else if (simbolo == '\0') sim = 2;
        else
        {
            cout << "Error" << endl;
            break;
        }
        switch (sim)
        {
        case 0: sim = 0; break;
        case 1: sim = 1; break;
        case 2: sim = 2; break;
        default: cout << "Error" << endl;
        }
        estado = M[estado][sim];
        if (estado == -1)
        {
            cout << "Error" << endl;
            break;
        }
        estado = 100;
    }
    while (simbolo != '\0');
    
    return 0;   
}
