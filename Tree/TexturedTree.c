#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int value;
    struct node *parent;
    struct node *left_child;
    struct node *right_child;
} Node;

Node* createNode(int value, Node *parent) {
    Node* newNode = (Node*) malloc(sizeof(Node));
    newNode->value = value;
    newNode->parent = parent;
    newNode->left_child = NULL;
    newNode->right_child = NULL;
    return newNode;
}

void addChild(Node *parent, int value) {
    if (parent->left_child == NULL) {
        parent->left_child = createNode(value, parent);
    } else if (parent->right_child == NULL) {
        parent->right_child = createNode(value, parent);
    } else {
        printf("Il nodo ha già due figli.\n");
    }
}

void printTree(Node *node) {
    if (node == NULL) {
        return;
    }
    printf("%d\n", node->value);
    printTree(node->left_child);
    printTree(node->right_child);
}

void printParent(Node *node) {
    if (node == NULL) {
        printf("Nodo non trovato.\n");
        return;
    }
    if (node->parent == NULL) {
        printf("Il nodo è la radice dell'albero.\n");
        return;
    }
    printf("Il padre del nodo %d è %d.\n", node->value, node->parent->value);
    printParent(node->parent);
}

int main() {
    Node *root = createNode(1, NULL);
    addChild(root, 2);
    addChild(root, 3);
    addChild(root->left_child, 4);
    addChild(root->left_child, 5);
    addChild(root->right_child, 6);
    addChild(root->right_child, 7);
    printTree(root);

    printf("Risaliamo ai nodi genitori:\n");
    printParent(root->left_child->right_child);
    printParent(root->right_child->left_child);

    return 0;
}
