#include <vector>
#include <iostream>
using namespace std;

int main() {
    
    // <type>
    vector<int> a;
    
    // <type> a(size,element)
    // vector<int> b(5,1); //{1,1,1,1,1}
    
    // <type> a(a)
    // vector<int> c(a); //copy of a in c

    cout << "Size of a " << a.size() << endl; //0
    cout << "capacity of a " << a.capacity() << endl; //0

    a.push_back(2);

    cout << "Size of a " << a.size() << endl; //1
    cout << "capacity of a " << a.capacity() << endl; //1
    
    a.push_back(3);
    cout << "Size of a " << a.size() << endl; //2
    cout << "capacity of a " << a.capacity() << endl; //2
   
    a.push_back(4);
    cout << "Size of a " << a.size() << endl; //3
    cout << "capacity of a " << a.capacity() << endl; //4

    a.pop_back();
   
    // a.clear();
    // cout << "Size of a " << a.size() << endl; //0
    // cout << "capacity of a " << a.capacity() << endl; //4
   
    // cout << "front of a " << a.front() << endl;
    // cout << "Back of a " << a.back() << endl;
    // cout << "empty or not " << a.empty() << endl; //1

    for (int i : a) {
        cout << i << " ";
    }

    return 0;
}