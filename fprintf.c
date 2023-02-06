#include <stdio.h>
#include <string.h>

int main(void) {
    FILE *fp;
    char testo[100];

    printf("Inserisci il testo da scrivere nel file: ");
    scanf("%[^\n]s", testo); // Legge la stringa inserita dall'utente

    fp = fopen("C:/example.txt", "w"); // Apre il file in modalità scrittura
    if (fp == NULL) { // Controlla se l'apertura è avvenuta con successo
        printf("Impossibile aprire il file");
        return 1;
    }
    fprintf(fp, "%s", testo); // Scrive il testo nel file
    fclose(fp); // Chiude il file
    printf("Testo scritto nel file con successo!\n");
    return 0;
}
