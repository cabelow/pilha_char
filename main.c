#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include"pilhaChar.h"

int main()
{
    printf("pilhaChar man!\n");


    PilhaChar *p = cria();
    PilhaChar *q = cria();

    //push(p);
    int op;
    int loop = 1;
    //int info, taman, ret1, ret2, n;
    while(loop == 1){
        printf("\n 0-sair 1-add_p 2-mostra_p 3-add_q 4-mostra_q 5-testar : ");
        scanf("%d", &op);
        switch(op){
        case 0:
            loop = 0;
            break;
        case 1:
            push(p);
            break;
        case 2:
            mostra(p);
            break;
        case 3:
            push(q);
            break;
        case 4:
            mostra(q);
            break;
        case 5:
            testa(p,q);
            break;
        }
    }

    return 0;
}
