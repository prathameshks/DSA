#include <array>
#include <iostream>
using namespace std;

int main() {
    // <type,size>
    array<int, 5> arr = {1, 3, 4, 5, 2};

    array<int, 5> a(arr);

    cout << "Size of arr " << arr.size() << endl;
    cout << "max Size of arr " << arr.max_size() << endl;

    cout << "front of arr " << arr.front() << endl;
    cout << "Back of arr " << arr.back() << endl;
    cout << "empty or not " << arr.empty() << endl;

    for (int i : a) {
        cout << i << " ";
    }

    return 0;
}