#include <iostream>
#include <string>
#include <fstream>

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
    return 0;
}
