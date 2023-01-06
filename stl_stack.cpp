#include <iostream>
#include <stack>
using namespace std;

int main() {
    // <type>
    stack<int> n;

    // stack<int> b(n); //copy const

    cout << "Size of a " << n.size() << endl;

    n.push(1);
    n.push(2);
    n.push(21);

    cout << "top of a " << n.top() << endl;

    cout << "empty or not " << n.empty() << endl;
    int s = n.size();
    for (int i = 0; i < s; i++) {
        cout << n.top() << " ";
        n.pop();
    }

    return 0;
}