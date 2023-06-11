#include <stdio.h>
#include <stdlib.h>

struct queue {
    int f;
    int r;
    int* arr;
    int Max_size;
};

struct queue init(int size) {
    struct queue q;
    q.Max_size = size;
    q.f = -1;
    q.r = -1;
    q.arr = (int*)malloc(sizeof(int) * size);
    return q;
}

struct queue q;

int isEmpty() {
    if (q.r == -1) {
        return 1;
    }
    return 0;
}

int isFull() {
    if (q.r == q.Max_size - 1) {
        return 1;
    }
    return 0;
}

void enqueue(int d) {
    if (isFull(q)) {
        printf("Queue Overflow\n");
        return;
    }
    if (isEmpty(q)) {
        q.f = 0;
    }
    q.r += 1;
    q.arr[q.r] = d;
}

int dequeue() {
    if (isEmpty(q)) {
        printf("Queue Underflow\n");
        return -1;
    }
    if (q.r == q.f) {
        int d = q.arr[q.r];
        q.f = -1;
        q.r = -1;
        return d;
    }
    q.f += 1;
    return q.arr[q.f - 1];
}

int main() {
    q = init(10);
    printf("Is Empty %d \n", isEmpty());
    printf("Is Full %d \n", isFull());
    dequeue();
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(4);
    enqueue(4);
    enqueue(4);
    enqueue(4);
    enqueue(5);

    printf("Is Empty %d \n", isEmpty());
    printf("Is Full %d \n", isFull());
    return 0;
}