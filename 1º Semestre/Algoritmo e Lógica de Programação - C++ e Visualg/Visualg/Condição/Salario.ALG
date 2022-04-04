Algoritmo "semnome"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 12/03/2019
Var
// Seção de Declarações das variáveis 
salario,salarioliq,horas,valorh,desconto,reajuste: real

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
   escreval ("Insira as horas trabalhadas:")
   leia (horas)
   
   escreval ("Insira o valor pela hora:")
   leia(valorh)
   
   escreval ("Insira os descontos:")
   leia(desconto)
   
   
   salario<-horas*valorh
   salarioliq<-salario-desconto
   
   escreval ("O salario é:" ,salario:1:2)
   escreval ("O salario liquido sem reajuste é:" ,salarioliq:1:2)
   
   Se (salarioliq>=1000) Entao
   
   reajuste<-15*(salarioliq/100)
   salarioliq<-salarioliq+reajuste

   // também pode ser representado por
   //reajuste <- salarioliq *0.15
   //salarioliq <- salarioliq+reajuste
   
   //ou
   
   //salarioliq<-salarioliq+salarioliq*0.15
   senao
   
   reajuste<-20*(salarioliq/100)
   salarioliq<-salarioliq+reajuste

   Fimse

   escreval ("O reajuste é:",reajuste:1:2)
   escreval ("o salario líquido com reajuste é:" ,salarioliq:1:2)

Fimalgoritmo