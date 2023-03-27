// sum of two array
//  a = {1,2,3,4,5}
//  b = {6,7,8}
//  1 2 3 4 5
//   +  6 7 8
//  1 3 0 2 3
#include <iostream>
using namespace std;
void reverse(int brr[], int n) {
    int s = 0;
    int e = 4;
    while (s < e) {
        swap(brr[s], brr[e]);
        s++;
        e--;
    }
    for (int i = 0; i < 5; i++) {
        cout << brr[i] << " ";
    }
    cout << endl;
}
void printarr(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void sumarr(int arr1[], int size1, int arr2[], int size2) {
    int i = size1 - 1;
    int j = size2 - 1;
    int carry = 0;
    int brr[5];
    int k = 0;

    while (i >= 0 && j >= 0) {
        int val1 = arr1[i];
        int val2 = arr2[j];
        int sum = arr1[i] + arr2[j] + carry;
        carry = sum / 10;
        sum = sum % 10;
        brr[k] = sum;
        k++;
        i--;
        j--;
    }
    while (i >= 0) {
        int val1 = arr1[i];
        int sum = arr1[i] + carry;
        carry = sum / 10;
        sum = sum % 10;
        brr[k] = sum;
        k++;
        i--;
    }
    while (j >= 0) {
        int val1 = arr2[j];
        int sum = arr2[j] + carry;
        carry = sum / 10;
        sum = sum % 10;
        brr[k] = sum;
        k++;
        j--;
    }
    reverse(brr, 5);
}





int main() {
    int arr1[5] = {1, 3, 5, 7, 9};
    int size1 = sizeof(arr1) / sizeof(int);
    printarr(arr1, size1);
    int arr2[5] = {2, 4, 6, 8};
    int size2 = sizeof(arr2) / sizeof(int);
    printarr(arr2, size2);
    sumarr(arr1, 5, arr2, 4);
}