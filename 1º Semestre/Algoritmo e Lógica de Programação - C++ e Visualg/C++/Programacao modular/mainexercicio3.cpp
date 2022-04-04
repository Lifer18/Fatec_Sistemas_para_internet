#include <iostream>
#include <locale>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void identificador(int n1){
	setlocale(LC_ALL, "PORTUGUESE");

	if (n1%2==0){
		cout <<"\nO número "<<n1<<" é par!";
	}
	else{
		cout <<"\nO número "<<n1<<" é ímpar!";
	}

}

int main() {
	setlocale(LC_ALL,"PORTUGUESE");
	int n1;
	
	cout << "Informe o número a ser identificado como par ou ímpar: ";
	cin >> n1;
	
	identificador(n1);
	return 0;
}
