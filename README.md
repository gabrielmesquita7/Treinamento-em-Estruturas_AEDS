<h1 align="center">Treinamento em Estruturas (AEDS)</h1>


<p align="center">Grupo: Gabriel Mesquita || Gabriel Marcondes || Marinêz Werneck || Ygor Santos</p>
<h1 align="center"> 
  https://contrib.rocks/preview
</h1>
<p style = "font-size:160%;" align="center">
  <a href="#lista">Lista</a> -
  <a href="#pilha">Pilha</a> -
  <a href="#ila">Fila</a> 

</p>
 
# Lista
## Problema
### Considerando nossos modelos de lista (i.e., linear e dinâmica), realize as solicitações de implementação a seguir, considerando para isso estruturar sua solução da seguinte forma: i) Uma implementação por letra e; ii) Uma implementação magma que conecte todas as letras por um único menu para execução.
* A) Escreva uma função recursiva e outra não recursiva para contar o número de elementos
pares e impares contidos em uma lista dinâmica.
* B) Crie uma função que simule um pequeno jogo que utiliza duas listas (i.e., L1 e L2). Nesse,
cada lista possui tamanho máximo de 3 entradas e cada posição deve armazenar um
número inteiro aleatório entre 1 e 13. Nesse jogo, após preencher ambas as listas, sele-
cione também de forma aleatória mais um valor entre 1 e 13 e mostre-o na tela. A regra do
jogo é a seguinte: Ambas as listas devem ser apresentadas por leitura sequencial a par-
tir de suas posições de paridade, ou seja, {{L1[0], L2[0]}, {L1[1], L2[1]}, {L1[2], L2[2]}}.
Cada par deve ser subtraído do valor apresentado e ganha o jogo a lista que apresentar
a maior soma final. Mostre o ganhador ao final.
* C) Escreva uma função que receba duas listas x = [x1, x2, . . . , xn] e y = [y1, y2, . . . , yn] e
retorne uma lista z = [(x1, yn), (x2, yn−1, . . . , (xn, y1)]. Ao final, as listas x e y devem estar
vazias.
* D) Escreva uma função que receba pares de listas x = [x1, x2, . . . , xn] e y = [y1, y2, . . . , ym]
com n, m > 0 e n = m. Calcule a distância euclidiâna entre os múltiplos pares recebidos
e encontre os k pares mais próximos.
## Desenvolvimento
* **Para o desenvolvimento de todos os problemas propostos foi utilizado a *Lista Dinâmica* devido a flexibilidade na inserção e a facilidade no gerenciamento de várias listas** 
* **Devido a nenhum problema especificar a forma em que a lista seria preenchida *(exceto o problema B)*, foi utilizado em todas as listas a função rand() no range de 0 a 99 para o preenchimento, sendo que a cada execução é gerado numeros diferentes** 
### O problema foi desenvolvido da seguinte maneira:
* É definido pelo usuario o tamanho da **lista** atribuindo o valor para **nList** na função **define**. Esse valor irá definir o tamanho das lista dos problemas A,C e D

* ![image](https://user-images.githubusercontent.com/55333375/167706372-01a0bb6c-44d1-497e-8685-cdc1d21979c6.png)

* É apresentado ao usuário um menu em loop onde terá cada questão e a opção de sair, cada escolha é executada a função referente a opção e como dito anteriormente, a cada execução é gerado uma outra lista de numeros assim afetando no resultado dos problemas

### As vantagens do uso da lista dinâmica citadas anteriormente podem ser observadas nos seguintes funcões dentro do código:
* Flexibilidade na inserção:

* Gerenciamento de várias listas:

## Saida
### É esperado que as saidas sejam geradas a cada opção selecionada dentro do **switch case** e quando o usuario selecionar a opção de "Sair" seja printado "Saindo..." e termine a execução.

![image](https://user-images.githubusercontent.com/55333375/169157091-ad123db6-6269-486d-8870-19af47b68f1b.png)

![image](https://user-images.githubusercontent.com/55333375/169157174-5831f671-328f-4639-9323-971151271d97.png)

## Executar
* Como executar:

```
  make clean
  make
  make run
```

# Pilha

# Problemas Propostos
<div align="justify">
É de nosso conhecimento que a estrutura do tipo pilha define regras de manipulação que não podem ser modificadas e que essas são comumente citadas como ações de PUSH (empilhar) e POP (desempilhar). Sabendo-se disso e mediante as regras de desenvolvimento já apresentadas faça:
 <p></p>
<b>a)</b> Escreva uma função que receba uma equação matemática qualquer e retorne duas pilhas. Uma contendo os operandos empilhados da esquerda para a direita e outra contendo os operadores seguindo mesma linha de leitura.
	<p></p>
	
<b>b)</b> Considerando a função elaborada no item (a), crite uma segunda função que apresente a operação matemática em notação prefixa e posfixa. Veja alguns exemplos na tabela abaixo (i.e., Tabela 1.)
  <p></p>
  <div align="center">
  <b>Figure 1: Exemplos de escrita infixa, prefixa e posfixa</b>
  <div>

|   Expressão Infinita   |   Expressão Prefixa   |   Expressão Posfixa   |  
| -----------------------|-----------------------|-----------------------| 
|     A + B * C + D      |    ++ A * B  C  D     |      A B C * + D +    | 
|   (A + B) * (C + D)    |    *+ A  B + C  D     |      A B + C D + *    | 
|     A * B + C * D      |    +* A  B * C  D     |      A B * C D * +    | 
|     A + B + C + D      |    +++ A  B  C  D     |      A B + C + D +    | 

 </div>
 </div>

<b>c)</b> Elabore uma função que receba uma pilha P1 com 20 posições preenchidas por números inteiros aleatórios entre 1 e 99. Para cada número da pilha, utilize a função totiente de Euler para encontrar para esse número os co-primos. Mostre-os na tela como resultado de sua execução.
  <p></p>
<b>d)</b> Crie uma função para realizar o calculo de fibonacci para um valor de N. Contudo, utilize uma pilha para armazenar os pré resultados, utilizando-os para outros calculos sempre que possível. Para tanto, considere manter no topo da pilha o cálculo para o valor de (n-1). Crie uma forma de identificar para qual n-1 o valor foi cálculado para não utilizar valores incorretos para calculos longos. Feito isso responda: Manter os cálculos em pilha pode ajudar a economizar computações? Quando seria melhor empregado?
</div>

# Algoritmo

  

- Caso A

<dd>É informado pelo usuario a equação e digitado "=" para finalizar, como no exemplo :

<img> <img align="center" src="../Treinamento-em-Estruturas_AEDS/Pilha/img/img1.jpeg
"/>

Os operadores são : "+" "-" "/" "*" 

</dd>
- Caso B
<dd>

No caso B o usuario deverá informar qualquer uma das equações abaixo: 

<div align="center">
  <b>Figure 2: Exemplos de escrita infixa, prefixa e posfixa</b>
  <div>

|   Expressão Infinita   |   Expressão Prefixa   |   Expressão Posfixa   |  
| -----------------------|-----------------------|-----------------------| 
|     A + B * C + D      |    ++ A * B  C  D     |      A B C * + D +    | 
|   (A + B) * (C + D)    |    *+ A  B + C  D     |      A B + C D + *    | 
|     A * B + C * D      |    +* A  B * C  D     |      A B * C D * +    | 
|     A + B + C + D      |    +++ A  B  C  D     |      A B + C + D +    | 

 </div>
 </div>

<img> <img align="center" src="../Treinamento-em-Estruturas_AEDS/Pilha/img/img2.jpeg
"/>

</dd>
- Caso C:
<dd>
  - A função feita é preenchida por valores alatórios de 0 a 99, até que atinja seu tamanho máximo,ou seja,20 posições; 
 
 <img> <img align="center" src="../Treinamento-em-Estruturas_AEDS/Pilha/img/img3.jpeg
"/>
</dd>

- Caso D:
<dd>
  <img> <img align="center" src="../Treinamento-em-Estruturas_AEDS/Pilha/img/img4.jpeg
"/>
</dd>

## Perguntas:

<div align="justify">

<dl>
	<strong>Manter os cálculos em pilha pode ajudar a economizar computações?</strong>
	<dd> Sim. Para valores maiores que N a partir do calculo de Fibonacci 
  continua em N. Já menores que o N, é preocurado e achado o valor que se assemelha.
  </dd>
	<strong>Quando seria melhor empregado?</strong>
	<dd> Quando o cálculo for menor que n, possibilitando a busca ser realizada apenas uma vez.</dd>	
</dl>
</div>


# Compilação e Execução

O algoritmo de pilhas disponibilizado possui alguns erros de compilação, um deles não possibilitando a execução no Makefile. A tentativa de usar strrev definido pela ISO e não pelo microsoft toolchain impossibilita a compilação e execução pelo sistema operacional Linux. A compilação deverá ser feita no Windowns usando o git BASH como terminal para a execução.
Deverá ser inserido os três comandos apresentados abaixos para a compilação, mensagens de Warnings deverão ser desconsideradas.

<div>

| Comando                |                                                                                            |
| -----------------------| ------------------------------------------------------------------------------------------------- |
|  `gcc -c -Wall -g main.c`          |                                        |
|  `gcc -g -o main.exe main.o`                |          |
|  `./main.exe`            |                              |

</div>


# Fila
