#include <iostream>
using namespace std;

int gcd(int a, int b) {
    int n1 = a, n2 = b;
    while (n1 != 0 && n2 != 0) {
        if (n1 > n2)
            n1 = (n1 % n2);
        else
            n2 = (n2 % n1);
    }
    if (n1 > n2) return n1;
    return n2;
}

int main() {
    int a = 25, b = 625;
    // cout << gcd(a, b)<<endl;
    cout << gcd(139, 638) << endl;
    cout << gcd(1255, 625) << endl;
    cout << gcd(174, 864) << endl;

    return 0;
}