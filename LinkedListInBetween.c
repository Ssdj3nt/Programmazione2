#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nome[20];
    char cognome[20];
    int  anni;
} tipo;

struct persona {
    tipo info;
    struct persona *next;
};

void ins_b_node(tipo dato, struct persona **testa) {
    struct persona *ptr = calloc(1, sizeof(struct persona));
    ptr->info = dato;
    ptr->next=(*testa)->next;
    (*testa)->next=ptr;
}

void ins(tipo dato, struct persona **p_head) {
    struct persona *ptr = calloc(1, sizeof(struct persona));
    ptr->info = dato;
    ptr->next = *p_head;
    *p_head = ptr;
}

int main() {
    struct persona *testa = NULL;

    tipo persona1 = {"Francesco", "Porritiello", 24};
    tipo persona3 = {"Felice", "Porritiello", 33};
    ins(persona1, &testa);
    ins(persona3, &testa);

    struct persona *ptr = testa;
    while (ptr != NULL) {
        printf("%s\t%s\t%d\n", ptr->info.nome, ptr->info.cognome, ptr->info.anni);
        ptr = ptr->next;
    }
    ptr=testa;
    tipo persona2={"Maria","Porritiello",31};
    ins_b_node(persona2,&testa);
    puts("Lista con inserimento nel mezzo:");
    while (ptr != NULL) {
        printf("%s\t%s\t%d\n", ptr->info.nome, ptr->info.cognome, ptr->info.anni);
        ptr = ptr->next;
    }
}
