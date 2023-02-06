#include <stdio.h>
#include <string.h>

#define MAX_LINE_LENGTH 1024

int main() {
    char key[1024];
    char line[MAX_LINE_LENGTH];
    int line_number = 0;

    printf("Inserisci la chiave di ricerca: ");
    scanf("%s", key);

    FILE *file = fopen("C:/esempio.txt", "r");
    if (file == NULL) {
        printf("Impossibile aprire il file");
        return 1;
    }

    while (fgets(line, MAX_LINE_LENGTH, file) != NULL) {
        line_number++;
        if (strstr(line, key) != NULL) {
            printf("Trovata chiave '%s' alla riga %d: %s", key, line_number, line);
        }
    }

    fclose(file);
    return 0;
}
