#include <stdio.h>

void main()
{
    int x=11,y,z;
    y=x<<3;//Se moltiplicare o dividere per 2 significa aggiungere a destra o a sinistra uno 0..
    //Allora moltiplicare per 8/2 uguale 2x2x2=3 o 2/2/2=3 shift
    z=y>>1;
    printf("y=%d,z=%d",y,z);
}
