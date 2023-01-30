#include <stdio.h>
#include <string.h>

int main()
{
    char *t="aa a aaa a aaaa aaa aa aa";
    char *p="aa";
    char *ptr,*te;
    int cnt=0,len_t,len_p;
    len_t= strlen(t);
    len_p= strlen(p);
    te=t;
    do
    {
        ptr= strstr(te,p);
        if(ptr != NULL)
        {
            cnt++;
            te=ptr+len_p;
        }
    }while(te < t+len_t && ptr != NULL);
    printf("cnt:%d",cnt);
}
