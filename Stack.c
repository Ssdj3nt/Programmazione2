#include <stdio.h>
void inverti(char*,int);
#define len 5
int main(void)
{
    char stack[5]={'a','b','c','d','e'};
    int i;
    puts("Lo stack:");
    for(i=0;i<len;i++){
        printf("%c\t",stack[i]);
    }
    printf("\n");
    inverti(stack,len);
}
void inverti(char *a,int l){
    char buffer[l];
    int j,k=l-1;
    for(j=0;j<l;j++){
        buffer[k--]=a[j];
    }
    for(j=0;j<l;j++){
        printf("%c\t",buffer[j]);
    }
}
