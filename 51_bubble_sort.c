#include <stdio.h>

void printArray(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void bubbleSortAdaptive(int* a, int n) {
    int temp, swap;
    for (int i = n - 1; i > 0; i--) {
        swap = 1;
        for (int j = 0; j < i; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                swap = 0;
            }
        }
        if (swap) {
            return;
        }
    }
}
void bubbleSort(int* a, int n) {
    int temp;
    for (int i = n - 1; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

int main() {
    // int a[] = {12, 3, 11, 4, 2, 1, 14, 9};
    int a[] = {1, 2, 3, 4, 5, 6, 9};
    int n = sizeof(a) / sizeof(int);
    printArray(a, n);

    bubbleSort(a, n);
    printf("After Sort\n");
    printArray(a, n);
    return 0;
}