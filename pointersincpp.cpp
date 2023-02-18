#include <iostream>
using namespace std;

int main() {
    int i[5];
    char c[5] = "abcd";
    char ch[5] = {'a','b','c','d','e'};

    char x = 'a';
    char *p = "hello";

    // cout << i << " - " << *i << endl;
    // cout << c << " - " << *c << endl;
    // cout << ch << " - " << *ch << endl;
     
    // cout<< x <<endl;
    cout<< sizeof(p) <<endl;
    int* p2 = (int*) malloc(sizeof(int));
    cout<<p2;
    return 0;
}