Algoritmo "Lancheria"

Var
// Se��o de Declara��es das vari�veis
opcao, quantidade: inteiro
preco: real


Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc...
repita
limpatela
escreval("Escolha um produto:")
escreval("Cachorro quente -  100")
escreval("Bauru simples -  101")
escreval("Bauru com ovo -  102")
escreval("Hamb�rger -  103")
escreval("Cheeseburguer -  104")
escreval("Refrigerante -  105")
escreval("Sair - 1")
escreval("Digite o c�digo do produto:")
leia(opcao)


           escolha(opcao)
           
           caso 100
           escreval("Digite a quantidade")
           leia(quantidade)
           preco<-quantidade*1.20
           escreval("O pre�o �: R$",preco:1:2)
           escreval("Pressione f9 para continuar")
           pausa
           
           caso 101
           escreval("Digite a quantidade")
           leia(quantidade)
           preco<-quantidade*1.30
           escreval("O pre�o �: R$",preco:1:2)
           escreval("Pressione f9 para continuar")
           pausa
           
           caso 102
           escreval("Digite a quantidade")
           leia(quantidade)
           preco<-quantidade*1.50
           escreval("O pre�o �: R$",preco:1:2)
           escreval("Pressione f9 para continuar")
           pausa
           
           caso 103
           escreval("Digite a quantidade")
           leia(quantidade)
           preco<-quantidade*1.20
           escreval("O pre�o �: R$",preco:1:2)
           escreval("Pressione f9 para continuar")
           pausa
           
           caso 104
           escreval("Digite a quantidade")
           leia(quantidade)
           preco<-quantidade*1.30
           escreval("O pre�o �: R$",preco:1:2)
           escreval("Pressione f9 para continuar")
           pausa
           
           caso 105
           escreval("Digite a quantidade")
           leia(quantidade)
           preco<-quantidade*1
           escreval("O pre�o �: R$",preco:1:2)
           escreval("Pressiona f9 para continuar")
           pausa
           
           caso 1

           escreval("Voc� saiu!")

           
           outrocaso
           escreval("C�digo inv�lido, tente novamente!")
           escreval("Pressiona f9 para continuar")
           pausa

          fimescolha
          ate opcao=1
Fimalgoritmo