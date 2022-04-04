#include <iostream>
#include <locale>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale(LC_ALL,"PORTUGUESE");
	
	string nome;
	int cod;
	float altura,peso,imc;
	
	cout<<"Insira o código do paciente: ";
	cin>>cod;
	
	cout<<"\nInsira o nome do paciente: ";
	cin>>nome;
	
	cout<<"\nInsira a altura do paciente: ";
	cin>>altura;
	
	cout<<"\nInsira o peso do paciente: ";
	cin>>peso;
	
	imc=peso/(altura*altura);
	
	cout<<"\nO nome do paciente é: "<<nome;
	cout<<"\nO imc é: "<<imc;
	
	
	if(imc<18){
		cout<<"\nA classificação é: Magreza";
	}
	else if(imc>=18 && imc<25){
		cout<<"\nA classificação é: Normal";
	}
	else if(imc>=25 && imc<30){
		cout<<"\nA classificação é: Sobrepeso";
	}
	else if(imc>=30 && imc<35){
		cout<<"\nA classificação é: Obesidade grau 1";
	}
	else if(imc>=35 && imc<40){
		cout<<"\nA classificação é: Obesidade grau 2";
	}
	else if(imc>=40){
		cout<<"\nA classificação é: Obesidade grau 3(mórbida)";
	}
	else{
		cout<<"\nValores inseridos inválidos!";
	}
	return 0;
}
