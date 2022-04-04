#include <iostream>
#include <locale>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale(LC_ALL,"PORTUGUESE");
	int idade,dose;
	float peso;
	
	cout<<"Insira seu peso: ";
	cin>>peso;
	
	cout<<"\nInsira sua idade: ";
	cin>>idade;
	
	//Cada gota vale 25mg
	
	if(idade>=12){
		if(peso>=60){
			dose=1000/25;
		}
		else{
			dose=875/25;
		}
	}
	else{
		if(peso<5){
			cout<<"\nNão se deve tomar o remédio!";
			return 0;
		}
		else if((peso>=5) and (peso<=9)){
			dose=125/25;
		}
		else if((peso>9) and (peso<=16)){
			dose=250/25;
		}
		else if((peso>16) and (peso<=24)){
			dose=375/25;
		}
		else if((peso>24) and (peso<=30)){
			dose=500/25;
		}
		else{
			dose=750/25;
		}
	}
	cout<<"\nA dosagem para você é de "<<dose<<" gotas";
	return 0;
}
