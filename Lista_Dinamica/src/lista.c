#include "lista.h"

void Swap(Block *a, Block *b){
	Item aux;
	aux = a->data;
	a->data = b->data;
	b->data = aux;
	
}

void FLVazia(Lista *l){
	l->first = (Block*) malloc (sizeof(Block));
	l->last  = l->first;
	l->first->prox = NULL;
}

void LInsert(Lista *l, Item d){
	l->last->prox = (Block*) malloc (sizeof(Block));
	l->last = l->last->prox;
	l->last->data = d;
	l->last->prox = NULL;
}

void LRemove(Lista *l, Item d){
	Block *aux, *tmp;

	if(l->first == l->last || l == NULL || l->first->prox == NULL){
		printf("LISTA VAZIA!\n");
		return;
	}
	
	aux = l->first;
	while(aux->prox != NULL){
		if (aux->prox->data.val == d.val){
			tmp = aux;
			aux = aux->prox;
			tmp->prox = aux->prox;
			if (aux == l->last)
				l->last = tmp;
			free(aux);
			aux->prox = NULL;
		}
		else
			aux = aux->prox;
	}
}


void LImprime(Lista *l){
	Block *aux;

	aux = l->first->prox;
	while(aux != NULL){
		printf("%d\t", aux->data.val);
		aux = aux->prox;
	}
}

void LImprimeZ(Lista *l){
	Block *aux;

	aux = l->first->prox;
	while(aux != NULL){
		printf("(%d,%d),", aux->data.val, aux->data.valz);
		aux = aux->prox;
	}
}

void LImprimePARES(Lista *l1, Lista *l2){
	Block *aux1;
	Block *aux2;

	aux1 = l1->first->prox;
	aux2 = l2->first->prox;
	while(aux1 != NULL && aux2 != NULL){
		printf("{%d,%d},", aux1->data.val, aux2->data.val);
		aux1 = aux1->prox;
		aux2 = aux2->prox;
	}
}

void Conta_PAR_IMPAR(Lista *l){
	int par=0, impar=0;
	Block *auxb;
	Item aux;

	srand((unsigned)time(NULL));
	for(int i=0;i<nList;i++){
		aux.val = rand() % 99;
		LInsert(l, aux);
	}

	auxb = l->first;
	while(auxb->prox != NULL){
		if(auxb->prox->data.val % 2 == 0){
			par++;
			auxb = auxb->prox;
		}else{
			impar++;
			auxb = auxb->prox;
		}
	}

	LImprime(l);
	printf("\n");
	printf("Par: %d \nImpar: %d \n", par, impar);
}

void Conta_PAR_IMPAR_Recursive(Lista *l, Block *auxb, int tam, int impar, int par){
	if(tam == nList){
		auxb = l->first;
	}
	if(tam == 0){
		LImprime(l);
		printf("\n\n");
		printf("Par: %d \nImpar: %d \n", par, impar);
		return;
	}else{
		while(auxb->prox != NULL){
			if(auxb->prox->data.val % 2 == 0){
				auxb = auxb->prox;
				return Conta_PAR_IMPAR_Recursive(l, auxb, tam - 1, impar, par + 1);
			}else{
				auxb = auxb->prox;
				return Conta_PAR_IMPAR_Recursive(l, auxb, tam - 1, impar + 1, par);
			}
		}
	}
}

void Jogo(Lista *l1, Lista *l2){
	Item aux;
	Block *aux1;
	Block *aux2;
	int va, soma1 = 0, soma2 = 0;

	srand((unsigned)time(NULL));
	for(int i=0;i<3;i++){
		aux.val = 1 + (rand() % 13);
		LInsert(l1, aux);
	}
	for(int i=0;i<3;i++){
		aux.val = 1 + (rand() % 13);
		LInsert(l2, aux);
	}

	va = 1 + (rand() % 13);
	printf("Valor aleatorio: %d\n", va);

	LImprimePARES(l1, l2);
	aux1 = l1->first->prox;
	aux2 = l2->first->prox;
	while(aux1 != NULL && aux2 != NULL){
		aux.val = aux1->data.val - va;
		aux1->data.val = aux.val;
		aux.val = aux2->data.val - va;
		aux2->data.val = aux.val;
		aux1 = aux1->prox;
		aux2 = aux2->prox;
	}
	printf("\nSubtraindo o valor aleatorio em cada par...\n");
	LImprimePARES(l1, l2);
	aux1 = l1->first->prox;
	aux2 = l2->first->prox;
	while(aux1 != NULL && aux2 != NULL){
		soma1 = soma1 + aux1->data.val;
		soma2 = soma2 + aux2->data.val;
		aux1 = aux1->prox;
		aux2 = aux2->prox;
	}
	printf("\nSoma l1: %d\n", soma1);
	printf("Soma l2: %d\n", soma2);
	if(soma1 > soma2){
		printf("Lista 1 ganhou\n");
	}else{
		if(soma1 == soma2){
			printf("Empate\n");
		}else{
			printf("Lista 2 ganhou\n");
		}
	}
	printf("\n");
}

void ListaZ(Lista *l1, Lista *l2, Lista *l3){
	Item aux;
	Block *aux2;

	srand((unsigned)time(NULL));
	for(int i=0;i<nList;i++){
		aux.val = rand() % 99;
		LInsert(l1, aux);
	}
	for(int i=0;i<nList;i++){
		aux.val = rand() % 99;
		LInsert(l2, aux);
	}
	printf("Lista x = ");
	LImprime(l1);
	printf("\n");
	printf("Lista y = ");
	LImprime(l2);
	printf("\n");
	while(l1->first->prox != NULL){
		aux2 = l2->first;
		while (aux2->prox != l2->last){
			aux2 = aux2->prox;
		}
		aux.val = l1->first->prox->data.val;
		aux.valz = aux2->prox->data.val;
		l1->first = l1->first->prox;
		l2->last = aux2;
		LInsert(l3, aux);
	}
	printf("Lista z = ");
	LImprimeZ(l3);
	printf("\n\n");
}

void Numerosmaisproximos(float vet[], int n){
	if (n <= 1)
		return;
	
	for(int i = 0; i < n - 1; i++){
		for (int j = 0; j < n - i - 1; j++){
			if (vet[j] > vet[j+1]){
				float temp = vet[j];
				vet[j] = vet[j+1];
				vet[j+1] = temp;
			}
		}
	}
	
	float minDiff = vet[1] - vet[0];
	for (int i = 2 ; i < n ; i++)
		minDiff = fmin(minDiff, vet[i] - vet[i-1]);
	
	for (int i = 1; i < n; i++){
		if ((vet[i] - vet[i-1]) == minDiff){
			printf("K pares mais proximo: (dist = %.6f,dist = %.6f),", vet[i-1], vet[i]);
		}
	}
}

void DistEuclidiana(Lista *l1, Lista *l2){
	Block *aux1, *aux2;
	Item aux;
	int i = 0;
	float dist[nList];

	srand((unsigned)time(NULL));
	for(int i=0;i<nList;i++){
		aux.val = 1 + (rand() % 99);
		LInsert(l1, aux);
	}
	for(int i=0;i<nList;i++){
		aux.val = 1 + (rand() % 99);
		LInsert(l2, aux);
	}

	printf("Lista x = ");
	LImprime(l1);
	printf("\n");
	printf("Lista y = ");
	LImprime(l2);
	printf("\n\n");

	aux1 = l1->first->prox;
	aux2 = l2->first->prox;
	while(aux1 != NULL && aux2 != NULL){
		dist[i] = sqrt((pow(aux1->data.val, 2) + pow(aux2->data.val, 2)));
		aux1 = aux1->prox;
		aux2 = aux2->prox;
		i++;
	}

	for(int j = 0; j<nList; j++){
		printf("Distancia x[%d]y[%d]: %.6f\n", j+1, j+1, dist[j]);
	}
	printf("\n");
	Numerosmaisproximos(dist, nList);
	printf("\n\n");
}



