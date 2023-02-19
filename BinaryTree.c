#include <stdio.h>
#include <stdlib.h>
struct albero{
    int val;
    struct albero *sinistra;
    struct albero *destra;
};
struct albero *nuovo_nodo(int x){
    struct albero *nodo= (struct albero*)malloc(sizeof(struct albero));
    nodo->val=x;
    nodo->sinistra=NULL;
    nodo->val+NULL;
    return nodo;
}
void pre_order(struct albero *nodo){
    if(nodo==NULL)
        return;

    printf("%d",nodo->val);
    pre_order(nodo->sinistra);
    pre_order(nodo->destra);
}
int main(){
    struct albero *radice=nuovo_nodo(1);
    radice->sinistra= nuovo_nodo(2);
    radice->destra= nuovo_nodo(3);
    radice->sinistra->sinistra= nuovo_nodo(4);
    radice->sinistra->destra= nuovo_nodo(5);

    puts("Attraversamento albero pre-order:");
    pre_order(radice);
}
