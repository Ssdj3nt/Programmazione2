#include <stdio.h>
void stampastringa(char *a);
void stampastringa2D(char a[100][100]);
void main()
{
    //char stringa[4];
    //stampastringa(stringa);
    char stringa2D[100][100]={"ciao","hao","lmao"};
    stampastringa2D(stringa2D);
}
void stampastringa(char *a)
{
    a="Ciao";
    printf("%s",a);
}
void stampastringa2D(char a[100][100])
{
    int i;
    for(i=0;i<100;i++)
    {
        printf("%s\n",a[i]);
    }
}
