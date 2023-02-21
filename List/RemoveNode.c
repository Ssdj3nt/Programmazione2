#include <stdio.h>
#include <stdlib.h>

typedef struct nodo {
    int val;
    struct nodo *next;
} Nodo;

Nodo *rimuovi(Nodo *testa, int key) {
    if (testa == NULL) {
        puts("La testa e' vuota.");
        return testa;
    }
    Nodo *corrente = testa;
    Nodo *precedente = NULL;
    while (corrente != NULL && corrente->val != key) {
        precedente = corrente;
        corrente = corrente->next;
    }
    if (corrente == NULL) {
        puts("Nodo non trovato.");
        return testa;
    }
    if (precedente == NULL) {
        testa = corrente->next;
    } else {
        precedente->next = corrente->next;
    }
    free(corrente);
    return testa;
}

int main() {
    int key;
    Nodo *testa = (Nodo*) malloc(sizeof(Nodo));
    testa->val = 6;
    testa->next = (Nodo*) malloc(sizeof(Nodo));
    testa->next->val = 8;
    testa->next->next = (Nodo*) malloc(sizeof(Nodo));
    testa->next->next->val = 10;
    testa->next->next->next = NULL;

    Nodo *ptr = testa;
    puts("La lista contiene i nodi con i valori:");

    while (ptr != NULL) {
        printf("%d\t", ptr->val);
        ptr = ptr->next;
    }

    puts("\nInserisci il valore presente nel nodo da eliminare:");
    scanf("%d", &key);

    testa = rimuovi(testa, key);

    ptr = testa;
    while (ptr != NULL) {
        printf("%d\t", ptr->val);
        ptr = ptr->next;
    }
}
