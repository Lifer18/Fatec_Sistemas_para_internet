#include <iostream>
#include <locale>
#include <string>
using namespace std;

struct revisao{
	int data;
	string local;
	float preco;
	string problemas[100];
};

typedef struct cadastro {
    string modelo;
    string marca;
    int ano;
    string placa;
	float valor;
    string acessorios;
    revisao revisoes[5];
}CADASTRO;


string r_modelo();
string r_marca();
int r_ano();
string r_placa();
float r_valores();
string r_acc();
int r_data();
string r_local();
float r_preco();
string r_problemas();

int main(int argc, char *argv[]){
	setlocale(LC_ALL, "PORTUGUESE");
	int total;
	int x,y,z,n;
	cout <<"Insira o número de carros a ser cadastrado: ";
	cin >> total;
	cout<<"\n Quantos problemas houveram na revisão?(máximo 100): ";
	cin>>n;
	
	CADASTRO carro[total]; 
	
	for(x=0;x<total;x++){
		
		carro[x].modelo = r_modelo();
		carro[x].marca = r_marca();
		carro[x].ano = r_ano();
		carro[x].placa = r_placa();
		carro[x].valor = r_valores();
		carro[x].acessorios = r_acc();
		for(y=0;y<5;y++){
			carro[x].revisoes[y].data = r_data();
			carro[x].revisoes[y].local = r_local();
			carro[x].revisoes[y].preco = r_preco();
			if(n==0){
				carro[x].revisoes[y].problemas[n] = ("nenhum");
			}
			else{
				for(z=0;z<n;z++){
					carro[x].revisoes[y].problemas[n] = r_problemas();
				}
			}
		}
	}
	
	for(x=0;x<total;x++){
	    cout << "\n O modelo do "<<x+1<<"º carro é: "<< carro[x].modelo;
	    cout << "\n A marca do "<<x+1<<"º carro é: "<< carro[x].marca;
	    cout << "\n O ano do "<<x+1<<"º carro é: "<< carro[x].ano;
	    cout << "\n A placa do "<<x+1<<"º carro é: "<< carro[x].placa;
	    cout << "\n O valor do "<<x+1<<"º carro é: "<< carro[x].valor;
	    cout << "\n Os acessorios do "<<x+1<<"º carro é: "<< carro[x].acessorios;
	    for(y=0;y<5;y++){
	    	cout << "\n A data da "<<y+1<<"ª revisão é: "<< carro[x].revisoes[y].data;
	    	cout << "\n O local da "<<y+1<<"ª revisão é: "<< carro[x].revisoes[y].local;
	    	cout << "\n O preço da "<<y+1<<"ª revisão é: "<< carro[x].revisoes[y].preco;
	    	for(z=0;z<n;z++){
	    	cout << "\n Os problemas da "<<y+1<<"ª revisão são: "<< carro[x].revisoes[y].problemas[n];
	    	}
		}
	}
    
    return 0;
}

string r_modelo(){
	string modeloc;
	cout << "\n Qual o modelo: ";
	cin >> modeloc;
	return modeloc;
}

string r_marca() {
    string marcac;
    cout << "\n Qual a marca: ";
    cin >> marcac;
    return marcac;
}

int r_ano() {
    int anoc;
    cout << "\n Qual o ano: ";
    cin >> anoc;
    return anoc;
}

string r_placa() {
    string placac;
    cout << "\n Qual a placa: ";
    cin >> placac;
    return placac;
}

float r_valores() {
    float valorc;
    cout << "\n Qual o valor de mercado: ";
    cin >> valorc;
    return valorc;
}
string r_acc() {
    string acc;
    cout << "\n Quais sao os acessorios: ";
    cin >> acc;
    return acc;
}
int r_data(){
	int datac;
	cout << "\n Insira a data da revisao: ";
	cin >> datac;
	return datac;
}
string r_local(){
	string localc;
	cout << "\n Insira o local da revisao: ";
	cin >> localc;
	cout << localc;
	return localc;
}
float r_preco(){
	float precoc;
	cout << "\n Insira o preco da revisao: ";
	cin >> precoc;
	return precoc;	
}
string r_problemas(){
	string problemac;
	cout << "\n Insira o problema: ";
	cin >> problemac;
	cout << problemac;
	return problemac;
}
