#include <iostream>
#include <locale>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void regressiva(int n1){
	setlocale(LC_ALL,"PORTUGUESE");
	for (n1;n1>=0;n1--){
		cout << "\nGabriel é corno" << n1;
	}
}

int main() {
	setlocale(LC_ALL,"PORTUGUESE");
	int n1;
	
	cout << "Insira o número inteiro a ser começada a contagem: ";
	cin >> n1;
	
	regressiva(n1);
	return 0;
}
