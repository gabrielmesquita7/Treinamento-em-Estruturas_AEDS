#include "Fila.h"

int main()
{
    srand(time(NULL));

    tFila f, u;
    tItem aux;
    int escolha;
    int count, n = 0;
    while (escolha != 3)
    {
        printf("\n\n ----------------------- ");
        printf("\n Escolha uma opção:");
        printf("\n 1 - Dividir um par de filas ao meio e ligar as metadas para compor duas novas filas");
        printf("\n 2 - Aplica uma equação matemática e ordena a fila ");
        printf("\n 3 - Fechar o programa ");
        printf("\n\n ----------------------- ");
        scanf("%d",&escolha);
    switch (escolha)
    {
    case 1:
        Crialista(&f, &u, n);
        
        FImprime(&f);
		FImprime(&u);

		SwapFila(&f, &u, n);

        FImprime(&f);
		FImprime(&u);
        
        break;
 
    case 2:
        Crialista(&f, &u, n);
        
        FImprime(&f);

		BubbleSort(&f);

        FImprime(&f);
	
        break;
    case 3:
        printf("Fechando o programa.\n");
        break;

    default:
        printf("Insira um numero valido.\n");
    }
    
  }
    return 0;
}