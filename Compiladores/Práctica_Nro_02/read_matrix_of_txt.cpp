#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    string file = "scores.txt";
    ifstream inFile;
    inFile.open(file);

    string line= "";
    string temp= "";
    int row = 2;
    int col = 12; 
    int scores[row][col]={0};

    if(inFile.is_open())
    {
        int k = 0; 
        int j = 0;
        while(getline(inFile,line))
        {
            if(line != "")
            {
                j = 0;
                line = line + ',';
                for(int i = 0; i < line.length(); i++)
                {
                    if(line[i] != ',')
                    {
                        temp += line[i];
                    }
                    else
                    {
                        // cout zz << temp << endl;
                        scores[k][j] = stoi(temp);
                        temp = "";
                        j++;
                    }
                }
            }
            k++;
        }
    }
    else
    {
        cout << "Error al abrir el archivo" << endl;
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << scores[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
