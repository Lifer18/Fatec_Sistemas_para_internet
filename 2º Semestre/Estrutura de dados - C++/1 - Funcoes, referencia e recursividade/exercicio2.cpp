#include <iostream>
#include <locale>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int soma(int n){
	if(n==0){
		return 0;
	}
	return soma(n-1)+n;
}

int main(int argc, char** argv) {
	setlocale(LC_ALL, "PORTUGUESE");
	
	int n;
	cout<<"Digite o número: ";
	cin>>n;
	
	cout<<"\nA soma de 0 a "<<n<<" é: "<<soma(n);
	return 0;
} 
