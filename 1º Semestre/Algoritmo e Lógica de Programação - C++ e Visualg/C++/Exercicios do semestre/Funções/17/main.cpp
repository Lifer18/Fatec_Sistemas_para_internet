#include <iostream>
#include <locale>
using namespace std;

//Função que verifica se é perfeito
bool perfeito(int num){
	int i,soma=0;
	//repetição que verifica se é perfeito, verificando os divisores e adicionando a soma
	for(i=1;i<num;i++){
		if(num%i==0){
			soma=soma+i;
		}
		else{
		}
	}
	//se a soma dos divisores der o número, então ele é perfeito!
	if(num==soma){
		return true;
	}
	else{
		return false;
	}
}

int main() {
	setlocale(LC_ALL,"PORTUGUESE");
	int num;
	bool perf;
	
	cout<<"Digite o número a ser verificado se é perfeito: ";
	cin>>num;
	
	perf=perfeito(num);
	
	if(perf==true){
		cout<<"O número "<<num<<" é perfeito!";
	}
	else{
		cout<<"O número "<<num<<" não é perfeito!";
	}
	
	return 0;
}
