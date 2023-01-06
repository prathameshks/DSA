#include <stdio.h>

void printArray(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void merge(int a[], int low, int mid, int high) {
    int b[100];
    int i = low;
    int j = mid + 1;
    int k = low;
    while (i <= mid && j <= high) {
        if (a[i] < a[j]) {
            b[k] = a[i];
            i += 1;
            k += 1;
        } else {
            b[k] = a[j];
            j += 1;
            k += 1;
        }
    }
    while (i <= mid) {
        b[k] = a[i];
        i += 1;
        k += 1;
    }
    while (j <= high) {
        b[k] = a[j];
        j += 1;
        k += 1;
    }
    for (int x = low; x <= high; x++) {
        a[x] = b[x];
    }
}

void mergeSort(int* arr, int low, int high) {
    int mid;
    if (low < high) {
        mid = low + (high - low) / 2;
        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);
        merge(arr, low, mid, high);
    }
}

int main() {
    int a[] = {12, 3, 11, 4, 2, 1, 14, 9};
    // int a[] = {1, 2, 3, 4, 5, 6, 9};
    int n = sizeof(a) / sizeof(int);
    printArray(a, n);

    mergeSort(a, 0, n - 1);
    printf("After Sort\n");
    printArray(a, n);
    return 0;
}