#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nome[20];
    char cognome[20];
    int anni;
}INFO_FIELD;
struct PERSONA{
    INFO_FIELD info;
    struct PERSONA *next;
};

void ins_nodo(INFO_FIELD dato, struct PERSONA **testa){
    struct PERSONA *ptr=calloc(1,sizeof(struct PERSONA));
    ptr->info=dato;
    ptr->next=*testa;
    *testa=ptr;
}

int main()
{
    struct PERSONA *testa=NULL;
    INFO_FIELD persona1={"Mario"," Rossi",32};
    INFO_FIELD persona2={"Luca"," Bianchi",43};
    INFO_FIELD persona3={"Andrea"," Verdi",29};

    ins_nodo(persona1,&testa);
    ins_nodo(persona2,&testa);
    ins_nodo(persona3,&testa);

    struct PERSONA *ptr=testa;
    while(ptr!=NULL){
        printf("Nome: %s\n",ptr->info.nome);
        printf("Cognome: %s\n",ptr->info.cognome);
        printf("Anni: %d\n",ptr->info.anni);
        ptr=ptr->next;
    }
    return 0;
}
