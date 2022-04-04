#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	float n1, n2, media;
	cout << "Digite a primeira nota: ";
	cin >> n1;
	cout << endl;
	
	cout << "Digite a segunda nota: ";
	cin >> n2;
	cout << endl;	
	
	media=(n1+n2)/2;
	
	if (media>10){
		cout << "Media acima de 10, chegue as notas colocadas!";
	}
	else if (media > 6){
	cout << "A media e: "<<media<< ", o aluno esta aprovado!";
	}
	else{
	cout << "A media e:"<<media<< ", o aluno esta reprovado!";
	}
	return 0;
}
