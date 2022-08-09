#include <stdio.h>
#include <math.h>

int main()
{
    short mask1;
    mask1=pow(2,4)+ pow(2,3)+ pow(2,2)+ pow(2,1)+ pow(2,0); //Primo metodo usando la formula 2^n-1.
    printf("%d \n",mask1);

    short mask2;
    mask2=31;
    printf("%x \n",mask2); //Secondo metodo usando le costanti decimali,esadecimali,ottali.

    short mask3;
    int i;
    mask3=0;
    for(i=0;i<5;i++)
    {
        mask3=mask3<<1|1;
    }
    printf("Mask value = %x",mask3); //Terzo metodo usando un ciclo for facendo scorrere un bit con l'operatore di shift.
}
