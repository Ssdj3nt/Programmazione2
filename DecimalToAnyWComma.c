#include <stdio.h>
#include <math.h>

void main()
{
    float num,fnum,m;
    int dnum,base,a[100],i;

    printf("Inserisci un numero razionale:");
    scanf("%f",&num);
    dnum=(int)num;
    fnum=num-dnum;
    printf("Inserisci la base da convertire:");
    scanf("%d",&base);

    for(i=0;i<((sizeof(float)*8)-(int)log2(dnum)+1);i++)
    {
        m=fnum*base;
        a[i]=(int)m;
        fnum=m;
    }

}
