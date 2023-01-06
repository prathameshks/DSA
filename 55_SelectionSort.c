#include <stdio.h>

void printArray(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void selectionSort(int* a, int n) {
    int temp, min;
    for (int i = 0; i < n - 1; i++) {
        min = i;
        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[min]) {
                min = j;
            }
        }
        if (i != min) {
            // swap
            temp = a[i];
            a[i] = a[min];
            a[min] = temp;
        }
    }
}

int main() {
    int a[] = {12, 3, 11, 4, 2, 1, 14, 9};
    // int a[] = {1, 2, 3, 4, 5, 6, 9};
    int n = sizeof(a) / sizeof(int);
    printArray(a, n);

    selectionSort(a, n);
    printf("After Sort\n");
    printArray(a, n);
    return 0;
}