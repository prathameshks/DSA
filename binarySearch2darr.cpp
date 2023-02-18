#include <iostream>
#include <vector>
using namespace std;

bool binarySearch(vector<vector<int>> arr, int elmt) {
    int col = arr[0].size();
    int row = arr.size();
    int start = 0, mid, end = row * col - 1;
    while (start <= end) {
        mid = start + (end - start) / 2;
        if (arr[mid / col][mid % col] == elmt) {
            return 1;
        } else if (arr[mid / col][mid % col] > elmt) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    return 0;
}

int main() {
    // vector<vector<int>> a = {{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};
    vector<vector<int>> a = {{1,1}};

    cout << binarySearch(a, 2);
    return 0;
}