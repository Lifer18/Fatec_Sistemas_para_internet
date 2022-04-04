#include <iostream>
#include <locale>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
setlocale(LC_ALL, "PORTUGUESE");
	char sexo;
	float altura, peso;
	
		cout << "Insira o seu sexo (M ou F): ";
		cin >> sexo;
	
	if(sexo=='M' or sexo=='m' or sexo=='F' or sexo=='f'){
		cout << "\nInsira a sua altura: ";
		cin >> altura;
		if (altura>3){
			cout<< "\nAltura inválida!";
		}
		else{
		if (sexo=='M' or sexo=='m'){
		peso=72.7*altura-58;
		}
		else{
		peso=62.1*altura-44;
		}
		}
		cout << "Seu peso ideal é: "<<peso;
	}
	else{
		cout<<"Sexo inválido, insira M ou F!";
	}
	
	return 0;
}
