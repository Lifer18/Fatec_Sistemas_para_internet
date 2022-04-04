Algoritmo "MediaPonderada"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 26/02/2019
Var
// Seção de Declarações das variáveis
 n1, n2, n3, media: real

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
   escreval("Insira a nota 1:")
   leia(n1)
   
   escreval("Insira a nota 2:")
   leia(n2)
   
   escreval("Insira a nota 3:")
   leia(n3)
   

   media <- (n1+n2*2+n3*3)/6

   escreva ("A média é:",media:3:0)   //:3= numero de digitos que será mostrado
                                      //:2= numero de casas decimais
Fimalgoritmo