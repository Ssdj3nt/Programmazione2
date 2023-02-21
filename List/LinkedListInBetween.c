#include <stdio.h>
#include <stdlib.h>

typedef struct nodo {
    int val;
    struct nodo *next;
} Nodo;

void inserisci(Nodo **testa, int val, int pos) {
    Nodo *nuovoNodo = (Nodo*)malloc(sizeof(Nodo));
    nuovoNodo->val = val;

    if (pos == 0) {
        nuovoNodo->next = *testa;
        *testa = nuovoNodo;
    } else {
        Nodo *attuale = *testa;
        for (int i = 0; i < pos - 1 && attuale != NULL; i++) {
            attuale = attuale->next;
        }
        if (attuale == NULL) {
            printf("Posizione non valida\n");
            return;
        }
        nuovoNodo->next = attuale->next;
        attuale->next = nuovoNodo;
    }
}

int main() {
    int key;
    Nodo *testa = NULL;

    testa = (Nodo*)malloc(sizeof(Nodo));
    testa->val = 6;
    testa->next = (Nodo*)malloc(sizeof(Nodo));
    testa->next->val = 8;
    testa->next->next = (Nodo*)malloc(sizeof(Nodo));
    testa->next->next->val = 10;
    testa->next->next->next = NULL;

    Nodo *ptr = testa;
    puts("La lista contiene i nodi con i valori:");
    while (ptr != NULL) {
        printf("%d\t", ptr->val);
        ptr = ptr->next;
    }

    puts("\nInserisci la posizione dove inserire il nuovo nodo:");
    scanf("%d", &key);
    inserisci(&testa, 18, key);

    ptr = testa;
    puts("\nLa lista aggiornata contiene i nodi con i valori:");
    while (ptr != NULL) {
        printf("%d\t", ptr->val);
        ptr = ptr->next;
    }

    return 0;
}
