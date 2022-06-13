#include<2.c>

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

#define MAX 100

char stack[20],equacao2[20],prefix[20];
int top = -1;

//2A
 typedef struct Celula{
     char conteudo;
     struct Celula*prox;
 }celula;
 typedef struct pilha{
     struct Celula*topo;
 }pilha;

///Empilha
void empilha(pilha*p,char c);
///Cria Pilha
pilha* criaPilha();
///Desempilha
char desempilha(pilha*p);
///Imprime
void imprime(pilha*p);
void a2(char *equacao,pilha *operandos, pilha *operadores);

//2B

//metodo1
int P_posfixa(char c, char t);
void posfixa(char expr[]);

//metodo2
void empilhar(int pos);
char desempilhar();
void prefixa(char equacao2[]);
int precedence(char alpha);

//2C
//gcd
int gcd(int a, int b);
//phi
int phi(unsigned int n);
typedef struct Celula2{
     int conteudo;
     struct Celula2*prox;
 }celula2;
 typedef struct pilha2{
     struct Celula2*topo;
 }pilha2;

///Empilha
void empilha2(pilha2*p,int c);
///Cria Pilha
pilha2* criaPilha2();
///Desempilha
int desempilha2(pilha2*p);
///Imprime
void imprime2(pilha2*p);
void c2(pilha2 *P1);

//2D
///Imprime
void imprime3(pilha2*p);
pilha2* criaPilha3();
void d2(pilha2* fibonacci);

#endif
