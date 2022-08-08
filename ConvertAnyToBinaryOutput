#include <stdio.h>
#include <math.h>

void main()
{
    short x,y,len;
    printf("Inserire un numero:");
    scanf("%hd",&x);

    len=(short)log2(x)+1;
    short bitpre[len];
    short bitpost[len];
    printf("\nIl numero e' composto da: %hd bit\n",len);
    int i,j=0;
    for(i=0;i<len;i++){
        y=x/2;
        x=x%2;
        bitpre[i]=x;
        x=y;}

    printf("\nLa rappresentazione in binario di %hd e':\n",x);
    for(i=len-1;i>=0;i--)
    {
        bitpost[j]=bitpre[i];
        printf("[%d]Bit :%hd\t",j,bitpost[j]);
        j++;
    }
}
