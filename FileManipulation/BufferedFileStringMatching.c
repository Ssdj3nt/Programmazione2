#include <stdio.h>
#include"stdlib.h"
#include "string.h"
#define size 30
int buffered_search(char, char *, FILE *);
int main() {
    int len,qty;
    puts("Digita la lunghezza della stringa:");
    scanf("%d",&len);
    fflush(stdin);
    len++;
    char *chiave=calloc(len,sizeof(char));
    char *buffer=calloc(100,sizeof(char));
    if(chiave == NULL){
        puts("Allocazione fallita.");
        exit(1);
    }
    FILE *fp=fopen("C:/Users/franc/Desktop/naive.txt","w");
    if(fp==NULL){
        puts("Errore aperture/creazione file.");
        exit(1);
    }
    puts("Digita la chiave:");
    gets(chiave);
    fflush(stdin);
    puts("Immetti il testo nel file:");
    gets(buffer);
    fprintf(fp,"%s",buffer);
    fflush(stdin);
    fclose(fp);
    fp=fopen("C:/Users/franc/Desktop/naive.txt","r");
    if(fp!=NULL)
    {
        qty= buffered_search(len-1,chiave, fp);
        fclose(fp);
        printf("Trovati:%d",qty);
    }
    free(chiave);
    free(buffer);
}
int buffered_search(char l, char *key, FILE *x) {
    char buffer[size], *ptr;
    int trovati = 0, j = 0;
    while (!feof(x)) {
        fgets(buffer, size, x);
        ptr = strstr(buffer, key);
        while (ptr != NULL) {
            trovati++;
            j = (ptr - buffer) + l;
            ptr = strstr(buffer + j, key);
        }
    }
    return trovati;
}
