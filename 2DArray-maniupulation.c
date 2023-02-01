//Programma in C che fa uso delle funzioni per allocare memoria per aggiungere una riga ad un array bidibensionale dinamico.

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#define n 3
#define m 5

int main()
{
    srand((unsigned)time(NULL));
    int a_static[n][m], *a_dynamic, i, j;
    int *row, irow;
    row = calloc(m, sizeof(int));
    a_dynamic = calloc(n * m, sizeof(int));

    printf("Matrice Statica:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            a_static[i][j] = rand() % 100;
            printf("%d\t", a_static[i][j]);
        }
        printf("\n");
    }

    printf("Matrice Dinamica:\n");
    if (a_dynamic != NULL) {
        for (i = 0; i < n; i++) {
            for (j = 0; j < m; j++) {
                *(a_dynamic + i * m + j) = a_static[i][j];
                printf("%d\t", *(a_dynamic + i * m + j));
            }
            printf("\n");
        }
    }

    printf("Indica l'indice dove inserire la nuova riga: ");
    scanf("%d", &irow);
    irow--;

    a_dynamic = realloc(a_dynamic, (n + 1) * m * sizeof(int));
    memmove(a_dynamic + (irow + 1) * m, a_dynamic + irow * m, (n - irow) * m * sizeof(int));
    memcpy(a_dynamic + irow * m, row, m * sizeof(int));

    printf("Matrice Dinamica maggiorata:\n");
    if (a_dynamic != NULL) {
        for (i = 0; i < n + 1; i++) {
            for (j = 0; j < m; j++) {
                printf("%d\t", *(a_dynamic + i * m + j));
            }
            printf("\n");
        }
    }

    free(row);
    free(a_dynamic);
    return 0;
}
