#include <stdio.h>
int main(void){
    FILE *fp;
    int a[20],i;
    for(i=0;i<sizeof(a)/sizeof(a[0]);i++)
        a[i]=i;
    fp= fopen("C:/example.txt","wb");
    if(fp==NULL){
        puts("File non trovato o impossibile aprirlo.");
    }
    fwrite(a,sizeof(int),sizeof(a)/sizeof(a[0]),fp);
    fclose(fp);
}
