#include <iostream>
#include <locale>
using namespace std;


//fun��o que identifica primo
bool verifica(int num){
	int i=1,j;
	j=num-1;
	//Se o j tiver que chegar a 0, o n�mero s� � divis�vel por 1, sendo assim primo!
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
	
	cout<<"Insira o n�mero a ser verificado se � primo: ";
	cin>>num;

	primo=verifica(num);
	
	if(primo==true){
		cout<<"\nO n�mero "<<num<<" � primo!";
	}
	else{
		cout<<"\nO n�mero "<<num<<" n�o � primo!";
	}
	
	
	return 0;
}
