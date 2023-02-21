#include <stdio.h>
#include <math.h>
void main()
{
    float num,fnum,m;
    int lenb,lenf,dnum,base,a[100],i;

    printf("Inserisci un numero razionale:");
    scanf("%f",&num);
    printf("Inserisci la base da convertire:");
    scanf("%d",&base);

    dnum=(int)num;
    fnum=num-(float)dnum;

    if(dnum>0)
        lenb=(int)log2(dnum)+1;
    else
        lenb=1;

    lenf=sizeof(float)*8;

    printf("\nParte binaria dopo la virgola:\n");

    for(i=lenb+1;i<lenf;i++)//Viene lasciato lo spazio nell'array sufficiente per inserire i bit della parte intera prima della parte dopo la virgola;
    {
        m=fnum*(float)base;
        a[i]=(int)m;
        printf("%d",a[i]);
        fnum=m-(int)m;
    }
}
