#include <stdio.h>
int main(){
    FILE *fp;
    char *testo="ciao",*ptr;
    fp=fopen("C:/example.txt","w");
    ptr = testo;
    while(*ptr != '\0'){
        putc(*ptr,fp);
        ptr++;
    }
    fclose(fp);
}
