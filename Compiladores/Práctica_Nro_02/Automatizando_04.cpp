#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    int M [3][3] = {{1, 2, -1}, {-1,-1,-1}, {2,2,100}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << M[i][j] << " ";
        }
        cout << endl;
    }
    string input;
    ifstream archivo;
    archivo.open("input.txt");
    if (archivo.fail())
    {
        cout << "Error al abrir el archivo" << endl;
        return 0;
    }
    while (!archivo.eof())
    {
        getline(archivo, input);
    }
    
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
