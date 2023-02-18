#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4, 33, 6, 16, 7};
    sort(v.begin(), v.end());

    cout << "Binary Search -> " << binary_search(v.begin(), v.end(), 1) << endl;
    cout << "Binary Search -> " << binary_search(v.begin(), v.end(), 22)
         << endl;
    cout << "Lower Bound 6 ->" << lower_bound(v.begin(), v.end(), 6) - v.begin()
         << endl;  // 4 index
    cout << "Upper Bound 6 ->" << upper_bound(v.begin(), v.end(), 6) - v.begin()
         << endl;  // pos of 7 ie index 6

    int a = 2, b = 4;

    cout << "Max " << max(a, b) << endl;
    cout << "min " << min(a, b) << endl;

    cout << a << " & " << b << endl;
    swap(a, b);
    cout << a << " & " << b << endl;

    string s = "abcdefg";
    cout << s << endl;
    reverse(s.begin(), s.begin() + 4);
    cout << s << endl;

    for (auto i : v) {
        cout << i << " ";
    }
    cout << "\n";

    rotate(v.begin(), v.begin() + 2, v.end() - 2);

    for (auto i : v) {
        cout << i << " ";
    }
    cout << "\n";

    return 0;
}