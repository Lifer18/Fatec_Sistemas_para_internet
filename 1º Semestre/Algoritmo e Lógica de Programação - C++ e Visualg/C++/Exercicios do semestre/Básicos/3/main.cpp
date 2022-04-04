#include <iostream>
#include <locale>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale (LC_ALL,"PORTUGUESE");
	int camip,camim,camig,valor;
	
	cout<<"Insira a quantidade de camisetas pequenas: ";
	cin>>camip;
	
	cout<<"\nInsira a quantidade de camisetas médias: ";
	cin>>camim;
	
	cout<<"\nInsira a quantidade de camisetas grandes: ";
	cin>>camig;
	
	valor=(camip*10)+(camim*12)+(camig*15);
	
	cout<<"\nO valor arrecadado será: R$"<<valor;
	
	
	return 0;
}
