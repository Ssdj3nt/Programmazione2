#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    struct persona{
        char nome[30];
        int anni;
        struct persona *next;
    }*testa,*ptr;

    testa=calloc(1,sizeof(struct persona));
    strcpy(testa->nome,"Francesco");
    testa->anni = 24;
    testa->next=calloc(1,sizeof(struct persona));
    strcpy((testa->next)->nome,"Maria");
    (testa->next)->anni=31;
    (testa->next)->next= calloc(1,sizeof(struct persona));
    strcpy((testa->next)->next->nome,"Felice");
    (testa->next)->next->anni=33;
    ((testa->next)->next)->next=NULL;
    ptr = testa;
    while(ptr != NULL)
    {
        printf("%s\t%d\n",ptr->nome,ptr->anni);
        ptr=ptr->next;
    }
}
