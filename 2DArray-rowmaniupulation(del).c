#include <stdio.h>
#include "time.h"
#include "stdlib.h"
#include "string.h"

int main(void)
{
    int **matrix,n,m,del,i,j;
    srand((unsigned)time(NULL));

    puts("Digita il numero di righe ed il numero di colonne della matrice:");
    scanf("%d\t%d",&n,&m);

    matrix=(int**)calloc(n,sizeof(int*));
    for(i=0;i<n;i++){
        matrix[i]=(int*)calloc(m,sizeof(int));
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            matrix[i][j]=rand()%100;
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }

    while(1){
        puts("Indica l'indice della riga da eliminare:");
        scanf("%d",&del);
        if(del>n){
            puts("L'indice non fa parte della matrice.\nRiprova.");
        }
        if(del<=n){
            break;
        }
    }

    memmove(&matrix[del],&matrix[del+1],(n-del-1)*m*sizeof(int));
    memset(&matrix[n-1],0,m*sizeof(int));
    n--;
    matrix=(int**)realloc(matrix,n*sizeof(int*));

    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<n;i++)
    {
        free(matrix[i]);
    }
    free(matrix);
}
