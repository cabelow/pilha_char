#include<stdlib.h>
#include<string.h>
#include "pilhaChar.h"

#define tamanho 10


struct pilhaChar {
    int top;
    char cad[tamanho];
};

PilhaChar* cria(){
    PilhaChar *p = (PilhaChar*) malloc(sizeof(PilhaChar));
    p->top = 0;
    return p;
    //return (PilhaChar*) malloc(sizeof(PilhaChar));
}

void push(PilhaChar *p){
    char c;
    //fflush();
    printf("\ndig a ou b: ");
    //fgets(c);
    scanf(" %c", &c);
    if(c == 'a' || c == 'b') {
        p->cad[p->top] = c;
        p->top++;
    }
    else printf("\n entrada errada");
    //strcpy(p->cad[p->top], c);
    //p->cad[p->top] = c;
}

void mostra(PilhaChar *p){
    int i;
    for(i=0; i< p->top; i++) printf("%c", p->cad[i]);
}

void testa(PilhaChar *p, PilhaChar *q){
    int i;
    int teste = 1;
    if(p->top == q->top){
        for(i=0; i< p->top; i++){
            if(p->cad[i] == q->cad[i]) {teste = 0;}
        }
    } else {
        teste = 0;
    }
    if(teste == 1) printf("\n e da forma");
    else printf("\n Nao e da forma");
}
