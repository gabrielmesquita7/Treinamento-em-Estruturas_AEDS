#include "fila.h"

#define modulo(X)(X >= 0 ? X : -(X))

void FFVazia(tFila *f)
{
	f->first = (tBlock *)malloc(sizeof(tBlock));
	f->last = f->first;
	f->first->prox = NULL;
}

void Enfileira(tFila *f, tItem pos)
{
	f->last->prox = (tBlock *)malloc(sizeof(tBlock));
	f->last = f->last->prox;
	f->last->pos = pos;
	f->last->prox = NULL;
}

void Desenfileira(tFila *f, tItem *pos)
{
	tBlock *aux;

	if (f->first == f->last || f == NULL || f->first->prox == NULL)
	{
		printf("FILA VAZIA!\n");
		return;
	}

	aux = f->first->prox;
	f->first->prox = aux->prox;
	pos->x = aux->pos.x;
	pos->y = aux->pos.y;
	free(aux);
}

void FImprime(tFila *f)
{
	tBlock *aux;

	aux = f->first->prox;
	while (aux != NULL)
	{
		printf("%d %d\n", aux->pos.x, aux->pos.y);
		aux = aux->prox;
	}
}

void ImprimirMatriz(int tam, int **matriz)
{
	
	for (int i = 0; i < tam; i++)
	{
		printf("\n");
		for (int j = 0; j < tam; j++)
		{
			if (matriz[i][j] == -1) {
				printf("#\t");
			} else {
				printf("%d\t", matriz[i][j]);
			}
		}
	}
	printf("\n\n");
}

void CriarFila(tFila *f, tFila *u, int n)
{
	tItem aux;
	int i;

	for (i = 0; i < n; i++)
	{
		aux.y = rand() % 100;
		Enfileira(f, aux);
	}		
	for (i = 0; i < n; i++){
		aux.y = rand() % 100;
		Enfileira(u, aux);
	}

}

void BubbleSort(tFila *f){
	bool right = false;
	tBlock *aux2, *aux3 = NULL;

	tItem itm;

	do{
		right = false;
		aux2 = f->first;
		while(aux2->prox != aux3){
			if(aux2->pos.calc > aux2->prox->pos.calc)
			{
				itm = aux2->pos;
				aux2->pos = aux2->prox->pos;
				aux2->prox->pos = itm;
				right = true;
			}

			aux2 = aux2->prox;
		}
		aux3 = aux2;
	}while(right);
}

void SwapFila(tFila *f, tFila *u, int n){
	tItem aux;
	tFila f1, f2;
	int i;

	FFVazia(&f1);
	FFVazia(&f1);
	
	for(i = 0; i < (n/2); i++ )
	{
		Desenfileira(f, &aux);
		Enfileira(&f1, aux);
	}for(i = 0; i < (n/2); i++ ){
		Desenfileira(u, &aux);
		Enfileira(&f2, aux);
	}for(i = n/2; i < n; i++ )
	{
		Desenfileira(f, &aux);
		Enfileira(&f2, aux);
	}for(i = n/2; i < n; i++ )
	{
		Desenfileira(u, &aux);
		Enfileira(&f1, aux);
	}
	*f = f1;
	*u = f2;
}

void Calculo( tItem *c)
{
	//Uma equação qualquer
	c->calc = raiz((c->y *2)+ modulo(c->y)/2);
}

double raiz(double val) {
	double precisao = 0.000001;
	double res = 1;
	double b = val, a = 1;

	while((b - a) >= precisao) {
		b = (a + b) / 2;
		a = val / b;
	}
	return b;
}

double potencia(double val, double exp) {
	double res = 1;

	while(exp > 0) {
		res = res * val;
		exp--;
	}
	return res;
}
