Algoritmo "saldomedio"
// Disciplina   : [Linguagem e L�gica de Programa��o]
// Professor   : Antonio Carlos Nicolodi 
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 26/03/2019
Var
// Se��o de Declara��es das vari�veis 
saldo,  credito:real

Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc...
   escreval("Insira o saldo m�dio do cliente")
   leia(saldo)

           Se (saldo>=0) e (saldo<=200) entao
           escreval("O cliente n�o receber� nenhum cr�dito!")
           
           senao
           se (saldo>=201) e (saldo<=400) entao
           credito<-(0.2*saldo)
           escreval("O cr�dito do cliente �:", credito:1:2)
           
           senao
           se (saldo>=401) e (saldo<=600) entao
           credito<-(0.3*saldo)
           escreval("O cr�dito do cliente �:", credito:1:2)
           
           senao
           se (saldo>=601) entao
           credito<-(0.4*saldo)
           escreval("O cr�dito do cliente �:", credito:1:2)
           
           fimse
           fimse
           fimse
           fimse
           

           

           


Fimalgoritmo