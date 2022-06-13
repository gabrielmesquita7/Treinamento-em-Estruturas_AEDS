<h1 align="center">Treinamento em Estruturas (AEDS)</h1>


<p align="center">Grupo: Gabriel Mesquita || Gabriel Marcondes || Marinêz Werneck || Ygor Santos</p>
<p style = "font-size:160%;" align="center">
  <a href="#lista">Lista</a> -
  <a href="#pilha">Pilha</a> -
  <a href="#fila">Fila</a> 

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

* ![image](https://user-images.githubusercontent.com/55333375/172922180-2e8aaf19-2aff-49b5-86a4-854459b4b5af.png)

* É apresentado ao usuário um menu em loop onde terá cada questão e a opção de sair, cada escolha é executada a função referente a opção e como dito anteriormente, a cada execução é gerado uma outra lista de numeros assim afetando no resultado dos problemas

![image](https://user-images.githubusercontent.com/55333375/172922642-de32e74b-464e-419e-9ad6-cd744f320eda.png)
![image](https://user-images.githubusercontent.com/55333375/172922732-42dc005f-3800-4e69-b6e6-ba9af26412fd.png)


## Saida
### É esperado que as saidas sejam geradas a cada opção selecionada dentro do **switch case** e quando o usuario selecionar a opção de "Sair" seja printado "Saindo..." e termine a execução.

![image](https://user-images.githubusercontent.com/55333375/172926052-e6626bf0-34a0-4d6c-bc85-9cb798ab5383.png)
![image](https://user-images.githubusercontent.com/55333375/172926115-9748fe3e-82c4-4aff-a8ba-ee1ce3d3b0d9.png)
![image](https://user-images.githubusercontent.com/55333375/172926183-9c66d8d6-f9e2-4d8f-85f9-7815b3ed3f63.png)
![image](https://user-images.githubusercontent.com/55333375/172926237-80a5319b-0c1e-4d63-abc7-d3672700668f.png)
![image](https://user-images.githubusercontent.com/55333375/172926296-250080c0-e0f2-4a92-917e-8f55a5ce2975.png)


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

![img1](https://user-images.githubusercontent.com/55333375/173265795-5fd8f330-2317-4b34-8c3d-17678aed30a6.jpeg)



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

![img2](https://user-images.githubusercontent.com/55333375/173265828-5f84cc7b-c48d-46ad-a966-700c94bc3a55.jpeg)



</dd>
- Caso C:
<dd>
  - A função feita é preenchida por valores alatórios de 0 a 99, até que atinja seu tamanho máximo,ou seja,20 posições; 
 
![img3](https://user-images.githubusercontent.com/55333375/173265836-9a25cbd2-f91a-4e43-a008-6d0e0b9481d7.jpeg)

</dd>

- Caso D:
<dd>
	
![img4](https://user-images.githubusercontent.com/55333375/173266016-1d2ddf5d-6b29-4747-849d-c9fafc4e604f.jpeg)

	
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

# Problema Proposto 

Uma estrutura baseada em fila tem por definição a regra de sempre remover do início e inserir
novos elementos no final. Sabendo-se disso, vamos praticar a utilização desse conceito nos
seguintes problemas:

*a*: Escreva uma função que receba pares de filas, ambas de tanho n, divida ambas ao meio
e ligue as metades para compor duas novas filas, as quais devem ser retornadas para o
usuário. Tais filas devem ser definidas como dinâmicas.

*b*: Escreva uma função que aplica uma equação matemática qualquer aos numeros de uma ˜
fila. Essa equação tem por objetivo produzir um indexador para a fila dada como entrada,
logo, precisa ser retornado junto com a fila para o usuário.

*c*: Elabore uma função que receba um conjunto de filas, todas com valores de indexação
conforme item (b). Ordene esse grupo de filas pelo método da bolha e as retorne ao
usuário considerando o maior valor de indexação como cabeça dessa ordem.

# Algoritmo 

Primeiramente foi desenvolvida uma função para a criar uma lista randomica:
![criar](https://user-images.githubusercontent.com/56900319/173270605-31d3a221-2fff-4944-a7c9-cca12c7befe1.png)

Em seguida foi utilizado a função Swapfila que divide os pares de filas atribui essas divisões a filas auxiliares e liga suas metades para compor duas novas filas para solução do problema "a":
![carbon](https://user-images.githubusercontent.com/56900319/173270632-87891655-8f33-4e42-8e6b-32f759f3ffdb.png)

Uma função de calculo qualquer foi aplicada para a execução do problema "b":
![calc](https://user-images.githubusercontent.com/56900319/173270904-ec7c7165-f1aa-495b-a85b-657e95707192.png)

Por fim para o problema "c" foi utilizado o metodo de ordenação BubbleSort para ordenar a fila:
![bubble](https://user-images.githubusercontent.com/56900319/173270624-dfbe7939-d549-4cb8-836a-6dc16a98e9f6.png)
