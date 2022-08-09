#include <stdio.h>

enum logical {Gen,Feb,Mar,Apr,Mag,Giu,Lug,Ago,Set,Ott,Nov,Dic};
typedef enum logico {false,true};

int main()
{
    enum logical MeseCorrente;
    MeseCorrente = Lug;
    enum logical MeseProssimo;
    MeseProssimo = MeseCorrente+1;
    printf("\n Il mese attuale: %d \n Il numero corrispondente al mese prossimo: %d",(MeseCorrente+1),(MeseProssimo+1));

    int A;
    A= 5==4;

    if(A==true)
    {
        printf("\n Il valore e' 1");
    }
    else if(A==false)
    {
        printf("\n Il valore e' 0");
    }
}
