Algoritmo "media ponderada"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 19/03/2019
Var
// Seção de Declarações das variáveis 

media, mat, port, bio, hist : real

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc...
escreval ("Insira a nota de português:")
leia (port)

escreval ("Insira a nota de matemática:")
leia (mat)

escreval ("Insira a nota de biologia:")
leia (bio)

escreval ("Insira a nota de história:")
leia (hist)

media <- (port*3+mat*3+bio*2+hist*2)/(3+3+2+2)


Se (media>=7) entao
     Escreval("Aprovado!!")

Senao
     Se(media>=5) então
     escreval("Recuperação!!")
     Senão
     Escreval("Reprovado!!")
     fimse
Fimse

     escreval("A media foi:",media:1:2)

Fimalgoritmo