Algoritmo "pescador"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 19/03/2019
Var
// Seção de Declarações das variáveis 
p ,m, ex: real

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc...
escreval("Insira o peso dos peixes:")
leia(p)

Se (p>50) então
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