#include <stdio.h>
void main()
{
    int num,q,q2,r,base,a[100],b[100],i=0,j,k=0;
    printf("\nInserisci un numero in base 10 da convertire:");
    scanf("%d",&num);
    printf("\nInserisci la base a cui convertire:");
    scanf("%d",&base);
    q=num;
    while(q>0){
        q2=q/base;
        r=q-(q2*base);
        q=q2;
        a[i]=r;
        i++;}i--;
    printf("\nIl numero in base 10-%d in base-%d è:",num,base);
    for(j=i;j>=0;j--){
        b[k]=a[j];
        printf("%d",b[k]);
        k++;}
}
