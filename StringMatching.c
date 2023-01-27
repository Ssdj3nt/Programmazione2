#include <stdio.h>
#include <string.h>
int main() {
    char *str = "ita ITA ia ita B";
    char *sub = "ita";
    char *occur;
    int count = 0;
    occur = strstr(str, sub);
    while (occur != 'NULL') {
        printf("Occorrenza trovata alla posizione %ld\n", occur - str);
        count++;
        occur = strstr(occur + 1, sub);
    }
    printf("Numero di occorrenze trovate: %d\n", count);
    return 0;
}
