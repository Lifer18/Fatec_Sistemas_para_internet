#include <iostream>
#include <locale>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void semana(int n1){
	setlocale(LC_ALL,"PORTUGUESE");
	cout << "\n";
	if (n1==1){
		cout << "Domingo";
	}
	else if (n1==2){
		cout << "Segunda";
	}
	else if (n1==3){
		cout << "Terça";
	}
	else if (n1==4){
		cout << "Quarta";
	}
	else if (n1==5){
		cout << "Quinta";
	}
	else if (n1==6){
		cout << "Sexta";
	}
	else if (n1==7){
		cout << "Sábado";
	}
	else{
		cout << "Número inválido (deve ser de 1 a 7).";
	}
}

int main() {
	setlocale(LC_ALL,"PORTUGUESE");
	int n1;
	
	cout << "Insira o dia da semana (1 a 7): ";
	cin >> n1;
	
	semana(n1);
	
	return 0;
}
