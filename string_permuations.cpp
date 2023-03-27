#include <iostream>
#include <vector>
using namespace std;

class Solution {
    void solve(vector<int> cur, vector<vector<int>> &op, int index) {
        if (cur.size() <= index) {
            op.push_back(cur);
            return;
        }
        vector<int> nxt;
        for (int i = index; i < cur.size(); i++) {
            nxt = cur;
            swap(nxt[index], nxt[i]);
            solve(nxt, op, index + 1);
        }
    }

   public:
    vector<vector<int>> permute(vector<int> &nums) {
        vector<vector<int>> ans;
        solve(nums, ans, 0);
        return ans;
    }
};

int main() {
    Solution s;
    vector<int> v = {1, 2, 3};
    vector<vector<int>> ans;
    ans = s.permute(v);
    for (auto &&i : ans) {
        for (auto &&j : i) {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}