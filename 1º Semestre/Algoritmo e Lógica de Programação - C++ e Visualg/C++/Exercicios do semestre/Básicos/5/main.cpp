#include <iostream>
#include <locale>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale(LC_ALL,"PORTUGUESE");
	char dest;
	float preco,ida;
	
	do{
	cout << "Selecione o tipo de viagem: \n(1)Ida \n(2)Ida e volta \n";
	cin >> ida;
	
	if((ida!=1) and (ida!=2)){
		cout<<"Opção inválida!\n";
	}
	else{
	}
	}while ((ida!=1) and (ida!=2));
	
	do{
	cout<<"Selecione o destino: \n(1)Norte \n(2)Nordeste \n(3)Centro-Oeste \n(4)Sul \n";
	cin >> dest;
	
	
	switch(dest){
		case '1':
			preco=500*ida;
		break;
		case '2':
			preco=350*ida;
		break;
		case '3':
			preco=350*ida;
		break;
		case '4':
			preco=300*ida;
		break;
		default:
			cout<<"Opção inválida!\n";
		break;
	}
	}while ((dest!='1') and (dest!='2') and (dest!='3') and (dest!='4'));
	
	cout<<"O preço da viagem é: R$"<<preco;
	return 0;
}
