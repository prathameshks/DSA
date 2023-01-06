#include <stdio.h>

void printArray(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}
void insertionSort(int* a, int n) {
    for (int i = 1; i < n; i++) {
        int key = a[i];
        int j = i - 1;
        while (key < a[j] && j >= 0) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }
}


int main() {
    int a[] = {12, 3, 11, 4, 2, 1, 14, 9};
    // int a[] = {1, 2, 3, 4, 5, 6, 9};
    int n = sizeof(a) / sizeof(int);
    printArray(a, n);

    insertionSort2(a, n);
    printf("After Sort\n");
    printArray(a, n);
    return 0;
}