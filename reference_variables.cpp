#include <iostream>
using namespace std;

int* fun(int &n) {
    int* ptr = &n;
    return ptr;
}

int main() {
    int m = 5;
    cout<<&m<<endl;

    cout << fun(m)<<endl;

    return 0;
}