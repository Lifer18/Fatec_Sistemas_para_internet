Algoritmo "pescador"
// Disciplina   : [Linguagem e L�gica de Programa��o]
// Professor   : Antonio Carlos Nicolodi 
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 19/03/2019
Var
// Se��o de Declara��es das vari�veis 
p ,m, ex: real

Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc...
escreval("Insira o peso dos peixes:")
leia(p)

Se (p>50) ent�o
ex <- p-50
m <- ex*4
Senao
ex<-0
m<-0
limpatela
fimse
escreval ("O peso dos peixes foi:", p:1:2)
escreval ("O excedente do peso foi:", ex:1:2, " E a multa foi de R$",m:1:2)


Fimalgoritmo