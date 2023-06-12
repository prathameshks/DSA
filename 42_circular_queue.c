#include <stdio.h>
#include <stdlib.h>

struct c_queue {
    int f;
    int r;
    int* arr;
    int Max_size;
};

struct c_queue init(int size) {
    struct c_queue q;
    q.Max_size = size;
    q.f = -1;
    q.r = -1;
    q.arr = (int*)malloc(sizeof(int) * size);
    return q;
}

struct c_queue q;

int isEmpty() {
    if (q.r == -1) {
        return 1;
    }
    return 0;
}

int isFull() {
    if (q.f == (q.r + 1) % q.Max_size) {
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
    q.r = (q.r + 1) % q.Max_size;
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
    q.f = (q.f + 1) % q.Max_size;
    return q.arr[q.f - 1];
}

void disp(){
    printf("Front %d, ",q.f);
    printf("Rear %d \n",q.r);

    for (int i = 0; i < q.Max_size; i++)
    {
        printf("%d, ",q.arr[i]);
    }
    printf("\n");
}

int main() {
    q = init(5);
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