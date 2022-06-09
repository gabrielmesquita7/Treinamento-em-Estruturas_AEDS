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

# Fila
