#include <iostream>
#include <locale>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale(LC_ALL,"PORTUGUESE");
	float soma=0,grao=0.5;
	int i;
	
	cout<<"N�meros de gr�os de trigo em um tabuleiro de xadrez: \n";
	for(i=0;i<64;i++){
		grao=grao*2;
		soma=soma+grao;
		cout<<"\n"<<i+1<<"� casa tem: "<<grao<<" gr�os.";
	}
	cout<<"\n\nA soma de todos os gr�os foi: "<<soma;
	return 0;
}
