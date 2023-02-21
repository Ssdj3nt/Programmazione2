#include <stdio.h>
#include <stdlib.h>

// Struttura per rappresentare un nodo dell'albero binario di ricerca
struct node {
    int key;
    struct node *left;
    struct node *right;
};

// Funzione per creare un nuovo nodo dell'albero binario di ricerca
struct node* new_node(int key) {
    struct node *new_node = (struct node*)malloc(sizeof(struct node));
    new_node->key = key;
    new_node->left = NULL;
    new_node->right = NULL;
    return new_node;
}

// Funzione per inserire un nuovo nodo nell'albero binario di ricerca
struct node* insert(struct node *root, int key) {
    if (root == NULL) {
        return new_node(key);
    }
    if (key < root->key) {
        root->left = insert(root->left, key);
    } else if (key > root->key) {
        root->right = insert(root->right, key);
    }
    return root;
}

// Funzione per cercare una chiave nell'albero binario di ricerca
struct node* search(struct node *root, int key) {
    if (root == NULL || root->key == key) {
        return root;
    }
    if (key < root->key) {
        return search(root->left, key);
    } else {
        return search(root->right, key);
    }
}

// Funzione per stampare l'albero binario di ricerca in ordine crescente
void print_inorder(struct node *root) {
    if (root != NULL) {
        print_inorder(root->left);
        printf("%d ", root->key);
        print_inorder(root->right);
    }
}

// Funzione principale per testare l'algoritmo di ricerca
int main() {
    struct node *root = NULL;
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);

    printf("Albero binario di ricerca in ordine crescente:\n");
    print_inorder(root);

    int key = 60;
    struct node *result = search(root, key);
    if (result == NULL) {
        printf("\n%d non trovato nell'albero\n", key);
    } else {
        printf("\n%d trovato nell'albero\n", result->key);
    }

    return 0;
}

