#include <iostream>
#include <locale>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale (LC_ALL, "PORTUGUESE");
	
	int resp,cont,result;
	
	cout << "Insira o número a ser mostrado a tábuada(inteiro): ";
	cin >> resp;
	
	//while(cont<11){
	for(cont=1;cont<11;cont++){
	result=resp*cont;
	cout<<"\n"<<
	resp<<" X "<<cont<<" = "<<result;	
	//cont++;
	}
	
	return 0;
}
