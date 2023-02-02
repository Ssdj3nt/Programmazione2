#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void remove_row(int** matrix, int row, int rows, int columns);
int main() {
    int rows, columns;
    printf("Inserisci il numero di righe e colonne nella matrice: ");
    scanf("%d%d", &rows, &columns);

    int** matrix = (int**)malloc(rows * sizeof(int*));
    for (int i = 0; i < rows; i++) {
        matrix[i] = (int*)malloc(columns * sizeof(int));
    }

    printf("Inserisci gli elementi della matrice:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int row;
    printf("Inserisci l'indice della riga da eliminare: ");
    scanf("%d", &row);

    remove_row(matrix, row, rows, columns);

    // Deallocare la memoria assegnata alla matrice
    for (int i = 0; i < rows; i++) {
        free(matrix[i]);
    }
    free(matrix);

    return 0;
}
void remove_row(int** matrix, int row, int rows, int columns) {
    // Calcolare la dimensione in byte di una riga
    int row_size = columns * sizeof(int);

    // Spostare le righe successive verso l'alto per sovrascrivere la riga da eliminare
    memmove(&matrix[row], &matrix[row + 1], (rows - row - 1) * row_size);

    // Liberare la memoria non più utilizzata
    memset(&matrix[rows - 1], 0, row_size);

    // Ridurre il numero di righe nella matrice
    rows--;

    // Stampa la nuova matrice
    printf("Nuova matrice:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}
