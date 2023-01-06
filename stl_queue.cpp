#include <iostream>
#include <queue>
using namespace std;

int main() {
    // <type>
    queue<string> q;

    // queue<string> b(q); //copy const

    cout << "Size of q " << q.size() << endl;

    q.push("first");
    q.push("second");
    q.push("third");

    cout << "front of q " << q.front() << endl;

    cout << "empty or not " << q.empty() << endl;
    
    int s = q.size();
    for (int i = 0; i < s; i++) {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}