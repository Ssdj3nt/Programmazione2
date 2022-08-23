#include <stdio.h>

int main()
{
    int x,y,prestito=1;
    puts("Inserisci il primo numero:");
    scanf("%d",&x);
    puts("Inserisci il secondo numero:");
    scanf("%d",&y);

    while(prestito!=0)
    {
        prestito=(~x)&(y);
        x=x^y;
        y=prestito<<1;
    }
    printf("Il risultato della sottrazione è: %d",x);
}
