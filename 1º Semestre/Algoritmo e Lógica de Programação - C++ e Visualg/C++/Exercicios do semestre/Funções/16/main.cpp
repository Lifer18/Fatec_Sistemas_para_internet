#include <iostream>
#include <locale>
using namespace std;


//função que identifica primo
bool verifica(int num){
	int i=1,j;
	j=num-1;
	//Se o j tiver que chegar a 0, o número só é divisível por 1, sendo assim primo!
	while(i!=0 and j>0){
		i=num%j;
		j--;
	}
	if(j==0){
		return true;
	}
	else{
		return false;
	}	
}
int main() {
	setlocale(LC_ALL,"PORTUGUESE");
	int num;
	bool primo;
	
	cout<<"Insira o número a ser verificado se é primo: ";
	cin>>num;

	primo=verifica(num);
	
	if(primo==true){
		cout<<"\nO número "<<num<<" é primo!";
	}
	else{
		cout<<"\nO número "<<num<<" não é primo!";
	}
	
	
	return 0;
}
