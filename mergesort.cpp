#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &a, int s, int e) {
    int mid = s + (e - s) / 2;
    vector<int> m;
    int i = s;
    int j = mid+1;
    while (i <= mid && j <= e) {
        if (a[i] < a[j]) {
            m.push_back(a[i]);
            i++;
        } else {
            m.push_back(a[j]);
            j++;
        }
    }
    while (i <= mid) {
        m.push_back(a[i]);
        i++;
    }
    while (j <= e) {
        m.push_back(a[j]);
        j++;
    }

    int k = 0;
    for (int i = s; i <= e; i++) {
        a[i] = m[k];
        k++;
    }
}

void merge_sort(vector<int> &a, int s, int e) {
    if (s >= e) {
        return;
    }
    
    int mid = s + (e - s) / 2;
    merge_sort(a, s, mid);
    merge_sort(a, mid+1, e);
    merge(a, s, e);
}

void mergeSort(vector<int> &arr, int n) {
    merge_sort(arr, 0, n - 1);
}

int main() {
    vector<int> a = {1, 5, 2, 4, 2, 3, 3, 2, 1, 54, 4, 5, 67, 10, 8, 8};
    mergeSort(a, a.size());
    for (auto &&i : a) {
        cout << i << " ";
    }

    return 0;
}