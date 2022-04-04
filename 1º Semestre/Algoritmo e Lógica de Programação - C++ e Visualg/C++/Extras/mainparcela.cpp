#include <iostream>
#include <locale>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale(LC_ALL,"PORTUGUESE");
	string nome;
	int anoa,anonasc,idade;
	float valor,parcela,nparcela;
	
	cout<<"\nInsira o nome do cliente: ";
	cin>>nome;
	
	cout<<"\nInsira o ano atual: ";
	cin>>anoa;
	
	cout<<"\nInsira o ano do nascimento do cliente: ";
	cin>>anonasc;
	
	cout<<"\nInsira o valor da compra: ";
	cin>>valor;
	
	idade=anoa-anonasc;
	
	if(idade>70){
		nparcela=3;
		parcela=valor/nparcela;
	}
	else if(valor>=1000){
		nparcela=12;
		parcela=valor/nparcela;
	}
	else if(valor<1000 && valor>=500){
		nparcela=9;
		parcela=valor/nparcela;
	}
	else if(valor<500 && valor>=200){
		nparcela=6;
		parcela=valor/nparcela;
	}
	else if(valor<200 && valor>=50){
		nparcela=3;
		parcela=valor/nparcela;
	}
	else{
	}
	cout<<"\nNome do cliente: "<<nome;
	cout<<"\nIdade do cliente: "<<idade;,
	
	cout<<"\nValor da compra: R$"<<valor;
	cout<<"\nNúmero de parcelas: "<<nparcela;
	cout<<"\nValor da parcela: R$"<<parcela;
	return 0;
}
