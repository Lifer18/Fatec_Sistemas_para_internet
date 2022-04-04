#include <iostream>
#include <locale>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
float volume(float raio){
	float vol;
	//Percebi que o cálculo para o volume estava incorreto, então usei a fórmula correta:
	vol=(4*3.14*(raio*raio*raio))/3;
	return vol;
}

int main() {
	setlocale(LC_ALL,"PORTUGUESE");
	float raio,vol;
	
	cout<<"Insira o raio da circunferência: ";
	cin >> raio;
	
	vol=volume(raio);
	
	cout<<"\nO volume da esfera é: "<<vol;
	return 0;
}
