#include <list>
#include <iostream>
using namespace std;

//DOUBLY LINKED LIST

int main() {
    
    // <type>
    list<int> l;
    
    // list<int> b(l); //copy const
    
    list<int> n(5,1); //{1,1,1,1,1}
    
    cout << "Size of a " << l.size() << endl; //0
    cout << "max size of a " << l.max_size() << endl; //0

    l.push_back(2);
    l.push_back(3);

    l.push_front(4);
    
    cout << "Size of a " << l.size() << endl; //0

    l.pop_back();

    l.pop_front();
   
    l.clear();
   
    cout << "front of a " << l.front() << endl;
    cout << "Back of a " << l.back() << endl;
    cout << "empty or not " << l.empty() << endl; 

    for (int i : n) {
        cout << i << " ";
    }

    return 0;
}