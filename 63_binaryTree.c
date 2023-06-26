#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node* left;
    struct node* right;
} node;

node* new_node(int data) {
    node* n = (node*)malloc(sizeof(node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
}

void preorder(node* n) {
    if (n) {
        printf("%d ", n->data);
        preorder(n->left);
        preorder(n->right);
    }
}

void inorder(node* n) {
    if (n) {
        inorder(n->left);
        printf("%d ", n->data);
        inorder(n->right);
    }
}

void postorder(node* n) {
    if (n) {
        postorder(n->left);
        postorder(n->right);
        printf("%d ", n->data);
    }
}



int main() {
    // code
    node* root = new_node(1);
    root->left = new_node(2);
    root->right = new_node(3);
    preorder(root);
    printf("\n");
    inorder(root);
    printf("\n");
    postorder(root);
    printf("\n");
    return 0;
}