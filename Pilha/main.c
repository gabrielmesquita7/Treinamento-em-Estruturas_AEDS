#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#define MAX 100


//2A
 typedef struct Celula{
     char conteudo;
     struct Celula*prox;
 }celula;
 typedef struct pilha{
     struct Celula*topo;
 }pilha;

///Empilha
void empilha(pilha*p,char c){
    celula*novo=(celula*)malloc(sizeof(celula));
    novo->conteudo=c;
    novo->prox=p->topo;
    p->topo=novo;
}
///Cria Pilha
pilha* criaPilha(){
    pilha *p=(pilha*)malloc(sizeof(pilha));

    p->topo=NULL;
    empilha(p," ");
    return p;
}
///Desempilha
char desempilha(pilha*p){
    celula*aux=p->topo;
    char v=aux->conteudo;

    p->topo=aux->prox;
    free(aux);
    return v;
}
///Imprime
void imprime(pilha*p){
	celula *aux = p->topo;
    while(aux->prox!=NULL){
        printf("\t|%c|",aux->conteudo);
        aux=aux->prox;      
    }
}
void a2(char *equacao,pilha *operandos, pilha *operadores){

    char t[MAX];
    int i=0, j=0, k=0,lado=0;
    
    while(equacao[i] != '\0'){
        for(int b=0;b<MAX;b++){
            t[b]='\0';
        }
        
        j=i;
        k=0;

        while(equacao[j] != '\0'){

            if(equacao[j] == '+' || equacao[j] == '-' || equacao[j] == '*' || equacao[j] == '/' || equacao[j] == '\0' || equacao[j] == '=' || equacao[j] == '^'){
                
                if(lado==0){
                    empilha(operandos,*t);
                    lado = 1;

                }else if(lado==1){
                    empilha(operadores,*t);
                    lado = 0;

                }
                i++;
                j++;
                break;
            }

            t[k]=equacao[j];

            j++;
            k++;
        }
        i++;
    }

}

//2B

//metodo1
int P_posfixa(char c, char t){
  int pc,pt;
 
  if(c == '^')
    pc = 4;
  else if(c == '*' || c == '/')
    pc = 2;
  else if(c == '+' || c == '-')
    pc = 1;
  else if(c == '(')
    pc = 4;
 
  if(t == '^')
    pt = 3;
  else if(t == '*' || t == '/')
    pt = 2;
  else if(t == '+' || t == '-')
    pt = 1;
  else if(t == '(')
    pt = 0;
 
  return (pc > pt);
}
void posfixa(char expr[]){
  int i = 0;
  char c,t;
 
  pilha *p = criaPilha();
  empilha(p, '(');
 
  do{
    c = expr[i];
    i++;
    if(c >= 'a' && c <= 'z'){
      printf("%c", c);
    }
    else if(c == '('){
      empilha(p, '(');
    }
    else if(c == ')' || c == '\0'){
      do{
        t = desempilha(p);
        if(t != '(')
          printf("%c", t);
      }while(t != '(');
    }
    else if(c == '+' || c == '-' || 
            c == '*' || c == '/' ||
            c == '^' ){
      while(1){
        t = desempilha(p);
        if(P_posfixa(c,t)){
          empilha(p, t);
          empilha(p, c);
          break;
        }
        else{
          printf("%c", t);
        }
      }
    }
  }while(c != '\0');
  printf("\n");
  //LiberaPilha(p);
}

//metodo2
char stack[20],equacao2[20],prefix[20];
int top = -1;

void empilhar(int pos){
    if(top == MAX-1)
    {
        printf("\nSTACK OVERFLOW\n");
    }else{
        top++;
        stack[top] = equacao2[pos];
    }
}
char desempilhar(){
    char ch;
    if(top < 0){
        printf("\nSTACK UNDERFLOW\n");
        exit(0);
    }else{
        ch = stack[top];
        stack[top] = '\0';
        top--;
        return(ch);
    }
    return 0;
}
void prefixa(char equacao2[]){

    int i = 0,j = 0;

    strrev(equacao2);

    while(equacao2[i] != '\0'){
        if(equacao2[i] >= 'a' && equacao2[i] <= 'z'){
            prefix[j] = equacao2[i];
            j++;
            i++;
        }
        else if(equacao2[i] == ')' || equacao2[i] == '}' || equacao2[i] == ']'){
            empilhar(i);
            i++;
        }
        else if(equacao2[i] == '(' || equacao2[i] == '{' || equacao2[i] == '[') {
            if(equacao2[i] == '('){
                while(stack[top] != ')'){
                    prefix[j] = desempilhar();
                    j++;
                }
                desempilhar();
                i++;
            }
            else if(equacao2[i] == '['){
                while(stack[top] != ']'){
                    prefix[j] = desempilhar();
                    j++;
                }
                desempilhar();
                i++;
            }
            else if(equacao2[i] == '{'){
                while(stack[top] != '}'){
                    prefix[j] = desempilhar();
                    j++;
                }
                desempilhar();
                i++;
            }
        }
        else{

            if(top == -1){
                empilhar(i);
                i++;
            }
            else if( precedence(equacao2[i]) < precedence(stack[top])){

                prefix[j] = desempilhar();
                j++;
                while(precedence(stack[top]) > precedence(equacao2[i])){
                    prefix[j] = desempilhar();
                    j++;
                    if(top < 0) {
                    break;
                    }
                }
                empilhar(i);
                i++;
            }
            else if(precedence(equacao2[i]) >= precedence(stack[top])){
                empilhar(i);
                i++;
            }
        }
    }
    while(top != -1){

        prefix[j] = desempilhar();
        j++;
    }
    strrev(prefix);
    prefix[j] = '\0';
    printf("%s ",prefix);
}
int precedence(char *alpha){

    if(alpha == '+' || alpha =='-'){
        return(1);
    }
    if(alpha == '*' || alpha =='/'){
        return(2);
    }
return 0;
}

//2C
//gcd
int gcd(int a, int b){
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
//phi
int phi(unsigned int n){
    unsigned int result = 1;
    for (int i = 2; i < n; i++)
        if (gcd(i, n) == 1)
            result++;
    return result;
}
typedef struct Celula2{
     int conteudo;
     struct Celula2*prox;
 }celula2;
 typedef struct pilha2{
     struct Celula2*topo;
 }pilha2;

///Empilha
void empilha2(pilha2*p,int c){
    celula2*novo=(celula2*)malloc(sizeof(celula2));
    novo->conteudo=c;
    novo->prox=p->topo;
    p->topo=novo;
}
///Cria Pilha
pilha2* criaPilha2(){
    pilha2 *p=(pilha2*)malloc(sizeof(pilha2));

    p->topo=NULL;
    empilha2(p,NULL);
    return p;
}
///Desempilha
int desempilha2(pilha2*p){
    celula2*aux=p->topo;
    int v=aux->conteudo;

    p->topo=aux->prox;
    free(aux);
    return v;
}
///Imprime
void imprime2(pilha2*p){
	celula2 *aux = p->topo;
    while(aux->prox!=NULL){
        printf("\n  |%i| -> numero de co-primos |%i|",aux->conteudo,phi(aux->conteudo));
        aux=aux->prox;      
    }
}
void c2(pilha2 *P1){
    srand(time(NULL));

    for (int i=0; i<20; i++){
        empilha2(P1,rand() % 99);
    }
    imprime2(P1);

}

//2D
///Imprime
void imprime3(pilha2*p){
	celula2 *aux = p->topo;
    while(aux->prox!=NULL){
        printf(" |%i|  ",aux->conteudo);
        aux=aux->prox;      
    }
}
pilha2* criaPilha3(){
    pilha2 *p=(pilha2*)malloc(sizeof(pilha2));

    p->topo=NULL;
    empilha2(p,NULL);
    empilha2(p,1);
    empilha2(p,1);
    return p;
}
void d2(pilha2* fibonacci){

    int n;

    do{
        setbuf(stdin,NULL);
        printf("Digite quantos termos da sequencia de Fibonacci voce quer qeu seja maior que 1:\n");
        setbuf(stdin,NULL);
        scanf("%d", &n);

        if (n <= 1) {
            printf("Numero de termos invalido\n");
        }
        else {

            for (int i = 3; i <= n; i = i + 1){                                        
                empilha2(fibonacci,(fibonacci->topo->conteudo + fibonacci->topo->prox->conteudo));                       
            }  
            imprime3(fibonacci);
        }
    }while(n<=1);

}

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

    printf("\n\n");

    char equacao1[MAX];

    printf("\nInforme a equacao:\n");
    setbuf(stdin,NULL);
    gets(equacao1);
    posfixa(equacao1);

    printf("\nInforme a equacao:\n");
    setbuf(stdin,NULL);
    gets(equacao2);

    prefixa(equacao2);

    printf("\n\n");


/////2C
    
    pilha2 *P1;   P1=criaPilha2();
    int n=20;

    c2(P1);
   
    printf("\n\n");

/////2D
    
    pilha2 *fibonacci;   fibonacci=criaPilha3();

    d2(fibonacci);
   
    
    return 0;
}
