Algoritmo "nadador"
// Disciplina   : [Linguagem e L�gica de Programa��o]
// Professor   : Antonio Carlos Nicolodi 
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 19/03/2019
Var
// Se��o de Declara��es das vari�veis 
idade : real

Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 
escreval("Digite a idade do nadador:")
leia(idade)
limpatela
Se (idade>=5) ent�o
   Se(idade<=7) ent�o
   escreval("O aluno � da categoria infantil A")
       senao
       Se(idade<=10) ent�o
      escreval("O aluno � da categoria infantil B")
          senao
          Se(idade<=13) ent�o
         escreval("O aluno � da categoria juvenil A")
             senao
             Se(idade<=17) ent�o
            escreval("O aluno � da categoria juvenil B")
             senao
                Se(idade>=18) ent�o
               escreval("O aluno � da categoria adulto")
               fimse
            fimse
         fimse
      fimse
   fimse
Sen�o
   escreval("Idade inv�lida!")
fimse

Fimalgoritmo