#include <stdio.h>

void printArray(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int partition(int* arr, int low, int high) {
    int i, j, pivot, temp;
    pivot = arr[low];
    i = low + 1;
    j = high;
    while (i < j) {
        while (arr[i] <= pivot && i <= high) {
            i++;
        }
        while (arr[j] > pivot) {
            j--;
        }
        // swap i and j
        if (i < j) {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    // swap j and pivot
    temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;
    return j;
}

void quickSort(int* arr, int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    int a[] = {12, 3, 11, 4, 2, 1, 14, 9};
    // int a[] = {1, 2, 3, 4, 5, 6, 9};
    int n = sizeof(a) / sizeof(int);
    printArray(a, n);

    quickSort(a, 0, n - 1);
    printf("After Sort\n");
    printArray(a, n);
    return 0;
}