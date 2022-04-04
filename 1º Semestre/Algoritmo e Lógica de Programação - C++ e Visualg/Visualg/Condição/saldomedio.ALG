Algoritmo "saldomedio"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 26/03/2019
Var
// Seção de Declarações das variáveis 
saldo,  credito:real

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc...
   escreval("Insira o saldo médio do cliente")
   leia(saldo)

           Se (saldo>=0) e (saldo<=200) entao
           escreval("O cliente não receberá nenhum crédito!")
           
           senao
           se (saldo>=201) e (saldo<=400) entao
           credito<-(0.2*saldo)
           escreval("O crédito do cliente é:", credito:1:2)
           
           senao
           se (saldo>=401) e (saldo<=600) entao
           credito<-(0.3*saldo)
           escreval("O crédito do cliente é:", credito:1:2)
           
           senao
           se (saldo>=601) entao
           credito<-(0.4*saldo)
           escreval("O crédito do cliente é:", credito:1:2)
           
           fimse
           fimse
           fimse
           fimse
           

           

           


Fimalgoritmo