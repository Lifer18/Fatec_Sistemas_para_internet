Algoritmo "Area_perimetro"
// Disciplina   : [Linguagem e L�gica de Programa��o]
// Professor   : Antonio Carlos Nicolodi 
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 26/02/2019
Var
// Se��o de Declara��es das vari�veis
 comprimento, largura, area, perimetro: real

Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 
   escreval("Insira o comprimento em metros")
   leia(comprimento)
   
   escreval("Insira a largura em metros")
   leia(largura)

   area <- comprimento * largura
   
   perimetro <- 2 * (comprimento + largura)

   escreva ("A �rea �:",area)
   
   escreval ("O perimetro �:",perimetro)
Fimalgoritmo