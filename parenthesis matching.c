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

int main() {
    struct node* stack = NULL;
    char exp[100];
    scanf(exp);
    int valid = 1;
    int i = 0;
    while (exp[i] != '\0') {
        if (exp[i] == '(') {
            stack = push(stack, ')');
        } else if (exp[i] == '[') {
            stack = push(stack, ']');
        } else if (exp[i] == '{') {
            stack = push(stack, '}');
        } else if (exp[i] == ')' || exp[i] == ']' || exp[i] == '}') {
            if (isempty(stack)) {
                valid = 0;
                break;
            }
            if (top(stack) != exp[i]) {
                valid = 0;
                break;
            }
            stack = pop(stack);
        }
        i++;
    }

    if (valid == 1 && isempty(stack)) {
        printf("Valid\n");
    } else {
        printf("Invalid\n");
    }

    return 0;
}