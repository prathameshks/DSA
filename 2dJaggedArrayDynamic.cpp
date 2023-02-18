#include <iostream>
using namespace std;

int main() {
    int n, m;
    cout << "Number of arrays:";
    cin >> n;

    // creating arrays for storage of array and number of elements
    int **arr = new int *[n];
    int *arrl = new int[n];

    // initializing arrays of diff size
    for (int i = 0; i < n; i++) {
        cout << "Number of elements in arr[" << i + 1 << "]:";
        cin >> m;
        arr[i] = new int[m];
        arrl[i] = m;
    }

    // input elements in array
    int elmt;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < arrl[i]; j++) {
            cout << "Enter element arr[" << i << "][" << i << "]:";
            cin >> elmt;
            arr[i][j] = elmt;
        }
    }

    // display arrays
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < arrl[i]; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // free memory assigned to arrays
    for (int i = 0; i < n; i++) {
        delete[] arr[i];
    }
    delete[] arr;
    delete[] arrl;

    return 0;
}