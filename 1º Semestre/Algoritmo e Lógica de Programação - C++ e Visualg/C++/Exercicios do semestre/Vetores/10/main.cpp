#include <iostream>
#include <locale>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale(LC_ALL,"PORTUGUESE");
	
	int n,i,j,subs;
	//Pegando a quantidade de elementos do vetor
		cout<<"Insira a quantidade de elementos do vetor: ";
		cin>>n;
		cout<<"\n";
	int a[n];
	//Pegando os valores de cada elemento do vetor
		for(i=0;i<n;i++){
		cout<<"\nInsira o valor da "<<i+1<<"ª posição para o vetor: ";
		cin>>a[i];
		}
		cout<<"\n";
	
	//Ordenando os elementos
		cout<<"O vetor com seus elementos ordenados de maneira crescente ficou: ";
		for(i=0;i<n;i++){
			for(j=i+1;j<n;j++){
				if(a[i]>a[j]){
					subs=a[i];
					a[i]=a[j];
					a[j]=subs;
				}			
			}
		cout<<" "<<a[i];	
		}
	return 0;
}
