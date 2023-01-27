#include <stdio.h>
#include <string.h>

int main() {
    char *str = "it ti IT i iat ita iut i t a ita";
    char *sub = "ita";
    char *occur;
    int count = 0;
    occur = strstr(str, sub);
    while (occur != NULL) {
        printf("Occorrenza trovata alla posizione %d\n", occur - str);
        count++;
        occur = strstr(occur + 1, sub);
    }
    printf("Numero di occorrenze trovate: %d\n", count);
    return 0;
}
