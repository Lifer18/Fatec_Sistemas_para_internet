#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

string modelo_c();
string marca_c();
int ano_c();
string placa_c();
float valores_c();
string acc_c();

int main(int argc, char *argv[]){
    struct cadastro {
        string modelo;
        string marca;
        int ano;
        string placa;
        float valor;
        string acessorios;
    };
    struct cadastro carro1; 
    
	carro1.modelo = modelo_c();
	carro1.marca = marca_c();
	carro1.ano = ano_c();
	carro1.placa = placa_c();
	carro1.valor = valores_c();
	carro1.acessorios = acc_c();
	
	
    cout << "O modelo = " << carro1.modelo << endl;
    cout << "A marca= " << carro1.marca << endl;
    cout << "O ano = " << carro1.ano << endl;
    cout << "A placa = " << carro1.placa << endl;
    cout << "O valor= "<< carro1.valor << endl;
    cout << "Os acessorios sao = " << carro1.acessorios << endl;
    return 0;
}

string modelo_c(){
	string modeloc;
	cout << "Qual o modelo: ";
	cin >> modeloc;
	return modeloc;
}

string marca_c() {
    string marcac;
    cout << "Qual a marca: ";
    cin >> marcac;
    return marcac;
}

int ano_c() {
    int anoc;
    cout << "Qual o ano: ";
    cin >> anoc;
    return anoc;
}

string placa_c() {
    string placac;
    cout << "Qual a placa: ";
    cin >> placac;
    return placac;
}

float valores_c() {
    float valorc;
    cout << "Qual o valor de mercado: ";
    cin >> valorc;
    return valorc;
}
string acc_c() {
    string acc;
    cout << "Quais sao os acessorios: ";
    cin >> acc;
    return acc;
}

