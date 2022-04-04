Algoritmo "Area_perimetro"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 26/02/2019
Var
// Seção de Declarações das variáveis
 comprimento, largura, area, perimetro: real

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
   escreval("Insira o comprimento em metros")
   leia(comprimento)
   
   escreval("Insira a largura em metros")
   leia(largura)

   area <- comprimento * largura
   
   perimetro <- 2 * (comprimento + largura)

   escreva ("A área é:",area)
   
   escreval ("O perimetro é:",perimetro)
Fimalgoritmo