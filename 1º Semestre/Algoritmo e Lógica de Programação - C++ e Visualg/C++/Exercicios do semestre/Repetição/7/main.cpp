#include <iostream>
#include <locale>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale (LC_ALL, "PORTUGUESE");
	
	int i,n1=0,n2=1,n3,quant;
	
	cout<<"Insira a quantidade de números para serem exibidos na sequencia fibonacci(min 2): ";
	cin>>quant;
	
	cout<<"0\n1";
	for(i=0;i<quant-3;i++){
		n3=n2+n1;
		n1=n2;
		n2=n3;
		cout<<"\n"<<n3;
	}
	return 0;
}
