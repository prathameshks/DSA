#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

struct queue {
    struct node* front;
    struct node* rear;
};

struct queue init() {
    struct queue q;
    q.front = NULL;
    q.rear = NULL;
    return q;
}

struct queue q;

int isEmpty() {
    if (q.front == NULL) {
        return 1;
    }
    return 0;
}

int isFull() {
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    if (temp == NULL) {
        return 1;
    }
    free(temp);
    return 0;
}

void enqueue(int d) {
    if (isEmpty(q)) {
        struct node* temp = (struct node*)malloc(sizeof(struct node));
        temp->data = d;
        temp->next = NULL;
        q.front = temp;
        q.rear = temp;
    } else {
        struct node* temp = (struct node*)malloc(sizeof(struct node));
        temp->data = d;
        temp->next = NULL;
        q.rear->next = temp;
        q.rear = temp;
    }
}

int dequeue() {
    if (isEmpty(q)) {
        printf("Queue Underflow\n");
        return -1;
    }
    struct node* temp = q.front;
    int d = q.front->data;
    if (q.rear == q.front) {
        q.front = NULL;
        q.rear = NULL;
    } else {
        q.front = q.front->next;
    }
    free(temp);
    return d;
}

void disp() {
    struct node* temp = q.front;
    while(temp !=NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    q = init();
    printf("Is Empty %d \n", isEmpty());
    printf("Is Full %d \n", isFull());
    disp();
    dequeue();
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    enqueue(1);
    dequeue();
    dequeue();
    disp();
    dequeue();
    enqueue(11);
    enqueue(12);
    enqueue(13);
    dequeue();
    enqueue(14);
    disp();
    printf("Is Empty %d \n", isEmpty());
    printf("Is Full %d \n", isFull());
    return 0;
}