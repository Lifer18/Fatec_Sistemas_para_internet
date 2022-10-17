#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

string nome_p();
int rg_p();
int cpf_p();
int idade_p();
string materia_p();

int main(int argc, char *argv[]){
    struct cadastro {
        string nome;
        int rg;
        int cpf;
        int idade;
        string materia;

    };
	int TOTAL = 2;
    int x;
    struct cadastro prof[TOTAL]; 
    
    for ( x = 0; x<TOTAL; x++) {
        prof[x].nome = nome_p();
        prof[x].rg = rg_p();
        prof[x].cpf = cpf_p();
        prof[x].idade = idade_p();
        prof[x].materia = materia_p();
        system("cls");
    }
    for ( x = 0; x<TOTAL; x++){
    	cout<<"O nome do professor= "<< prof[x].nome<<endl;
    	cout<<"O rg do professor= "<< prof[x].rg<<endl;
    	cout<<"O cpf do professor= "<< prof[x].cpf<<endl;
    	cout<<"A idade do professor= "<< prof[x].idade<<endl;
    	cout<<"A materia do professor= "<< prof[x].materia<<endl;
	}
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

int idade_p() {
    float idadep;
    cout << "Qual a sua idade: ";
    cin >> idadep;
    return idadep;
}
string materia_p(){
	string materiap;
	cout << "Qual a materia: ";
	cin >> materiap;
	return materiap;
}
