Algoritmo "escolhacaso"
// Disciplina   : [Linguagem e L�gica de Programa��o]
// Professor   : Antonio Carlos Nicolodi 
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 26/03/2019
Var
// Se��o de Declara��es das vari�veis 
opcao: inteiro
num,num2,result: real

Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc...
repita
   limpatela
   escreval("1 - Somar")
   escreval("2 - Subtrair")
   escreval("3 - Multiplicar")
   escreval("4 - Dividir")
   escreval("5 - Sair")
   escreval("Digite uma op��o:")
   leia(opcao)
   escolha(opcao)
    caso 1
   escreval("Digite o primeiro n�mero")
   leia(num)
   escreval("Digite o segundo n�mero")
   leia(num2)
   result<-num+num2
   escreval("O resultado �:",result:1:2)
   escreval("Pressione f9 para continuar")
   pausa
   
    caso 2
    escreval("Digite o primeiro n�mero")
   leia(num)
   escreval("Digite o segundo n�mero")
   leia(num2)
   result<- num-num2
   escreval("O resultado �:",result:1:2)
   escreval("Pressione f9 para continuar")
   pausa
   
    caso 3
   escreval("Digite o primeiro n�mero")
   leia(num)
   escreval("Digite o segundo n�mero")
   leia(num2)
   result<- num*num2
   escreval("O resultado �:",result:1:2)
   escreval("Pressione f9 para continuar")
   pausa
   
    caso 4
   escreval("Digite o primeiro n�mero")
   leia(num)
   escreval("Digite o segundo n�mero")
   leia(num2)
   result<- num/num2
   escreval("O resultado �:",result:1:2)
   escreval("Pressione f9 para continuar")
   pausa
    
    caso 5
   escreval("Voc� saiu")
   
    outrocaso
              escreval("Op�ao inv�lida")
   escreval("Pressione f9 para continuar")
   pausa
    

   fimescolha
   ate opcao=5



Fimalgoritmo