#include"2.h"

int main(){
/////2A
    
    char equacao[MAX];
    
    pilha *operandos;   operandos=criaPilha();
    pilha *operadores;  operadores=criaPilha();

    printf("\nInforme a equacao e digite '=' para finalizar:\n");
    setbuf(stdin,NULL);
    gets(equacao);

    a2(equacao, operandos, operadores);

    printf("\noperandos\n");
    imprime(operandos);
    printf("\noperadores\n");
    imprime(operadores);
    

/////2B

    char equacao[MAX];

    printf("\nInforme a equacao:\n");
    setbuf(stdin,NULL);
    gets(equacao);
    posfixa(equacao);

    printf("\nInforme a equacao:\n");
    setbuf(stdin,NULL);
    gets(equacao2);

    prefixa(equacao2);


/////2C
    
    pilha2 *P1;   P1=criaPilha2();
    int n=20;

    c2(P1);
    


/////2D
    
    pilha2 *fibonacci;   fibonacci=criaPilha3();

    d2(fibonacci);
    
    
    return 0;
}

