#include <iostream>
#include <locale>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale (LC_ALL, "PORTUGUESE");
	int inicial,final,cont=1,num;
	
	cout << "Informe o número inicial: ";
	cin >> inicial;
	cout << "\nInforme o número final: ";
	cin >> final;
	
	if(final<inicial){
		for(cont=inicial;cont>=final;cont--){
			num=inicial-final;
			cout<<cont<<endl;
		}
	cout<<"\nA contagem foi regressiva!";
	}
	else if (inicial<final){
		for(cont=inicial;cont<=final;cont++){
			num=final-inicial;
			cout<<cont<<endl;
		}
	cout<<"\nA contagem foi progressiva!";
	}
	else{
		num=1;
		cout<<inicial<<endl;
		cout<<"Você colocou números iguais, logo:";
		}

	
	cout<<"\nO programa escreveu um intervalo de "<<num<<" números!";
	return 0;
}
