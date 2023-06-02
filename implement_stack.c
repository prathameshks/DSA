#include <stdio.h>
#include <stdlib.h>

struct stack {
    int size;
    int top;
    int *arr;
};

int isempty(struct stack *s) {
    if (s->top == -1) {
        return 1;
    } else {
        return 0;
    }
}

int isfull(struct stack *s) {
    if (s->top == s->size - 1) {
        return 1;
    } else {
        return 0;
    }
}

void insert(struct stack *s, int a) {
    if (isfull(s)) {
        printf("stack overflow\n");

    } else {
        s->top += 1;
        s->arr[s->top] = a;
        printf("inserted \n");
    }
}

void pop(struct stack *s) {
    if (isempty(s)) {
        printf("Stack Underflow\n");
    } else {
        s->top -= 1;
        printf("poped %d\n", s->arr[s->top + 1]);
    }
}

void disp(struct stack *s) {
    printf("stack is\n");
    for (int i = 0; i <= s->top; i++) {
        printf("%d ", s->arr[i]);
    }
    printf("\n");
}

int main() {
    struct stack s;
    printf("Enter size of stack:");
    scanf("%d", &s.size);
    s.top = -1;
    s.arr = (int *)malloc(sizeof(int) * s.size);
    int a, ch;
    do {
        printf("MENU\n1.push\n2.pop\n3.display\n0.exit\n");
        printf("Enter your choice:");
        scanf("%d", &ch);
        switch (ch) {
            case 1:
                printf("Enter element to insert:");
                scanf("%d", &a);
                insert(&s, a);
                break;
            case 2:
                pop(&s);
                break;
            case 3:
                disp(&s);
                break;
            case 0:
                printf("Bye\n");
                break;
            default:
                printf("Invalid choice\n");
                break;
        }
    } while (ch != 0);

    return 0;
}