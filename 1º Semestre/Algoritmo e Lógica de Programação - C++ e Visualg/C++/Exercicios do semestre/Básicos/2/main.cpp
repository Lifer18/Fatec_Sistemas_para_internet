#include <iostream>
#include <locale>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale (LC_ALL, "PORTUGUESE");
	int paes,broas;
	float vendas,poupanca;
	
	cout << "Insira a quantidade de pães vendidos: ";
	cin >> paes;
	
	cout << "\nInsira a quantidade de broas vendidas: ";
	cin >> broas;
	
	vendas=(paes*0.12)+(broas*1.50);
	poupanca=vendas*0.1;
	
	cout<<"\nA quantia arrecadada com as vendas foi: R$"<<vendas;
	cout<<"\nA quantia que deve ser colocada na poupaça é: R$"<<poupanca;
	
	return 0;
}
