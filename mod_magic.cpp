#include <iostream>
using namespace std;

/*
rules
1. Addition
(a + b) % m = ((a % m) + (b % m)) % m

2. Multiplication
(a * b) % m = ((a % m) * (b % m)) % m


3. Division does not work like above
(a / b) % m = ((a % m) * (inverse(b) % m)) % m
inverse(b) exists if b,m is co prime
inverse(b) = pow(b,m-2);

*/

int main() { return 0; }