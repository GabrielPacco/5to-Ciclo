#include <iostream>
using namespace std;

enum class estado{inicial,Q1,Q2,Q3,Q4};

estado read_dig(string& input)
{
	int i = 0;
	estado actual = estado::inicial;
	bool rechazada = false;

	while (rechazada == false && i < input.size()) {
		char simbolo = input[i];
		switch (actual) {
		case estado::inicial:
			if (simbolo == '.'){
				actual = estado::Q2;
			}
			else if (isdigit(simbolo)) {
				actual = estado::Q3;
			}
			else if (simbolo == '+' or simbolo == '-') {
				actual = estado::Q1;
			}
			else {
				rechazada = true;
			}
			break;
		case estado::Q1:
			if (isdigit(simbolo)) {
				actual = estado::Q3;
			}
			else if (simbolo == '.') {
				actual = estado::Q2;
			}
			else {
				rechazada = true;
			}
			break;
		case estado::Q2:
			if (isdigit(simbolo)) {
				actual = estado::Q4;
			}
			else {
				rechazada = true;
			}
			break;
		case estado::Q3:
			if (isdigit(simbolo)) {
				actual = estado::Q3;
			}
			else if (simbolo == '.') {
				actual = estado::Q2;
			}
			else {
				rechazada = true;
			}
			break;
		case estado::Q4:
			if (isdigit(simbolo)) {
				actual = estado::Q4;
			}
			else {
				rechazada = true;
			}
			break;
		}
		i++;
	}
	if (rechazada) {
		cout << "cadena rechazada";
	}
	return actual;
}

int main() {
	string input = ".73";
	
	estado aceptacion = read_dig(input);
	if (aceptacion == estado::Q3) {
		cout << "cadena aceptada";
	}
	else if (aceptacion == estado::Q4) {
		cout << "cadena aceptada";
	}
}