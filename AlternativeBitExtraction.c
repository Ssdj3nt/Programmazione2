#include <stdio.h>

void main()
{
    int x,a[8];
    short i;
    puts("Inserisci un numero:");
    scanf("%d",&x);

    for(i=7;i>=0;i--)
    {
        a[i]=(char)(1&x);
        x=x>>1;
        printf("%1d",a[i]);
    }
}
