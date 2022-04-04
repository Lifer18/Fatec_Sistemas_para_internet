#include <iostream>
#include <locale>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale(LC_ALL,"PORTUGUESE");
	int i,n,somaa,somab,produto;
	//Pegando a quantidade de elementos do vetor
		cout<<"Insira a quantidade de elementos dos vetores: ";
		cin>>n;

	int a[n],b[n],c[n],d[n];
		cout<<"\n";
	
	//Pegando os valores de cada elemento do vetor
		for(i=0;i<n;i++){
		cout<<"\nInsira o valor da "<<i+1<<"ª posição para o vetor A: ";
		cin>>a[i];
		}
		for(i=0;i<n;i++){
		cout<<"\nInsira o valor da "<<i+1<<"ª posição para o vetor B: ";
		cin>>b[i];
		}
		cout<<"\n";
	//Somando os elementos do vetor	
		somaa=a[0];
		somab=b[0];	
		for(i=1;i<n;i++){
		somaa=somaa+a[i];
		somab=somab+b[i];		
		}
		cout<<"\nA soma dos valores do vetor A é: "<<somaa;
		cout<<"\nA soma dos valores do vetor B é: "<<somab;
		cout<<"\n";
	//Obtendo o vetor C
		for(i=0;i<n;i++){
		c[i]=a[i]+b[i];
		cout<<"\nO valor da "<<i+1<<"ª posição do vetor C é: "<<c[i];
		}
		cout<<"\n";
			
	//Obtendo o vetor D
		for(i=0;i<n;i++){
		d[i]=b[i]-a[i];
		cout<<"\nO valor da "<<i+1<<"ª posição do vetor D é: "<<d[i];
		}
		cout<<"\n";
	//Obtendo produto escalar
		produto=0;
		for(i=0;i<n;i++){
		produto=produto+a[i]*b[i];
		}
		cout<<"\nO produto escalar do vetor A pelo vetor B é: "<<produto;		
	return 0;
}
