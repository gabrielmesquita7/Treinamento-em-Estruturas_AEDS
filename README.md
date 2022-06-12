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

# Fila
