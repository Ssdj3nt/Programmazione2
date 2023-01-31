//Breve codice che consente di allocare e reallocare memoria in C con le funzioni calloc,malloc e realloc definite nella libreria stdlib.c.

#include <stdio.h>
#include "stdlib.h"
#define n 10

int main()
{
    int *ptr1,*ptr2,*ptr3,i;
    ptr1 = calloc(n,sizeof(int));
    if(ptr1 != NULL)
    {
        for(i=0;i<10;i++)
        {
            printf("%d \t",ptr1[i]);
        }
    }
    printf("\n");
    ptr2 = (int*) malloc(n*sizeof(int));
    if(ptr2 != NULL)
    {
        for(i=0;i<10;i++)
        {
            printf("%d \t",ptr2[i]);
        }
    }
    printf("ptr3\n");
    ptr3=(int*)realloc(ptr3, n*sizeof(int));
    if(ptr3 != NULL)
    {
        for(i=0;i<10;i++)
        {
            printf("%d \t",ptr3[i]);
        }
    }
}
