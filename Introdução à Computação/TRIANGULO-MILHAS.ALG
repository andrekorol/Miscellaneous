Algoritmo "triangulo"

// Disciplina   : [Linguagem e Lógica de Programação] 
// Professor    : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 16/3/2017
Var
// Seção de Declarações das variáveis 
base, altura, area,polegadas, jardas, milhas :real

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
escreva("Entre o valor da base do triângulo, em pés")
leia(base)
escreval("Agora entre o valor da altura do triângulo, em pés")
leia(altura)
area <- (base * altura) / 2
escreval("A área do triângulo é igual a: ")
escreval(area, "pés")

polegadas <- area * 12
jardas <- (1.0 / 3.0) * pes
milhas <- (1.0 / 1760) * jardas

escreval(polegadas, "polegadas")
escreval(jardas, "jardas")
escreval(milhas, "milhas")

Fimalgoritmo