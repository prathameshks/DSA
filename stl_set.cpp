#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s;

    s.insert(2);
    s.insert(2);
    s.insert(9);
    s.insert(1);
    s.insert(1);
    s.insert(22);
    s.insert(12);
    s.insert(21);
    s.insert(24);

    for (int i : s) {
        cout << i << " ";
    }
    cout << endl;

    /*
    //count function
    cout<<"Count of 2 "<<s.count(2)<<endl; //present or not -> 1
    cout<<"Count of 5 "<<s.count(5)<<endl; //present or not -> 0
    */

    /*
    //erase function
    set<int>::iterator itr = s.begin();
    itr++;
    itr++;

    // s.erase(++s.begin());
    s.erase(itr);

    for (int i : s) {
        cout << i << " ";
    }
    cout << endl;
    */

    /*
    // find function
    set<int>::iterator itr2 = s.find(2);
    cout << "Find 2 " << *itr2 << endl;
    itr2 = s.find(11);
    cout << "Find 11 " << *itr2
         << endl;  // return n index ie for {0,1,2,3,4} -> 5
    */

    /*
    for (auto it = s.begin(); it != s.end(); it++) {
        cout << *it << " ";
    }
    */

    return 0;
}