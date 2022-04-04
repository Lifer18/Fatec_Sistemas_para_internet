Algoritmo "nadador"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 19/03/2019
Var
// Seção de Declarações das variáveis 
idade : real

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
escreval("Digite a idade do nadador:")
leia(idade)
limpatela
Se (idade>=5) então
   Se(idade<=7) então
   escreval("O aluno é da categoria infantil A")
       senao
       Se(idade<=10) então
      escreval("O aluno é da categoria infantil B")
          senao
          Se(idade<=13) então
         escreval("O aluno é da categoria juvenil A")
             senao
             Se(idade<=17) então
            escreval("O aluno é da categoria juvenil B")
             senao
                Se(idade>=18) então
               escreval("O aluno é da categoria adulto")
               fimse
            fimse
         fimse
      fimse
   fimse
Senão
   escreval("Idade inválida!")
fimse

Fimalgoritmo