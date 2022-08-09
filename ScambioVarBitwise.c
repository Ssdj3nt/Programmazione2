#include <stdio.h>

void main()
{
    int x=5,y=4;
    x=x^y;
    y=x^y;
    x=x^y;

    printf("x=%d \t y=%d",x,y);
}
