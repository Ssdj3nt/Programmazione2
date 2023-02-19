#include <stdio.h>
#include <stdlib.h>

struct nodo {
    int valore;
    struct nodo* figlio_sx;
    struct nodo* figlio_dx;
};

struct nodo* nuovo_nodo(int valore) {
    struct nodo* nodo = (struct nodo*) malloc(sizeof(struct nodo));
    nodo->valore = valore;
    nodo->figlio_sx = NULL;
    nodo->figlio_dx = NULL;
    return nodo;
}

struct nodo* cerca_chiave(struct nodo* radice, int chiave) {
    // Se l'albero è vuoto o la chiave è presente nella radice, restituisco la radice
    if (radice == NULL || radice->valore == chiave) {
        return radice;
    }
    // Se la chiave è maggiore del valore della radice, cerco nel sottoalbero destro
    if (radice->valore < chiave) {
        return cerca_chiave(radice->figlio_dx, chiave);
    }
    // Altrimenti, cerco nel sottoalbero sinistro
    return cerca_chiave(radice->figlio_sx, chiave);
}

int main() {
    struct nodo* radice = nuovo_nodo(8);
    radice->figlio_sx = nuovo_nodo(3);
    radice->figlio_dx = nuovo_nodo(10);
    radice->figlio_sx->figlio_sx = nuovo_nodo(1);
    radice->figlio_sx->figlio_dx = nuovo_nodo(6);
    radice->figlio_dx->figlio_dx = nuovo_nodo(14);
    radice->figlio_sx->figlio_dx->figlio_sx = nuovo_nodo(4);
    radice->figlio_sx->figlio_dx->figlio_dx = nuovo_nodo(7);
    
    int chiave;
    printf("Inserisci la chiave da cercare: ");
    scanf("%d", &chiave);
    
    struct nodo* nodo_trovato = cerca_chiave(radice, chiave);
    
    if (nodo_trovato == NULL) {
        printf("Chiave non trovata\n");
    } else {
        printf("Chiave trovata: %d\n", nodo_trovato->valore);
    }
    
    return 0;
}
