#include <iostream>
#include <queue>
using namespace std;

int main() {
    // greater<int> g;
    // cout<<g(2,1)<<endl;//1
    // cout<<g(1,1)<<endl;//0
    // cout<<g(1,2)<<endl;//0

    priority_queue<int> q1;  // max heap

    priority_queue<int, vector<int>, greater<int>> q2;  // min heap

    q1.push(1);
    q1.push(11);
    q1.push(3);
    q1.push(4);
    q1.push(2);

    int n1 = q1.size();
    for (int i = 0; i < n1; i++) {
        cout << q1.top() << " ";
        q1.pop();
    }
    cout << endl;

    q2.push(1);
    q2.push(11);
    q2.push(3);
    q2.push(4);
    q2.push(2);

    int n2 = q2.size();
    for (int i = 0; i < n2; i++) {
        cout << q2.top() << " ";
        q2.pop();
    }
    cout << endl;

    cout << "Empty or not " << q2.empty();
}