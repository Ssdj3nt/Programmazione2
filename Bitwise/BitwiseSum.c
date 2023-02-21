#include <stdio.h>
int main()
{
    int op1,op2,XOR,AND,SHIFTAND=1;

    printf("Inserisci il primo numero di cui effettuare la somma:");
    scanf("%d",&op1);
    printf("Inserisci il secondo numero di cui effettuare la somma:");
    scanf("%d",&op2);

    while(SHIFTAND != 0)
    {
        XOR = op1^op2;
        AND = op1&op2;
        SHIFTAND = AND<<1;
        op1 = XOR;
        op2 = SHIFTAND;
    }
    printf("Somma:%d",XOR);
}
