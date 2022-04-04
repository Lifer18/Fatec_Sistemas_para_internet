#include <iostream>
#include <locale>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int maior (int n1,int n2){
	int maior;
	if (n1>n2){
		maior=n1;
	}
	else{
		maior=n2;
	}
	return maior;
}

int media(int n1, int n2){
	int med;
	med=(n1+n2)/2;
	return med;
}
int main() {
	setlocale(LC_ALL, "PORTUGUESE");
	int t1,t2,p1,p2,tmaior,pmaior,medianotas;
	
	cout << "Insira a nota do primeiro trabalho: ";
	cin >> t1;
	
	cout << "\nInsira a nota do segundo trabalho: ";
	cin >> t2;
	
	cout << "\nInsira a nota da primeira prova: ";
	cin >> p1;
	
	cout << "\nInsira a nota da segunda prova: ";
	cin >> p2;
	
	tmaior=maior(t1,t2);
	pmaior=maior(p1,p2);
	medianotas=media(tmaior,pmaior);
	
	cout << "\nA nota do trabalho usada foi: "<<tmaior;
	cout << "\nA nota da prova usada foi: "<<pmaior;
	cout << "\nA média foi: "<<medianotas;
	
	return 0;
}
