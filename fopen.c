#include <stdio.h>
#include "stdlib.h"

int main() {
    char *testo="'Francesco";
    FILE *fp;
    char **buffer = (char **)calloc(100, sizeof(char *));
    int i;
    fp = fopen("C:/example.txt", "r");
    if (fp == NULL) {
        puts("File non presente nella directory specificata.");
    }

    puts("Il contenuto del file:");
    while (fgets(buffer, 100, fp) != NULL) {
        printf("%s", buffer);
    }
    fclose(fp);
    free(buffer);
    for(i=0;i<100;i++){
        free(buffer[i]);
    }
}
