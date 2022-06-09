#include "lista.h"

int main()
{
	int s = 0,c;
	Lista l, l2, l3;
	Block auxb;

	while (s != -1){
		printf("----EXERCICIOS LISTA----\n");
		printf("1. Letra A\n");
		printf("2. Letra B\n");
		printf("3. Letra C\n");
		printf("4. Letra D\n");
		printf("5. Sair\n");
		printf("-> ");
		scanf("%d", &c);
		printf("\n");
		switch (c){
			case 1:
				FLVazia(&l);	
				printf("\n----Nao Recursivo----\n");
				Conta_PAR_IMPAR(&l);
				printf("\n----Recursivo----\n");
				Conta_PAR_IMPAR_Recursive(&l, &auxb, nList, 0, 0);
				printf("\n");
				break;
			case 2:
				FLVazia(&l);
				FLVazia(&l2);	
				Jogo(&l, &l2);
				break;
			case 3:
				FLVazia(&l);
				FLVazia(&l2);
				FLVazia(&l3);	
				ListaZ(&l, &l2, &l3);
				break;
			case 4:
				FLVazia(&l);
				FLVazia(&l2);
				DistEuclidiana(&l, &l2);
				break;
			case 5:
				s = -1;
				printf("Saindo...\n");
				break;
			default:
				printf("Opcao incorreta\n\n");
				break;
		}
	}
	return 0;
}
