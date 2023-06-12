#include <stdio.h>
#include <stdlib.h>

struct dequeue {
    int f;
    int r;
    int* arr;
    int Max_size;
};

struct dequeue init(int size) {
    struct dequeue q;
    q.Max_size = size;
    q.f = -1;
    q.r = -1;
    q.arr = (int*)malloc(sizeof(int) * size);
    return q;
}

struct dequeue q;

int isEmpty() {
    if (q.r == -1) {
        return 1;
    }
    return 0;
}

int isFullFront() {
    if (q.f == 0) {
        return 1;
    }
    return 0;
}
int isFullBack() {
    if (q.r == q.Max_size - 1) {
        return 1;
    }
    return 0;
}

void enqueueFront(int d) {
    if (isFullFront(q)) {
        printf("Queue Overflow\n");
        return;
    }
    if (isEmpty(q)) {
        q.f = 0;
        q.r = 0;
    } else {
        q.f -= 1;
    }
    q.arr[q.f] = d;
}
void enqueueBack(int d) {
    if (isFullBack(q)) {
        printf("Queue Overflow\n");
        return;
    }
    if (isEmpty(q)) {
        q.f = 0;
    }
    q.r += 1;
    q.arr[q.r] = d;
}

int dequeueFront() {
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

int dequeueBack() {
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
    q.r -= 1;
    return q.arr[q.r + 1];
}

int main() {
    q = init(10);
    // no need to test it is fine
    return 0;
}