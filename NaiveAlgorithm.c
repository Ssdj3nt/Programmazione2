#include <stdio.h>
#include <string.h>

void main()
{
    char *testo="Francesco e il fratello di Maria Francesco e il ragazzo di Rosa Fra";
    char *chiave="Francesco",*occorrenza,*pos=testo;
    int lent,lenc,n=0;
    lent=strlen(testo);
    lenc=strlen(chiave);

    do
    {
     occorrenza= strstr(pos,chiave);
     if(occorrenza!=NULL)
     {
         n++;
         pos=occorrenza+lenc;
     }
    } while (pos<testo+lent && occorrenza!=0);
    printf("Occorrenze sottostringa nel testo:%d",n);
}
