#include <iostream>
#include <locale>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale(LC_ALL,"PORTUGUESE");
	char pe,se,be;
	string p,s,b;
	int calp,cals,calb,soma;
	
	cout<<"Escolha o prato: \n(1)Vegetariano\n(2)Peixe\n(3)Frango\n(4)Carne\n";
	cin>>pe;
	
	switch(pe){
		case '1':
			calp=180;
			p="Vegetariano";
		break;
		
		case '2':
			calp=230;
			p="Peixe";
		break;
		
		case '3':
			calp=250;
			p="Frango";
		break;
		
		case '4':
			calp=350;
			p="Carne";
		break;
		default:
			cout<<"Opção inválida!";
			return 0;
		break;
	}
	
	cout<<"Escolha a sobremesa: \n(1)Abacaxi\n(2)Sorvete Diet\n(3)Mousse Diet\n(4)Mousse Chocolate\n";
	cin>>se;
	
	switch(se){
		case '1':
			cals=75;
			s="Abacaxi";
		break;
		
		case '2':
			cals=110;
			s="Sorvete Diet";
		break;
		
		case '3':
			cals=170;
			s="Mousse Diet";
		break;
		
		case '4':
			cals=200;
			s="Mousse Chocolate";
		break;
		default:
			cout<<"Opção inválida!";
			return 0;
		break;
	}
	
	cout<<"Escolha a bebida: \n(1)Chá\n(2)Suco de Laranja\n(3)Suco de Melão\n(4)Refrigerante Diet\n";
	cin>>be;
	
	switch(se){
		case '1':
			calb=20;
			b="Chá";
		break;
		
		case '2':
			calb=70;
			b="Suco de Laranja";
		break;
		
		case '3':
			calb=110;
			b="Suco de Melão";
		break;
		
		case '4':
			calb=65;
			b="Refrigerante Diet";
		break;
		default:
			cout<<"Opção inválida!";
			return 0;
		break;
	}
	soma=calp+cals+calb;
	cout<<"\nO total de calorias foi: "<<soma;
	cout<<"\n\nSendo desse total:";
	cout<<"\n"<<calp<<"cal de "<<p<<"\n"<<cals<<"cal de "<<s<<"\n"<<calb<<"cal de "<<b;
	return 0;
}
