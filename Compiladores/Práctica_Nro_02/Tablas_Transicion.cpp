/* Un identificador puede ser reconocido por un diagrama de transición y/o tabla de transición, así
 entonces, debe implementar en el lenguaje de programación C o C++ los siguientes programas:

b)Implemente, el algoritmo por tablas de transición para el reconocimiento de un
identificador

*/

#include <iostream>
using namespace std;
int main()
{
    int M [3][3] = {{1, 2, -1}, {-1,-1,-1}, {2, 2, 100}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << M[i][j] << " ";
        }
        cout << endl;
    }
    string input = "temp1";
    char simbolo = input[0];
    int estado = 0;
    int sim;
    int d = -1;
    do{
        d++;
        simbolo = input[d];
        if (isdigit(simbolo)) sim = 0;
        else if (isalpha(simbolo)) sim = 1;
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
    }
    while (estado != 100);
    if (estado == 100)
    {
        cout << "Correcto" << endl;
    }
    return 0;   
}
