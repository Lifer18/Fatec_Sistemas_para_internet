#include <iostream>
#include <locale>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
float volume(float raio){
	float vol;
	//Percebi que o c�lculo para o volume estava incorreto, ent�o usei a f�rmula correta:
	vol=(4*3.14*(raio*raio*raio))/3;
	return vol;
}

int main() {
	setlocale(LC_ALL,"PORTUGUESE");
	float raio,vol;
	
	cout<<"Insira o raio da circunfer�ncia: ";
	cin >> raio;
	
	vol=volume(raio);
	
	cout<<"\nO volume da esfera �: "<<vol;
	return 0;
}
