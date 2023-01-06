#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> m;
    m[3] = "Kaustubh";
    m[2] = "Akhilesh";
    m[4] = "Yash";
    m[1] = "prathamesh";
    m[5] = "Omkar";

    m.insert({6, "ujwal"});

    for (auto i : m) {
        cout << i.first << ":" << i.second << endl;
    }

    m.erase(2);

    cout << "Count 5 " << m.count(5) << endl;    // present of not 1
    cout << "Count 45 " << m.count(45) << endl;  // present of not 0

    cout << "Find 5 " << m.find(5)->second << endl;

    for (auto i : m) {
        cout << i.first << ":" << i.second << endl;
    }

    return 0;
}