/* Un identificador puede ser reconocido por un diagrama de transición y/o tabla de transición, así
 entonces, debe implementar en el lenguaje de programación C o C++ los siguientes programas:

a) Implemente el algoritmo por diagramas de transición para el reconocimiento de un
identificador.

*/
#include <iostream>
#include <string>
using namespace std;

int main(){
    string input = "temp1";

    char simbolo = input[0];
    int estado = 1;
    int d = 0;
    simbolo = input[d];

    while(simbolo != '\0'){
        switch(estado){
            case 1:
                if(isdigit(simbolo)){ estado = 2;}
                else if(isalpha(simbolo)){ estado = 3;}
                else{
                    cout<< "Error "<< endl;
                }
                break;
            case 2:
                cout<< "Error "<< endl;
                break;
            case 3:
                if(isalpha(simbolo)) {estado = 3;}
                else if(isdigit(simbolo)) {estado = 3;}
                else{
                    cout<< "Error "<<endl;
                }
                break;
            }
        d++;
        simbolo=input[d];
        cout<<"Leido correctamente "<< endl;
    }
    if(estado!=3)
    cout<<"Error "<< endl;

    return 0;
}
