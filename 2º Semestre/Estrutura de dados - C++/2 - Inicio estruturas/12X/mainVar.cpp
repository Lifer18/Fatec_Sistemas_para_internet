#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

string nome_p();
int rg_p();
int cpf_p();
float valor_p();

int main(int argc, char *argv[]){
    struct cadastro {
        string nome;
        int rg;
        int cpf;
        float valor;

    };
    struct cadastro cliente; 
    
	cliente.nome = nome_p();
	cliente.rg = rg_p();
	cliente.cpf = cpf_p();
	cliente.valor = valor_p();
	
	
    cout << "O nome do cliente = " << cliente.nome << endl;
    cout << "O rg do cliente= " << cliente.rg << endl;
    cout << "O cpf do cliente = " << cliente.cpf << endl;
    cout << "O valor da parcela = " << cliente.valor/12<< endl;
}

string nome_p(){
	string nomep;
	cout << "Digite seu nome: ";
	cin >> nomep;
	return nomep;
}

int rg_p() {
    int rgp;
    cout << "Digite seu rg: ";
    cin >> rgp;
    return rgp;
}

int cpf_p() {
    int cpfp;
    cout << "Digite seu cpf: ";
    cin >> cpfp;
    return cpfp;
}

float valor_p() {
    float valorp;
    cout << "Valor do produto: ";
    cin >> valorp;
    return valorp;
}
