Algoritmo "MediaPonderada"
// Disciplina   : [Linguagem e L�gica de Programa��o]
// Professor   : Antonio Carlos Nicolodi 
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 26/02/2019
Var
// Se��o de Declara��es das vari�veis
 n1, n2, n3, media: real

Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 
   escreval("Insira a nota 1:")
   leia(n1)
   
   escreval("Insira a nota 2:")
   leia(n2)
   
   escreval("Insira a nota 3:")
   leia(n3)
   

   media <- (n1+n2*2+n3*3)/6

   escreva ("A m�dia �:",media:3:0)   //:3= numero de digitos que ser� mostrado
                                      //:2= numero de casas decimais
Fimalgoritmo