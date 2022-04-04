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

   media <- (n1+n2)/2
   
   //Se a média for maior que ou igual a 5
   // o aluno estará aprovado
   
   Se (media>=5) Então
      escreval ("O aluno está aprovado")


   Fimse
   
   escreval("Media final:", media)
Fimalgoritmo