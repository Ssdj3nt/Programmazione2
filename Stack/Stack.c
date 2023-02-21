#include <stdio.h>
#include <stdlib.h>
void push(char elem,char stack[],int *head){
    *(stack+(++*head))=elem;
}
void pop(char *elem,char stack[], int *head){
    *elem=*(stack+(*head)--);
}
void inverti(char a[],int len){
    int i,head=-1;
    char *temp=(char*)malloc(sizeof(char));
    for(i=0;i<len;i++){
        push(a[i],temp,&head);
    }
    for(i=0;i<len;i++){
        pop(&a[i],temp,&head);
    }
    free(temp);
}
int main(){
    char array[5]={'D','C','B','A'};
    int size = sizeof(array)/sizeof(array[0]);
    puts("Array prima:");
    for(int i=0;i<size;i++){
        printf("%c\n",array[i]);
    }
    puts("Array dopo:");
    inverti(array,size);
    for(int i=0;i<size;i++){
        printf("%c\n",array[i]);
    }
}
