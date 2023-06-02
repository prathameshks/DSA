#include <iostream>
#include <stack>
using namespace std;

class Solution {
   public:
    bool isValid(string s) {
        stack<char> para;
        for (char c : s) {
            if (c == '(') {
                para.push(')');
            } else if (c == '{') {
                para.push('}');
            } else if (c == '[') {
                para.push(']');
            } else if (c == ')' || c == ']' || c == '}') {
                // cout<<c;
                if (para.empty()) {
                    // cout<<'r';
                    return false;
                } else if (para.top() == c) {
                    para.pop();
                    // cout<<'p'<<para.empty();
                    
                }
            }
        }
        if (para.empty()) {
            return true;
        }else{
            return false;
        }
    }
};

int main() {
    Solution s;
    string q;
    cin >> q;
    
    cout <<endl<<endl<< s.isValid(q);
    return 0;
}