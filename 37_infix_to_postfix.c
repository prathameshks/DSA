#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node {
    char data;
    struct node* next;
};

struct node* root = NULL;

struct node* createNode(char data) {
    struct node* n = (struct node*)malloc(sizeof(struct node));
    n->data = data;
    n->next = NULL;
    return n;
}

int isempty() { return (root == NULL); }

int isFull() {
    struct node* n = (struct node*)malloc(sizeof(struct node));
    if (n == NULL) {
        return 1;
    } else {
        free(n);
        return 0;
    }
}

void push(int data) {
    struct node* n = createNode(data);
    n->next = root;
    root = n;
}

char pop() {
    if (!root) {
        return '\0';
    }

    struct node* n = root;
    root = root->next;
    char d = n->data;
    free(n);
    return d;
}

char top() {
    if (!root) return '\0';
    return root->data;
}

void disp() {
    struct node* temp = root;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

char* infix2postfix(char* infix) {
    int i = 0, j = 0;
    char* pos = (char*)malloc((strlen(infix) + 1) * sizeof(char));
    while (infix[i] != '\0') {
        if (infix[i] == '+' || infix[i] == '-') {
            if (top() == '/' || top() == '*') {
                while (top() != '\0') {
                    pos[j++] = pop();
                }
            }
            push(infix[i]);
        } else if (infix[i] == '*' || infix[i] == '/') {
            push(infix[i]);
        } else {
            pos[j++] = infix[i];
        }
        i++;
    }
    while (top() != '\0') {
        pos[j++] = pop();
    }
    pos[j++] = '\0';
    return pos;
}

int main() {
    char infix[20] = "a+d*a/v-s*d";
    char* post = infix2postfix(infix);
    printf("%s", post);
    return 0;
}