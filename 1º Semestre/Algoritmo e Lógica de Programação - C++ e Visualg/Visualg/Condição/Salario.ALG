Algoritmo "semnome"
// Disciplina   : [Linguagem e L�gica de Programa��o]
// Professor   : Antonio Carlos Nicolodi 
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 12/03/2019
Var
// Se��o de Declara��es das vari�veis 
salario,salarioliq,horas,valorh,desconto,reajuste: real

Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 
   escreval ("Insira as horas trabalhadas:")
   leia (horas)
   
   escreval ("Insira o valor pela hora:")
   leia(valorh)
   
   escreval ("Insira os descontos:")
   leia(desconto)
   
   
   salario<-horas*valorh
   salarioliq<-salario-desconto
   
   escreval ("O salario �:" ,salario:1:2)
   escreval ("O salario liquido sem reajuste �:" ,salarioliq:1:2)
   
   Se (salarioliq>=1000) Entao
   
   reajuste<-15*(salarioliq/100)
   salarioliq<-salarioliq+reajuste

   // tamb�m pode ser representado por
   //reajuste <- salarioliq *0.15
   //salarioliq <- salarioliq+reajuste
   
   //ou
   
   //salarioliq<-salarioliq+salarioliq*0.15
   senao
   
   reajuste<-20*(salarioliq/100)
   salarioliq<-salarioliq+reajuste

   Fimse

   escreval ("O reajuste �:",reajuste:1:2)
   escreval ("o salario l�quido com reajuste �:" ,salarioliq:1:2)

Fimalgoritmo