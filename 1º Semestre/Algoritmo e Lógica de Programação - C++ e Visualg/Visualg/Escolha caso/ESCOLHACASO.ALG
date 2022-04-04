Algoritmo "escolhacaso"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 26/03/2019
Var
// Seção de Declarações das variáveis 
opcao: inteiro
num,num2,result: real

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc...
repita
   limpatela
   escreval("1 - Somar")
   escreval("2 - Subtrair")
   escreval("3 - Multiplicar")
   escreval("4 - Dividir")
   escreval("5 - Sair")
   escreval("Digite uma opção:")
   leia(opcao)
   escolha(opcao)
    caso 1
   escreval("Digite o primeiro número")
   leia(num)
   escreval("Digite o segundo número")
   leia(num2)
   result<-num+num2
   escreval("O resultado é:",result:1:2)
   escreval("Pressione f9 para continuar")
   pausa
   
    caso 2
    escreval("Digite o primeiro número")
   leia(num)
   escreval("Digite o segundo número")
   leia(num2)
   result<- num-num2
   escreval("O resultado é:",result:1:2)
   escreval("Pressione f9 para continuar")
   pausa
   
    caso 3
   escreval("Digite o primeiro número")
   leia(num)
   escreval("Digite o segundo número")
   leia(num2)
   result<- num*num2
   escreval("O resultado é:",result:1:2)
   escreval("Pressione f9 para continuar")
   pausa
   
    caso 4
   escreval("Digite o primeiro número")
   leia(num)
   escreval("Digite o segundo número")
   leia(num2)
   result<- num/num2
   escreval("O resultado é:",result:1:2)
   escreval("Pressione f9 para continuar")
   pausa
    
    caso 5
   escreval("Você saiu")
   
    outrocaso
              escreval("Opçao inválida")
   escreval("Pressione f9 para continuar")
   pausa
    

   fimescolha
   ate opcao=5



Fimalgoritmo