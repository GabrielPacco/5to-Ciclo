#include <iostream>
#include <string>
using namespace std;

int main(){
    string input = "temp1;";

    char simbolo = input[0];
    int estado = 1;
    int d = 0;

    while(simbolo != input[size(input)]){
        switch(estado){
            case1:
                if(isdigit(simbolo)) estado = 2;
                else if(isalpha(simbolo)) estado = 3;
                else{
                    cout<< "Error "<< endl;
                    break;
                }
            case2:
                cout<< "Error "<< endl;
                break;

            case3:
                if(isalpha(simbolo)) estado = 3;
                else if(isdigit(simbolo)) estado = 3;
                else{
                    cout<< "Error "<<endl;
                    break;}
        }
        d++;
        simbolo=input[d];
        cout<<"Correcto "<< endl;
    }
    if(estado!=3)
    cout<<"Error "<< endl;

    return 0;
}
