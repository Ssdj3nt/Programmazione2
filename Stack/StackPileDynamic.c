#include <stdio.h>
#include <stdlib.h>
void inverti(char*,int);
void push(char*,char,int*);
void pop(char*,char*,int*);

int main(void)
{
    char stack[] = {'a','b','c','d','e'};
    int i, len = sizeof(stack) / sizeof(stack[0]);
    puts("Lo stack:");
    for (i = 0; i < len; i++) {
        printf("%c\t", stack[i]);
    }
    printf("\n");
    inverti(stack, len);
    puts("Stack inverso:");
    for (i = 0; i < len; i++) {
        printf("%c\t", stack[i]);
    }
    return 0;
}

void inverti(char a[], int l) {
    char *buffer;
    int j, head = -1;
    buffer = calloc(l, sizeof(a[0]));
    for (j = 0; j < l; j++) {
        push(buffer, a[j], &head);
    }
    for (j = 0; j < l; j++) {
        pop(a + j, buffer, &head);
    }
    free(buffer);
}

void push(char *p_stack, char elem, int *head) {
    *(p_stack + ++(*head)) = elem;
}

void pop(char *elem, char *p_stack, int *head) {
    *elem = *(p_stack + (*head)--);
}
