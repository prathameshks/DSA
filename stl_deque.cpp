#include <deque>
#include <iostream>
using namespace std;

int main() {
    // <type>
    deque<int> d;
    
    // deque<int> d1(d); //copy const

    cout << "Size of d " << d.size() << endl;

    d.push_back(1);
    d.push_front(2);

    for (int i : d) {
        cout << i << " ";
    }

    cout << "front of d " << d.front() << endl;
    cout << "Back of d " << d.back() << endl;
    cout << "empty or not " << d.empty() << endl;

    d.pop_back();
    d.pop_front();

    for (int i : d) {
        cout << i << " ";
    }

    cout << "max size " << d.max_size() << endl;
    return 0;
}