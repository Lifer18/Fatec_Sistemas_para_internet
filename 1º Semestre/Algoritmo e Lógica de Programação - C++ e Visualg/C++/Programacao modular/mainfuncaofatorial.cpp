#include <iostream>
#include <locale>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


void fat(int n1, int n2){
	setlocale(LC_ALL,"PORTUGUESE");
	int f1=1,f2=2;
	for(int i=1;i<=n1;i++){
		f1=f1*i;
	}
	for(int i=1;i<=n2;i++){
		f2=f2*i;
	}
	cout << "\nO fatorial do primeiro n�mero �: " << f1;
	cout << "\nO fatorial do segundo n�mero �: " << f2;
}

void soma(int n1, int n2){
	setlocale(LC_ALL,"PORTUGUESE");
	int result;
	result=n1+n2;
	cout << "\nA soma �: " << result;
}

int main() {
	setlocale(LC_ALL,"PORTUGUESE");
	int n1,n2;
	
	cout << "Informe o primeiro n�mero: ";
	cin >> n1;
	
	cout << "Informe o segundo n�mero: ";
	cin>> n2;
	
	soma(n1,n2);
	fat(n1,n2);
	return 0;
}
