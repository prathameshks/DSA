#include <iostream>
using namespace std;

bool isSorted(int arr[], int size) {
    if (size <= 1) return true;
    if (arr[0] > arr[1])
        return false;
    else
        return isSorted(arr + 1, size - 1);
}

int sumAray(int arr[], int size) {
    if (size == 0) return 0;
    if (size == 1)
        return arr[0];
    else
        return arr[0] + sumAray(arr + 1, size - 1);
}

bool linearSearch(int arr[], int size, int key) {
    if (size == 0) return 0;
    if (arr[0] == key)
        return 1;
    else
        return linearSearch(arr + 1, size - 1, key);
}

int binarySearch(int arr[], int start, int end, int key) {
    if (start > end) return -1;
    int mid = start + (end - start) / 2;
    if (arr[mid] == key) {
        return mid;
    } else if (arr[mid] < key) {
        return binarySearch(arr, mid + 1, end, key);
    } else {
        return binarySearch(arr, start, mid - 1, key);
    }
}

void reverseStr(string &str, int i = 0) {
    cout << str << "\n";
    if (i >= (str.length() / 2)) {
        return;
    }
    swap(str[i], str[str.length() - i - 1]);
    i++;
    reverseStr(str, i);
}

long long pow(long long num, int n) {
    if (n == 1) {
        return num;
    } else if (n == 0) {
        return 1;
    }

    if (n & 1) {
        return num * pow(num * num, n / 2);
    } else {
        return pow(num * num, n / 2);
    }
}

void bubbleSort(int arr[], int n) {
    if (n == 0 || n == 1) {
        return;
    }
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            swap(arr[i], arr[i + 1]);
        }
    }
    bubbleSort(arr, n - 1);
}

void selectionSort(int arr[], int n) {
    if (n == 0 || n == 1) {
        return;
    }
    int min = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] < arr[min]) {
            min = i;
        }
    }
    swap(arr[0], arr[min]);
    selectionSort(arr + 1, n - 1);
}

void insertionSort(int arr[], int n, int i = 0) {
    if (i == n) {
        return;
    }

    int temp = arr[i], j = i - 1;
    while (arr[j] > temp && j >= 0) {
        arr[j + 1] = arr[j];
        j--;
    }
    arr[j + 1] = temp;

    insertionSort(arr, n, i + 1);
}

void print(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int a[] = {-10, 13, 5, 7, 3, 21, 14};
    // string s = "abcdefg";
    // cout << s << endl;
    // reverseStr(s);
    // for (int i = 0; i < 15; i++) {
    //     cout << pow(3, i) << endl;
    // }
    int s = sizeof(a) / sizeof(int);
    print(a, s);
    insertionSort(a, s);
    print(a, s);
    return 0;
}