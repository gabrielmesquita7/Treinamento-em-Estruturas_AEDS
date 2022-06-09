#ifndef LISTA_H 
#define LISTA_H

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<time.h>
#include<math.h>

#define nList 10 //define o tamanho da lista gerada nos exercicios A, C E D.

typedef struct Item Item;
typedef struct Block Block;
typedef struct Lista Lista;

struct Item{
	int val;
	int valz;
};

struct Block{
	Item data;
	Block *prox;
};

struct Lista{
	Block *first;
	Block *last;
};


void FLVazia(Lista *l);
void LInsert(Lista *l, Item d);
void LRemove(Lista *l, Item d);
void Swap(Block *a, Block *b);
void LImprime(Lista *l);
void LImprimePARES(Lista *l1, Lista *l2);
void LImprimeZ(Lista *l);
void Conta_PAR_IMPAR(Lista *l);
void Conta_PAR_IMPAR_Recursive(Lista *l, Block *auxb, int tam, int impar, int par);
void Jogo(Lista *l1, Lista *l2);
void ListaZ(Lista *l1, Lista *l2, Lista *l3);
void Numerosmaisproximos(float vet[], int n);
void DistEuclidiana(Lista *l1, Lista *l2);


#endif