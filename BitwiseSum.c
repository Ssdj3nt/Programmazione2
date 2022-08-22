#include <stdio.h>

void main()
{
    int a,b,xor,and,riporto=1;
    puts("Inserisci il primo numero:");
    scanf("%d",&a);
    puts("Inserisci il secondo numero:");
    scanf("%d",&b);
    while (riporto>0)
    {
        xor=a^b;
        and=a&b;
        riporto=and<<1;
        a=xor;
        b=riporto;
    }
    printf("La somma Bitwise e':\t%d",xor);
}
