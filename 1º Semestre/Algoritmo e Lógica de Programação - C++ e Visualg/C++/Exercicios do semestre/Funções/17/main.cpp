#include <iostream>
#include <locale>
using namespace std;

//Fun��o que verifica se � perfeito
bool perfeito(int num){
	int i,soma=0;
	//repeti��o que verifica se � perfeito, verificando os divisores e adicionando a soma
	for(i=1;i<num;i++){
		if(num%i==0){
			soma=soma+i;
		}
		else{
		}
	}
	//se a soma dos divisores der o n�mero, ent�o ele � perfeito!
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
	
	cout<<"Digite o n�mero a ser verificado se � perfeito: ";
	cin>>num;
	
	perf=perfeito(num);
	
	if(perf==true){
		cout<<"O n�mero "<<num<<" � perfeito!";
	}
	else{
		cout<<"O n�mero "<<num<<" n�o � perfeito!";
	}
	
	return 0;
}
