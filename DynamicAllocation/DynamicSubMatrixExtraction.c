#include <stdio.h>
#include <stdlib.h>
#include "time.h"

int main() {
    srand((unsigned)time(NULL));
    int row, col, i, j, sub_row, sub_col, sub_row_start, sub_col_start;
    int **matrix;

    puts("Inserisci il numero di righe e colonne della matrice:");
    scanf("%d%d", &row,&col);

    matrix = (int**)malloc(row * sizeof(int*));
    for (i = 0; i < row; i++)
        matrix[i] = (int*)malloc(col * sizeof(int));

    for (i = 0; i < row; i++){
        for (j = 0; j < col; j++) {
            matrix[i][j]=rand()%100;
            printf("%d\t", matrix[i][j]);
    }
        printf("\n");
    }

    puts("Inserisci il numero di righe della sottomatrice:");
    scanf("%d", &sub_row);
    puts("Inserisci il numero di colonne della sottomatrice:");
    scanf("%d", &sub_col);
    puts("Inserisci la riga di inizio della sottomatrice:");
    scanf("%d", &sub_row_start);
    puts("Inserisci la colonna di inizio della sottomatrice:");
    scanf("%d", &sub_col_start);

    puts("La sottomatrice:");
    for (i = sub_row_start; i < sub_row_start + sub_row; i++) {
        for (j = sub_col_start; j < sub_col_start + sub_col; j++)
            printf("%d\t", matrix[i][j]);
        printf("\n");
    }

    for (i = 0; i < row; i++)
        free(matrix[i]);
    free(matrix);

    return 0;
}
