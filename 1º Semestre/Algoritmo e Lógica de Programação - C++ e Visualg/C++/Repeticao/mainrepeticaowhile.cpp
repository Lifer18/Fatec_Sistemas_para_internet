#include <iostream>
#include <locale>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale (LC_ALL, "PORTUGUESE");
	
	char resp='S',vcontinuar;
	string nome;
	//int cont=0;
	
	while(resp=='S'){
	
	cout << "Qual é seu nome?: ";
	cin >> nome;
	
	//while(cont<10){

		cout << "\nOlá, " << nome;
		cout << "\nSeja bem vindo!!";
	//	cont++;
	do{
		cout<<"\nDeseja continuar? (S/N)\n";
		cin >> resp;
		resp=toupper(resp);
		if(resp=='S' || resp=='N'){
		vcontinuar='S';
		}
		else{
		cout<<"Resposta inválida, tente novamente!\n";
		}
	}while (vcontinuar!='S');*/
		
	}
	return 0;
}
