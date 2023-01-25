#include <stdio.h>
#include "string.h"
void main()
{
    char *buffer;
    int i=0,j,c,var;
    do{
        c=getchar();
        buffer[i]=(char)c;
        i++;
    }while(c != '\n');
    buffer[i-1]='\0';

    var= strlen(buffer);
    for(j=0;j<var;j++)
    {
        buffer[j]=buffer[j]^32;
    }
    puts(buffer);
}
