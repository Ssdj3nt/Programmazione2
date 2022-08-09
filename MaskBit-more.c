#include <stdio.h>
#include <math.h>

void main()
{
    short mask=31,len;
    len=(short)log2(mask)+1;
    mask<<(sizeof(short)*8-len);
}
