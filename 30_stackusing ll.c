#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

struct node* createNode(int data) {
    struct node* n = (struct node*)malloc(sizeof(struct node));
    n->data = data;
    n->next = NULL;
    return n;
}

int isempty(struct node* root) { return (root == NULL); }

int isFull(struct node* root) {
    struct node* n = (struct node*)malloc(sizeof(struct node));
    if (n == NULL) {
        return 1;
    } else {
        free(n);
        return 0;
    }
}

struct node* push(struct node* top, int data) {
    struct node* n = createNode(data);
    n->next = top;
    top = n;
    return top;
}

struct node* pop(struct node* top) {
    struct node* n = top;
    top = top->next;
    free(n);
    return top;
}

int top(struct node* top) { return top->data; }

int peek(struct node* top, int pos) {
    struct node* temp = top;
    for (int i = 0; i < pos && temp != NULL; i++) {
        temp = temp->next;
    }
    if (temp != NULL) {
        return temp->data;
    } else {
        return -1;
    }
}

void disp(struct node* top) {
    struct node* temp = top;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    struct node* stack = NULL;
    stack = push(stack, 1);
    stack = push(stack, 2);
    stack = push(stack, 3);
    printf("%d \n", peek(stack, 0));
    printf("%d \n", peek(stack, 1));
    printf("%d \n", peek(stack, 2));
    printf("%d \n", peek(stack, 3));
    printf("%d \n", peek(stack, 4));
    return 0;
}