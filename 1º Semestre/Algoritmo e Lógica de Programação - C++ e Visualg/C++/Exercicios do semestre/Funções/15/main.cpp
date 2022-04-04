#include <iostream>
#include <locale>
#include <stdlib.h>
#include <time.h>
using namespace std;

//Função que retorna quantidade de 0
int zero(int num){
	if(num==0){
		return 1;
	}
	else{
		return 0;
	}
}

int main() {
	setlocale(LC_ALL,"PORTUGUESE");
	int quant=0,i,j,a[3][3];
	//variável que determina um SEED para o rand, de forma que os números sejam realmente aleatórios
	srand(time(NULL));
	//Gerando valores a matriz e a exibindo ao usuário
	cout<<"A matriz é: ";
	for(i=0;i<3;i++){
		cout<< "\n";
		for(j=0;j<3;j++){
			//Gerando valores aleatórios de -50 a 50
			a[i][j]=rand()%(50-(-50))+(-50);
			cout << " "<<a[i][j];
			//Somando quantas vezes foi retornado 1 pela função
			quant=quant+zero(a[i][j]);
		}
	}
	
	cout<<"\nO número 0 aparece "<<quant<<" vezes";
	return 0;
}
