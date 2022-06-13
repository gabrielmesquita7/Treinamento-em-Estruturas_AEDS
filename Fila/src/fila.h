#ifndef FILA_H 
#define FILA_H

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct Item tItem;
typedef struct Block tBlock;
typedef struct Fila tFila;

struct Item{
	int x;
	int y;
	int valor;
	float calc;
};

struct Block{
	tItem pos;
	tBlock *prox;
};

struct Fila{
	tBlock *first;
	tBlock *last;
};


void FFVazia(tFila *f);
void Enfileira(tFila *f, tItem pos);
void Desenfileira(tFila *f, tItem *pos);
void FImprime(tFila *f);
void ImprimirMatriz(int tam, int **matriz);
void CriarFila(tFila *f, tFila *u, int n);
void BubbleSort(tFila *f);
void TrocaFila(tFila *f, tFila *u, int n);
void Calculo( tItem *c);

double raiz(double val);
double potencia(double val, double exp);

#endif
