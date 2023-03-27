#include <iostream>
#include <vector>
using namespace std;

void powerset(vector<int> a, vector<int> cur, int i, vector<vector<int>> &ans) {
    if (i == a.size()) {
        ans.push_back(cur);
        return;
    }

    powerset(a, cur, i + 1, ans);
    cur.push_back(a[i]);
    powerset(a, cur, i + 1, ans);
}

void print(vector<vector<int>> a) {
    for (auto i : a) {
        for (auto j : i) {
            cout << j << " ";
        }
        cout << endl;
    }
}

int main() {
    vector<int> in = {1, 2, 3};
    vector<vector<int>> out;

    powerset(in, {}, 0, out);

    print(out);
    return 0;
}