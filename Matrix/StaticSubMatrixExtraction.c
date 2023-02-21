#include <stdio.h>
void matrix(int*,int,int,int,int);
int main() {
    int a[4][4]={1,2,3,4,5,6},(*pa)[4][4],i,j,n,m,ldar,ldac;
    pa=&a;
    puts("Digita il numero di righe e delle colonne della sottomatrice:");
    scanf("%d%d",&n,&m);
    ldar=sizeof(a) / sizeof(a[0]);
    ldac=sizeof(a[0]) / sizeof(a[0][0]);

    puts("Matrice originale:");
    for(i=0;i<ldar;i++){
        for(j=0;j<ldac;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    matrix(pa,n,m,ldar,ldac);
}
void matrix(int* matrix,int righe,int colonne,int max_r,int max_c)
{
    int h,k;
    for(h=0;h<righe;h++){
        for(k=0;k<colonne;k++){
            printf("%d\t",*(matrix+h*max_c+k));
        }
        printf("\n");
    }
}
