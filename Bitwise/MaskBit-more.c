#include <stdio.h>
#include <math.h>

int main()
{
    short mask,len;
    mask=31;
    len=(short)log2(mask)+1;
    mask=mask<<(sizeof(short)*8-len);
    printf("%hx",mask);
}
