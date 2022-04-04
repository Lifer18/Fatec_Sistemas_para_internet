#include <iostream>
#include <locale>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
setlocale(LC_ALL, "PORTUGUESE");
	char ec;
	cout << "Insira a letra(S, C, D ou V): ";
	cin >> ec;
	switch(ec){
		case 'S':
		
		case 's':
			cout << "\nO estado civil é: Solteiro";
			break;
		case 'C':
		case 'c':
			cout << "\nO estado civil é: Casado";
			break;
		case 'D':
		case 'd':
			cout << "\nO estado civil é: Divorciado";
			break;
		case 'V':
		case 'v':
			cout << "\nO estado civil é: Viuvo";
			break;
		default:
			cout << "\n Letra inválida!";
			break;
	}		
	/*if(ec=='S' or ec=='s'){
		cout << "\nO estado civil é: Solteiro";
	}
	else if (ec=='C' or ec=='c'){
		cout << "\nO estado civil é: Casado";
	}
	else if (ec=='D' or ec=='d'){
		cout << "\nO estado civil é: Divorciado";
	}
	else if (ec=='V' or ec=='v'){
		cout << "\nO estado civil é: Viuvo";
	}
	else{
		cout << "\n Letra inválida!";
	}*/
	return 0;
}
