#include <iostream>
using namespace std;



/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int idade;
	
	cout << "Insira a sua idade: ";
	cin >> idade;
	cout << endl;
	
	if(idade > 15){
		cout << "Voce possui idade para votar!";
	}
	else{
		cout << "Voce ainda nao possui idade para votar!";
	}
	
	return 0;
}
