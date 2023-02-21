#include <stdio.h>
void main()
{
    unsigned short mask=0;
    int i;
    for(i=0;i<5;i++)
    {
        mask=mask<<1|1;
    }
    printf("EXA Value mask=0x%x\n",mask);

    mask=mask<<(sizeof(unsigned short)*8-5);//Uno short è 2 byte, moltiplicandolo per 8 avremo i bit meno la lunghezza dei bit già a 1.

    printf("Shifted EXA Value mask=0x%x\n",mask);


}
