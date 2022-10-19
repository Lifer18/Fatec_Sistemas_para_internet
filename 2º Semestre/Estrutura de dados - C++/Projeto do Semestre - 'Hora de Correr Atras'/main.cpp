#include <iostream>
#include <locale>
//Biblioteca Para Leitura e Escrita em Arquivos de Texto.
#include <fstream>
using namespace std;

//Estrutura contendo todos os Registros dos Participantes.
//Além disso ela contem um ponteiro que aponta para a proxima estrututa na lista.
typedef struct NO{
	int num;
	string nome;
	string cpf; 
	string camiseta;
	string prova;
	bool efetivada;	
	struct NO* prox;
}*corre;

//Variaveis Necessarias Para o usso da Lista.
static corre head = NULL;
static corre tail = NULL;
static corre temp = NULL;

//Função que verifica se a lsita esta Vazia.
bool vazio(){
	return head == NULL;
}

//Função que retorna o total de numero de inscrições.
int ninscricao(){
	int n;
	for(temp = head; temp != NULL; temp=temp->prox){
		if(temp->num!=0){
			n++;
		}
		else{
			n=1;
		}
	}
	return n;
}

//Função que grava de acordo com o tipo de prova
//todos os dados dos participates em arquivos de texto externos.
void gravar(string prova){
	string nome, cpf, camiseta, provanode;
	int num;
	bool efetivada;
	ofstream provatxt;
	if(prova=="Kids"){
	provatxt.open ("kids.txt");
	}
	else if(prova=="Caminhada 5K"){
	provatxt.open ("caminhada5k.txt");
	}
	else if(prova=="Corrida 5K"){
	provatxt.open ("corrida5k.txt");
	}
	else if(prova=="Corrida 10K"){
	provatxt.open ("corrida10k.txt");
	}
	else if(prova=="Corrida 21K"){
	provatxt.open ("corrida21k.txt");
	}
	for(temp = head; temp != NULL; temp=temp->prox){
	provanode = temp->prova;
	if(provanode==prova){
	nome = temp->nome;
    cpf = temp->cpf;
    camiseta = temp->camiseta;
    num = temp->num;
    efetivada = temp->efetivada;
	provatxt << "\nNº Inscrição: "<<num;
    provatxt << "\nNome: "<<nome;
    provatxt << "\nCpf: "<<cpf;
    provatxt << "\nCamiseta: "<<camiseta;
    provatxt << "\nEfetivada: ";
    	if(efetivada==true){
            	provatxt<<"Sim\n";
			}
		else{
			provatxt<<"Não\n";
		}
	}
	else{
		
	}
	provatxt.close();
	}
}

//Função que recebe os valores da função Main(); e insere elas na lsita dinâmica,
//Coloca o Numero de Inscrição do participante automaticamente, usando a função ninscricoes();
//e Também ja grava nos arquivos de txt usando a função gravar();.
void inscricao(string nome,string cpf,string camiseta,string prova,bool efetivada){
    temp = new NO;
    temp->nome = nome;
    temp->cpf = cpf;
    temp->camiseta = camiseta;
    temp->prova = prova;
    temp->efetivada = efetivada;
    temp->prox = NULL;
    if(vazio()){
        head = temp;
        tail = temp;
    } else {
        tail->prox = temp;
        tail = temp;
    }
    temp->num=ninscricao();
    gravar(prova);
}

//Função que encontra o participante pelo nº de inscrição
void encontrar(int x,char op){
    int i=1,sair=0;
    char camiop,provaop;
    temp = head;
    while (temp->prox != NULL && temp->num != x) {
        temp = temp->prox;
        i++;
    }
    if(temp->num == x)
    {
        cout << "\nNº de inscrição: " << i << "º\n";
        if(op=='1'){
        	cout<<"\nO nome atual é: "<<temp->nome<<"\n";
        	cout<<"\nInsira o novo nome: ";
        	cin>>temp->nome;
		}
		else if(op=='2'){
        	cout<<"\nO cpf atual é: "<<temp->cpf<<"\n";
        	cout<<"\nInsira o novo cpf: ";
        	cin>>temp->cpf;
		}
		else if(op=='3'){
        	cout<<"\nA camiseta atual é: "<<temp->camiseta<<"\n";
        	do{
					cout<<"\n1-Camiseta tamanho P.";
					cout<<"\n2-Camiseta tamanho M.";
					cout<<"\n3-Camiseta tamanho G.";
					cout<<"\n4-Camiseta tamanho GG.";
					cout<<"\nInsira a camiseta do participante: ";
					cin >> camiop;
				switch(camiop){
					case '1':
						temp->camiseta="P";
						sair=1;
					break;
					case '2':
						temp->camiseta="M";
						sair=1;
					break;
					case '3':
						temp->camiseta="G";
						sair=1;
					break;
					case '4':
						temp->camiseta="GG";
						sair=1;
					break;
					default:
						cout<< "\nOpção inválida.";
					break;
				}
				}while(sair==0);
				sair=0;
		}
		else if(op=='4'){
        	cout<<"\nO tipo de prova atual é: "<<temp->prova<<"\n";
        	do{
					cout<<"\n1-Prova 'Kids.'";
					cout<<"\n2-Prova 'Caminhada 5K'.";
					cout<<"\n3-Prova 'Corrida 5K'.";
					cout<<"\n4-Prova 'Corrida 10K'.";
					cout<<"\n5-Prova 'Corrida 21K'.";
					cout<<"\nInsira a prova do participante: ";
					cin >> provaop;
					
				switch(provaop){
					case '1':
						temp->prova="Kids";
						sair=1;
					break;
					case '2':
						temp->prova="Caminhada 5K";
						sair=1;
					break;
					case '3':
						temp->prova="Corrida 5K";
						sair=1;
					break;
					case '4':
						temp->prova="Corrida 10K";
						sair=1;
					break;
					case '5':
						temp->prova="Corrida 21K";
						sair=1;
					break;
					default:
						cout<< "\nOpção inválida.";
					break;
				}
				}while(sair==0);
				sair=0;
		}
		else if(op=='5'){
        	cout<<"\nA efetivação da inscrição era: ";
        	if(temp->efetivada==true){
            	cout<<"\nSim";
            	cout<<"\nAgora é: Não";
            	temp->efetivada==false;
			}
			else{
				cout<<"Não\n";
				cout<<"\nAgora é: Sim";
            	temp->efetivada==true;
			}
		}
		gravar(temp->prova);
    }
    else if(temp->prox == NULL)
    {
        cout << "Número de inscrição não encontrado..." << endl;
    }
}
//Inicio da série de funções que retornam as quantidades de participantes elegiveis
//a ganhar medalhas na função ganhamedalha().
int numElegiveisKids(){
	int numElegiveisKids = 0;
	for(temp = head; temp != NULL; temp=temp->prox){
	
		if(temp->prova=="Kids" && temp->efetivada==true){
			numElegiveisKids++;
		}	
	}
	return numElegiveisKids;	
}

int numElegiveisCaminhada5K(){
	int numElegiveisCaminhada5K = 0;
	for(temp = head; temp != NULL; temp=temp->prox){
	
		if(temp->prova=="Caminhada 5K" && temp->efetivada==true){
			numElegiveisCaminhada5K++;
		}	
	}
	return numElegiveisCaminhada5K;	
}

int numElegiveisCorrida5K(){
	int numElegiveisCorrida5K = 0;
	for(temp = head; temp != NULL; temp=temp->prox){
	
		if(temp->prova=="Corrida 5K" && temp->efetivada==true){
			numElegiveisCorrida5K++;
		}	
	}
	return numElegiveisCorrida5K;	
}

int numElegiveisCorrida10K(){
	int numElegiveisCorrida10K = 0;
	for(temp = head; temp != NULL; temp=temp->prox){
	
		if(temp->prova=="Corrida 10K" && temp->efetivada==true){
			numElegiveisCorrida10K++;
		}	
	}
	return numElegiveisCorrida10K;	
}

int numElegiveisCorrida21K(){
	int numElegiveisCorrida21K = 0;
	for(temp = head; temp != NULL; temp=temp->prox){
	
		if(temp->prova=="Corrida 21K" && temp->efetivada==true){
			numElegiveisCorrida21K++;
		}	
	}
	return numElegiveisCorrida21K;	
}

//Fim das Funções que retornam as quantidades de participantes elegiveis
//a ganhar medalhas na função ganhamedalha().

//Função que mostra em cada categoria de prova a quantidade de participantes que são
//elegiveis a ganhar medalhas(Requisito era ter pago)
//Ele usa as funçoes:numElegiveisKids(), numElegiveisCorrida5K(),
//numElegiveisCaminhada5K(), numElegiveisCorrida21K() para verificar isso.
void ganhamedalha(){
	int Kids = numElegiveisKids();
	int Caminhada5K = numElegiveisCaminhada5K();
	int Corrida5K = numElegiveisCorrida5K();
	int Corrida21K = numElegiveisCorrida21K();
					
	if(!vazio()){

	cout << "\n São elelegiveis a ganhar medalhas na categoria Kids: "<<Kids;
	cout << "\n São elelegiveis a ganhar medalhas na categoria Caminhada 5K: "<<Caminhada5K;
	cout << "\n São elelegiveis a ganhar medalhas na categoria Corrida 5K: "<<Corrida5K;
	cout << "\n São elelegiveis a ganhar medalhas na categoria Corrida 21K: "<<Corrida21K;
	
	}

	else{
		cout << "\nNao há participantes Registrados ainda!";
	}
	
}

//Função que mostra todos os participantes que pagaram e todos os que não
//Também mostra no caso de não houver nenhum participante registrado ainda
//e também no caso de não houver participantes pagos ainda.
void mostrarvalidados(){
	int n=0;
	if(!vazio()){
		cout << "\n Efetivados: \n";
	for(temp = head; temp != NULL; temp=temp->prox){
        if(temp->efetivada==true){
            cout << "\nNº Inscrição: "<<temp->num<<"\n";
            cout << "Nome: "<<temp->nome<<"\n";
            cout << "Cpf: "<<temp->cpf<<"\n";
            cout << "Camiseta: "<<temp->camiseta<<"\n";
            cout << "Prova: "<<temp->prova<<"\n";
            cout << "Efetivada: Sim\n";
			n++; 
		}
		} if(n==0){
			cout<<"\nNão há corredores com inscriçoes efetivadas.\n";
		}
		n=0;
		cout<<"\n Não Efetivados: \n";
		for(temp = head; temp != NULL; temp=temp->prox){
		
		if(temp->efetivada==false){

            	cout << "\nNº Inscrição: "<<temp->num<<"\n";
            	cout << "Nome: "<<temp->nome<<"\n";
            	cout << "Cpf: "<<temp->cpf<<"\n";
            	cout << "Camiseta: "<<temp->camiseta<<"\n";
            	cout << "Prova: "<<temp->prova<<"\n";
            	cout << "Efetivada: Não\n\n";
            	n++;
		}
		}
		if(n==0){
			cout<<"\nNão há corredores com inscriçoes não efetivadas.\n";
		}
	}
else{
			cout << "\nNao há participantes Registrados ainda!";
		}
}

//Função que lê os arquivos de texto gravados externamente e mostra no programa
//as informações dos participantes que foram gravados na função gravar();
void mostrar(string prova){
    if(!vazio()) {
    	string linha;
        
	    ifstream provatxt;
		if(prova=="Kids"){
		provatxt.open ("kids.txt");
		}
		else if(prova=="Caminhada 5K"){
		provatxt.open ("caminhada5k.txt");
		}
		else if(prova=="Corrida 5K"){
		provatxt.open ("corrida5k.txt");
		}
		else if(prova=="Corrida 10K"){
		provatxt.open ("corrida10k.txt");
		}
		else if(prova=="Corrida 21K"){
		provatxt.open ("corrida21k.txt");
		}
		cout<<"\nMostrando a prova: "<<prova;
		while(provatxt.good()){
			getline(provatxt, linha);
			cout<<"\n"<<linha;
			}
		provatxt.close();
    }
	 else {
        cout << "\nNão há corredores inscritos!";
    }
}

//Função que libera as memorias usadas após o uso do programa.
void limpar_memorias(){
    corre limpar;
    delete temp;
    delete tail;
    while (head->prox != NULL) {
        limpar = head;
        head = head->prox;
        limpar->prox = NULL;
        delete limpar;
    }
}

//Função que verifica se o Nº de Incrição pertence a algum participante.
bool inscrito (int n){
	if(!vazio()) {
	temp = head;
	do{
    if(temp->num == n){
    	return true;
    }
    else if(temp->prox == NULL){
        return false;
    }
    temp = temp->prox;
	}while (temp->prox != NULL);
	}
	else {
    }
}


//Inicio da serie de funções que retornam o Nº de participantes 
//elegiveis(pagaram) a ganhar as camisetas no começo da prova usando a função camisetas().
int numElegiveisp(){
	int n = 0;
	for(temp = head; temp != NULL; temp=temp->prox){
	
		if(temp->camiseta=="P" && temp->efetivada==true){
			n++;
		}	
	}
	return n;	
}

int numElegiveism(){
	int n = 0;
	for(temp = head; temp != NULL; temp=temp->prox){
	
		if(temp->camiseta=="M" && temp->efetivada==true){
			n++;
		}	
	}
	return n;	
}

int numElegiveisg(){
	int n = 0;
	for(temp = head; temp != NULL; temp=temp->prox){
	
		if(temp->camiseta=="G" && temp->efetivada==true){
			n++;
		}	
	}
	return n;	
}

int numElegiveisgg(){
	int n = 0;
	for(temp = head; temp != NULL; temp=temp->prox){
	
		if(temp->camiseta=="GG" && temp->efetivada==true){
			n++;
		}	
	}
	return n;	
}
//Fim das funções que retornam o Nº de participantes 
//elegiveis(pagaram) a ganhar medalha na função ganhar().

//Função que mostra o numero de participantes que receberão as camisetas 
//no começo da prova de acordo com usa elegibilidade nas funções: numElegiveisp();
//numElegiveism(), numElegiveisg() e numElegiveisgg().
void camisetas(){
	int P = numElegiveisp();
	int M = numElegiveism();
	int G = numElegiveisg();
	int GG = numElegiveisgg();
					
	if(!vazio()){

	cout << "\n Receberão camisas P: "<<P;
	cout << "\n Receberão camisas M: "<<M;
	cout << "\n Receberão camisas G: "<<G;
	cout << "\n Receberão camisas GG: "<<GG;
	
	}

	else{
		cout << "\nNao há participantes Registrados ainda!";
	}
	
}

//Função Principal onde contém o menu que usa Do-While como base e contém em si varios
//Switch-Cases que recebem do usuario um valor e executam todas as funç~eos necessarias;
int main(int argc, char** argv) {
	setlocale (LC_ALL, "portuguese");
	int sair=0,n; 
	char menu,sairop,camiop,provaop,efetop,ediop;
	string nome,cpf,camiseta,prova;
	bool efetivada,num;	
	
	do{
	cout << "\n\n1- Inscrição.";
	cout << "\n2- Mostrar participantes.";
	cout << "\n3- Editar uma inscrição.";
	cout << "\n4- Ver participantes registrados.";
	cout << "\n5- Ver quantidade de medalhas.";
	cout << "\n6- Ver quantidade de camisetas.";
	cout << "\n7- Encerrar.\n";
	cout << "Escolha uma opção: ";
	cin >> menu;

	switch(menu){
		
		//Case 1: Adiciona dados de novos participantes na Lista.
		case '1':
			do{
				cout<<"\nInsira o Nome do participante: ";
				cin >> nome;
				cout<<"\nInsira o CPF do participante: ";
				cin >> cpf;
				do{
					cout<<"\n1-Camiseta tamanho P.";
					cout<<"\n2-Camiseta tamanho M.";
					cout<<"\n3-Camiseta tamanho G.";
					cout<<"\n4-Camiseta tamanho GG.";
					cout<<"\nInsira a camiseta do participante: ";
					cin >> camiop;
				switch(camiop){
					case '1':
						camiseta="P";
						sair=1;
					break;
					case '2':
						camiseta="M";
						sair=1;
					break;
					case '3':
						camiseta="G";
						sair=1;
					break;
					case '4':
						camiseta="GG";
						sair=1;
					break;
					default:
						cout<< "\nOpção inválida.";
					break;
				}
				}while(sair==0);
				sair=0;
				
				do{
					cout<<"\n1-Prova 'Kids.'";
					cout<<"\n2-Prova 'Caminhada 5K'.";
					cout<<"\n3-Prova 'Corrida 5K'.";
					cout<<"\n4-Prova 'Corrida 10K'.";
					cout<<"\n5-Prova 'Corrida 21K'.";
					cout<<"\nInsira a prova do participante: ";
					cin >> provaop;
					
				switch(provaop){
					case '1':
						prova="Kids";
						sair=1;
					break;
					case '2':
						prova="Caminhada 5K";
						sair=1;
					break;
					case '3':
						prova="Corrida 5K";
						sair=1;
					break;
					case '4':
						prova="Corrida 10K";
						sair=1;
					break;
					case '5':
						prova="Corrida 21K";
						sair=1;
					break;
					default:
						cout<< "\nOpção inválida.";
					break;
				}
				}while(sair==0);
				sair=0;
				
				do{
				cout<<"\n1- Sim";
				cout<<"\n2- Não";
				cout<<"\nA inscrição foi efetivada?: ";
				cin >> efetop;
				
				switch(efetop){
					case '1':
						efetivada=true;
						sair=1;
					break;
					case '2':
						efetivada=false;
						sair=1;
					break;
					default:
						cout<<"\nOpção Inválida!";
					break;
				}
				}while (sair==0);
				sair=0;
				do{
				cout<<"\n1- Sim";
				cout<<"\n2- Não";
				cout<<"\nDeseja realizar mais uma inscrição?: ";
				cin>>sairop;
				switch(sairop){
					case '1':
					break;
					case '2':
						cout<<"\nVocê saiu das inscrições\n";
						sair=1;
					break;
					default:
						cout<<"\nOpção inválida!";
					break;
				}
				}while((sairop!='1') && (sairop!='2'));
				inscricao(nome,cpf,camiseta,prova,efetivada);
			}while(sair==0);
			sair=0;
		break;
		
		//Case 2: mostra os participantes de acordo com a prova.
		case '2':
			do{
					cout<<"\n1-Prova 'Kids.'";
					cout<<"\n2-Prova 'Caminhada 5K'.";
					cout<<"\n3-Prova 'Corrida 5K'.";
					cout<<"\n4-Prova 'Corrida 10K'.";
					cout<<"\n5-Prova 'Corrida 21K'.";
					cout<<"\nInsira a prova a ser mostrada: ";
					cin >> provaop;
					
				switch(provaop){
					case '1':
						prova="Kids";
						mostrar(prova);
						sair=1;
					break;
					case '2':
						prova="Caminhada 5K";
						mostrar(prova);
						sair=1;
					break;
					case '3':
						prova="Corrida 5K";
						mostrar(prova);
						sair=1;
					break;
					case '4':
						prova="Corrida 10K";
						mostrar(prova);
						sair=1;
					break;
					case '5':
						prova="Corrida 21K";
						mostrar(prova);
						sair=1;
					break;
					default:
						cout<< "\nOpção inválida.";
					break;
				}
				}while(sair==0);
				sair=0;
		break;
		
		//Case 3: Busca pelo nº de inscrição do participante na Fila
		//e edita suas informações de acordo com o que o usuário pedir.
		case '3':
			cout<<"\nInsira o número da inscrição: ";
			cin>>n;
			num=inscrito(n);
			do{
				if(num==true){
				cout<<"\n1- Nome.";
				cout<<"\n2- Cpf.";
				cout<<"\n3- Camiseta.";
				cout<<"\n4- Prova.";
				cout<<"\n5- Inscrição efetivada.";
				cout<<"\nSelecione oque quer editar: ";
				cin>>ediop;
				
					switch(ediop){
						case'1':
							sair=1;
							encontrar(n,ediop);
						break;
						
						case'2':
							sair=1;
							encontrar(n,ediop);
						break;
						
						case'3':
							sair=1;
							encontrar(n,ediop);
						break;
						
						case'4':
							sair=1;
							encontrar(n,ediop);
						break;
						
						case'5':
							encontrar(n,ediop);
						break;
						
						default:
							cout<<"\nOpção inválida!";
						break;
					}
				}
				else{
					cout<<"\nNúmero de inscrição não encontrado..";
					sair=1;
				}
			}while(sair=0);
			sair=0;
			
		break;
		
		//Case 4: Mostra todos os aprticipantes os separando em quem pagou e quem ainda nao pagou.
		case '4':
			mostrarvalidados();
			sair=0;
		break;
		
		//Case 5: Mostra a quantidade de perticipantes em cada categoria
		//que estão elegiveis a ganhar medalha.
		case '5':
			ganhamedalha();
			sair=0;
		break;
		
		//Case 6: Mostra a quantidade de camkisetas a serem entreges no começo da prova
		//para cada categoria de prova.
		case '6':
			camisetas();
			sair=0;
		break;
		
		//Case 7: È o interruptor do sistema que o faz parar.
		case '7':
			cout<<"\nVocê saiu!";
			sair=1;
		break;
		
		//Default: Caso o Usuario digite uma opção invalida.
		default:
			cout<<"\nOpção inválida.";
		break;

	}
	}while(sair==0);
	//Limpeza de Memória quando o programa é finalizado :).
	limpar_memorias();	
	return 0;
}
