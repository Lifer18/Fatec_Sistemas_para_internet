#include <iostream>
#include <locale>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale(LC_ALL,"PORTUGUESE");
	int i,j,maior,l=10,c=10,a[l][c];
	//Inserindo os valores dos elementos da matriz
		cout<<"Insira os valores para a matriz 10x10:";
		for(i=0;i<l;i++){
			cout<<"\nInsira os valores das colunas na linha "<<i+1<<" :";
			for(j=0;j<c;j++){
				cin>>a[i][j];
			}
		}
		
		cout<<"\n";
		
	//Exibindo a matriz
		for(i=0;i<l;i++){
			for(j=0;j<c;j++){
				cout << " "<< a[i][j];
			}
			cout << "\n";
		}
		cout<< "\n";
	//Encontrando o maior valor
		maior=a[0][0];
		for(i=0;i<l;i++){
			for(j=0;j<c;j++){
				if(maior<a[i][j]){
					maior=a[i][j];
				}
			}
		}
		cout<<"\nO maior valor encontrado foi: "<<maior;
	return 0;
}
