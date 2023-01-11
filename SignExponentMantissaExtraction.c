//Programma per l'estrazione di segno,esponente e mantissa in singola precisione (32Bit)
#include <stdio.h>
#define bias 127;
void estraeE(long);
void estraeS(long);
void estraeM(long);
int main()
{
    union sp{
        float x;
        long y;
    }f;
    printf("Digita un float:");
    scanf("%f",&f.x);
    estraeS(f.y);
    estraeE(f.y);
    estraeM(f.y);
}

void estraeE(long n)
{
    long int xe,mask;
    mask = 2139095040;
    xe = n&mask;
    xe = xe>>23;
    xe = xe-bias;
    printf("Esponente:%ld\n",xe);
}
void estraeS(long n)
{
    long long int mask;
    long xs;
    mask = 2147483648;
    xs = n&mask;
    xs = xs>>31;
    printf("Segno:%ld\n",xs);
}
void estraeM(long n)
{
    long n2=n;
    n2=(n2<<9);
    n2=(n2>>9);
    printf("Mantissa:%ld\n",n2);//Rappresentazione in complemento a 2.
}
