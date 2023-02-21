#include <stdio.h>
#include <stdlib.h>

// Definizione della struttura del nodo dell'albero
struct TreeNode {
    int val;
    struct TreeNode* left;
    struct TreeNode* right;
};

// Funzione per creare un nuovo nodo
struct TreeNode* newNode(int val) {
    struct TreeNode* node = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    node->val = val;
    node->left = NULL;
    node->right = NULL;
    return node;
}

// Funzione per inserire un nodo nell'albero
struct TreeNode* insert(struct TreeNode* root, int val) {
    if (root == NULL) {
        return newNode(val);
    }
    if (val < root->val) {
        root->left = insert(root->left, val);
    } else if (val > root->val) {
        root->right = insert(root->right, val);
    }
    return root;
}

// Funzione per stampare l'albero in ordine
void printInOrder(struct TreeNode* root) {
    if (root == NULL) {
        return;
    }
    printInOrder(root->left);
    printf("%d ", root->val);
    printInOrder(root->right);
}

// Esempio di utilizzo
int main() {
    struct TreeNode* root = NULL;
    root = insert(root, 5);
    insert(root, 3);
    insert(root, 7);
    insert(root, 1);
    insert(root, 9);
    printf("L'albero in ordine è: ");
    printInOrder(root);
    return 0;
}
