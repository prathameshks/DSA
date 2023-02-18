#include <iostream>
using namespace std;
const int m = 1000000007;

int factorial(int n) {
    int res = 1;
    while (n > 0) {
        res = (res * (n % m)) % m;
        n--;
    }
    return res;
}

int main() {
    cout << factorial(5) << endl;
    cout << factorial(0) << endl;
    cout << factorial(1) << endl;
    cout << factorial(212) << endl;
    return 0;
}