Algoritmo "media ponderada"
// Disciplina   : [Linguagem e L�gica de Programa��o]
// Professor   : Antonio Carlos Nicolodi 
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 19/03/2019
Var
// Se��o de Declara��es das vari�veis 

media, mat, port, bio, hist : real

Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc...
escreval ("Insira a nota de portugu�s:")
leia (port)

escreval ("Insira a nota de matem�tica:")
leia (mat)

escreval ("Insira a nota de biologia:")
leia (bio)

escreval ("Insira a nota de hist�ria:")
leia (hist)

media <- (port*3+mat*3+bio*2+hist*2)/(3+3+2+2)


Se (media>=7) entao
     Escreval("Aprovado!!")

Senao
     Se(media>=5) ent�o
     escreval("Recupera��o!!")
     Sen�o
     Escreval("Reprovado!!")
     fimse
Fimse

     escreval("A media foi:",media:1:2)

Fimalgoritmo