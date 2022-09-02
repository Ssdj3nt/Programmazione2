#include <stdio.h>
#include <stdlib.h>

void main()
{
    char *stringa;
    int slen;
    puts("Immetti la lunghezza della stringa:");
    scanf("%d",&slen);
    stringa=(char *)malloc(slen+1);
    puts("Digita una stringa:");
    scanf("%s",stringa);
    printf("La stringa immessa=%s\n",stringa);
    free(stringa);
}
