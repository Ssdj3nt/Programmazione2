#include <stdio.h>
#include <string.h>
int main(void)
{
    char *testo="fra francesco ff fr fra francesco";
    char *chiave="fra";
    int len_t,len_c, i=0,j=0,uguali=0,cnt;

    len_t = strlen(testo);
    len_c = strlen(chiave);

    while(j<len_t-len_c+1)
    {
        cnt=0;
        i=0;
        while(i<len_c)
        {
            if(chiave[i]==testo[j+i])
            {
                cnt++;
                i++;
            }
            else
                break;
        }

        if(cnt==len_c)
            uguali++;
        j++;
    }
    printf("Trovati:%d",uguali);
    return 0;
}
