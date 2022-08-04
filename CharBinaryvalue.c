#include <stdio.h>
void main()
{
    unsigned char bit[100][100]={"0000","0001","0010","0011","0100","0101","0110","0111","1000","1001","1010",
                                 "1011","1100"};
    unsigned char C='z',cdx,csx;

    csx=C>>4;//Shift bit di sinistra verso destra.
    cdx=C<<4;//Shift bit di destra verso sinistra.
    cdx=cdx>>4;//Dopo aver sovrascritto i bit di destra sui bit di sinistra si riportano alla sua posizione precedente.
    int a,b;
    a=csx;//se passo direttamente csx o cdx passerei un char che non rappresenta un indice, se passo il valore char ad un int erro verrà convertito automaticamente.
    b=cdx;

    printf("Valore dei bit in base 16 di sinistra = %x \n",csx);
    printf("Valore dei bit in base 16 di destra = %x \n",cdx);
    printf("Char = %c, Dec=%d, Exa=%02x \n",C,C,C);
    printf("a=%d,b=%d\n",a,b);
    printf("Bin=%s%s",bit[a],bit[b]);

}
