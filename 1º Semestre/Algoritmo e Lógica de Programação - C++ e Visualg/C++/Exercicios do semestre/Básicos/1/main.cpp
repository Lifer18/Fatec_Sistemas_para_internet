#include <iostream>
#include <locale>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale (LC_ALL, "PORTUGUESE");
	int cavalos,ferraduras;
	cout<<"Insira o n�mero de cavalos que foram comprados: ";
	cin>>cavalos;
	
	ferraduras=cavalos*4;
	
	cout<<"\nA quantidade de ferraduras que s�o necess�rias �: "<<ferraduras;
	return 0;
}
