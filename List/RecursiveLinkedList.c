#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    char data;
    struct node *next;
} Node;
typedef Node *LINK;

LINK array_to_list(char s[], int index) {
    if (s[index] == '\0') {
        return NULL;
    }

    LINK head = (Node*) malloc(sizeof(Node));
    head->data = s[index];
    head->next = array_to_list(s, index+1);
    return head;
}

void print_list(Node* head) {
    while (head != NULL) {
        printf("%c ", head->data);
        head = head->next;
    }
    printf("\n");
}

int main() {
    char array[] = "Questa e' una stringa di prova";
    LINK head = array_to_list(array, 0);
    print_list(head);
    return 0;
}
