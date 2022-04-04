#include <iostream>
#include <locale>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale(LC_ALL,"PORTUGUESE");
	int i,j,media,soma,aux,maior,l=24,c=4,a[l][c];

	//Inserindo os valores dos elementos da matriz
		cout<<"Insira as medições da pulsação:";
		for(i=0;i<l;i++){
		if(i<10){
			cout<<"\n0"<<i<<":00 :";
		}
		else{
			cout<<"\n"<<i<<":00 :";
		}
			for(j=0;j<c;j++){
				cout<<"\n Insira a pulsação para o "<<j+1<<"º paciente:";
				cin>>a[i][j];
			}
		}
		cout<<"\n";
	
	//Exibindo a matriz
		for(j=0;j<c;j++){
		cout<<"\n"<<j+1<<"º paciente:";
		soma=0;
		for(i=0;i<l;i++){
		if(i<10){
			cout<<"\n0"<<i<<":00 :";
		}
		else{
			cout<<"\n"<<i<<":00 :";
		}
				cout << " "<< a[i][j];
			soma=soma+a[i][j];
			}
			media=soma/24;
			cout << "\nA média do "<<j+1<<" paciente é: "<<media<<"\n";
		}	
		cout<< "\n";
		
	//Encontrando o maior valor
		maior=a[0][0];
		for(i=0;i<l;i++){
			for(j=0;j<c;j++){
				if(maior<a[i][j]){
					maior=a[i][j];
					aux=j;
	
				}
			}
		}
		cout<<"\nA maior pulsação encontrada foi "<<maior<<" e foi do "<<aux+1<<"º paciente";
		

		
	return 0;
}
