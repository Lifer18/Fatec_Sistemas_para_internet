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
			cout << "\nO estado civil �: Solteiro";
			break;
		case 'C':
		case 'c':
			cout << "\nO estado civil �: Casado";
			break;
		case 'D':
		case 'd':
			cout << "\nO estado civil �: Divorciado";
			break;
		case 'V':
		case 'v':
			cout << "\nO estado civil �: Viuvo";
			break;
		default:
			cout << "\n Letra inv�lida!";
			break;
	}		
	/*if(ec=='S' or ec=='s'){
		cout << "\nO estado civil �: Solteiro";
	}
	else if (ec=='C' or ec=='c'){
		cout << "\nO estado civil �: Casado";
	}
	else if (ec=='D' or ec=='d'){
		cout << "\nO estado civil �: Divorciado";
	}
	else if (ec=='V' or ec=='v'){
		cout << "\nO estado civil �: Viuvo";
	}
	else{
		cout << "\n Letra inv�lida!";
	}*/
	return 0;
}
