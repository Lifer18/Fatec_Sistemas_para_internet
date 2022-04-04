#include <iostream>
#include <locale>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale(LC_ALL,"PORTUGUESE");
	int i,j,k,l=4,c=4,prim[l][c],seg[l][c],terc[l][c];
	
	//Inserindo os valores dos elementos da matriz
		cout<<"Insira os valores para as matrizes 4x4:";
		for(i=0;i<l;i++){
			cout<<"\nInsira os valores das colunas na linha "<<i+1<<" :\n";
			cout<<"\nMatriz A:\n";
			for(j=0;j<c;j++){
				cout<<"\nColuna "<<j+1<<":";
				cin>>prim[i][j];
			}
			cout<<"\n\nMatriz B:\n";
			for(k=0;k<c;k++){
				cout<<"\nColuna "<<k+1<<":";
				cin>>seg[i][k];
			}
		}
		cout<<"\n";
		
	//Criando terceira matriz
		for(i=0;i<l;i++){
			for(j=0;j<c;j++){
				if(prim[i][j]>seg[i][j]){
					terc[i][j]=prim[i][j];
				}
				else {
					terc[i][j]=seg[i][j];
				}
			}
		}
		cout<<"\n";
		
	//Exibindo as matrizes
		cout<<"\nMatriz A ficou:\n";
		for(i=0;i<l;i++){
			for(j=0;j<c;j++){
				cout<<" "<<prim[i][j];
			}
			cout<<"\n";
		}
		cout<<"\n";
		
		cout<<"\nMatriz B ficou:\n";
		for(i=0;i<l;i++){
			for(j=0;j<c;j++){
				cout<<" "<<seg[i][j];
			}
			cout<<"\n";
		}
		cout<< "\n";
		
		cout<<"\nMatriz C(com os maiores valores entre A e B) ficou:\n";
		for(i=0;i<l;i++){
			for(j=0;j<c;j++){
				cout<<" "<<terc[i][j];
			}
			cout<<"\n";
		}
		cout<<"\n";
	return 0;
}
